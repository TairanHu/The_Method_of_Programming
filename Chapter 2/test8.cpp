

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int num = INT_MAX;
int c1;
int c2;
int tmp = 0;

void QuickSelect(vector<int> &S, int left, int right)
{
    int i = left;
    int j = right;
    int pivot = S[right];

    if(i > j)
    {
        return;
    }

    while(i < j)
    {
        while(i < j && S[i] < pivot)
        {
            i++;
        }
        if(i < j)
        {
            S[j--] = S[i];
        }

        while(i < j && S[j] > pivot)
        {
            j--;
        }
        if(i < j)
        {
            S[i++] = S[j];
        }
    }
    S[j] = pivot;

    if(c1 == c2)
    {
        if(c1 == j)
        {
            num = S[j];
        }
        else if(c1 < j)
        {
            QuickSelect(S, left, j-1);
        }
        else
        {
            QuickSelect(S, j+1, right);
        }
    }
    else
    {
        if(c1 == j)
        {
            tmp += pivot;
            QuickSelect(S, j+1, right);
        }
        else if(c2 == j)
        {
            tmp += pivot;
            QuickSelect(S, left, j-1);
        }
        else if(c2 < j)
        {
            QuickSelect(S, left, j-1);
        }
        else if(c1 > j)
        {
            QuickSelect(S, j+1, right);
        }
    }
}

int main()
{
    vector<int> Nums;

    int size;
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        int tt;
        cin >> tt;
        Nums.push_back(tt);
    }

    if(size % 2)
    {
        c1 = size/2;
        c2 = size/2;
    }
    else
    {
        c1 = size/2-1;
        c2 = size/2;
    }

    QuickSelect(Nums, 0, size-1);

    if(num == INT_MAX)
    {
        num = tmp/2;
    }

    cout << num << endl;

    return 0;
}


