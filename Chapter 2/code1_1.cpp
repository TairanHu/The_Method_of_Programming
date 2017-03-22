

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int num = INT_MAX;

void QuickSelect(vector<int> &S, int k, int left, int right)
{
    int i = left;
    int j = right;
    int pivot = S[right];

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

    if(k == j)
    {
        num = S[j];
    }
    else if(k < j)
    {
        QuickSelect(S, k, left, j-1);
    }
    else
    {
        QuickSelect(S, k, j+1, right);
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

    int i, j, k;
    cin >> i >> j >> k;

    vector<int> S;
    for(int m = i; m <= j; m++)
    {
        S.push_back(Nums[m]);
    }

    QuickSelect(S, k, i, j);

    cout << num << endl;

    return 0;
}


