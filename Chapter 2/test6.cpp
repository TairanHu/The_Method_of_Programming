#include <iostream>
#include<algorithm>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

#define HEAP 20
#define RESULT 500

int cmp(const void *a, const void *b) {
    return *(int *) b - *(int *) a;
}

//��ʼ����������
void init(int arr[HEAP][RESULT], int rows, int cols)
{
    srand((unsigned int) time(NULL));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            arr[i][j] = rand() % RESULT;
        }
        qsort(arr[i], cols, sizeof(int), cmp);
    }

//    for (int i = 0; i < rows; ++i)
//    {
//        for (int j = 0; j < cols; ++j)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
}

int* findTopK(int src[HEAP][RESULT], int rows, int cols)
{
    int* tmp = new int[HEAP];
    int* result = new int[RESULT];

    for (int i = 0; i < HEAP; ++i)
    {
        tmp[i] = src[i][0];
    }

    vector<int> heap(tmp, tmp + HEAP);
    make_heap(heap.begin(), heap.end());

    int index = 0;
    for (int i = 1; i < RESULT; ++i)
    {
        for (int j = 0; j < HEAP; ++j)
        {
            result[index++] = heap.front();
            if (index == RESULT)
            {
                i = RESULT;
                break;
            }
            /*pop_heap�㷨���ʣ����Ѷ�Ԫ�ط���β��*/
            pop_heap(heap.begin(), heap.end());
            heap.pop_back();    //ɾ��β��

            heap.push_back(src[j][i]);  //���������м���,�ٽ���
            push_heap(heap.begin(), heap.end());
        }
    }

    return result;
}

int main()
{

    int src[HEAP][RESULT] = { 0 };

    init(src, HEAP, RESULT);

    int* result = findTopK(src, HEAP, RESULT);

    cout << "result: ";
    for (int i = 0; i < RESULT; ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
