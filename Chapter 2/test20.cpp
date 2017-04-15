
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int test[] = {2, 1, 5, 3, 6, 4, 8, 9, 7};
    int len = sizeof(test)/sizeof(int);
    int DP1[10] = {1};
    int DP2[10] = {0};
    DP2[len-1] = 1;

    for(int i = 1; i < len; i++)
    {
        int count_lis = 0;
        for(int j = 0; j < i; j++)
        {
            if(test[i] > test[j] && DP1[j] > count_lis)
            {
                count_lis = DP1[j];
            }
        }
        DP1[i] = count_lis+1;
    }

    for(int i = len-2; i >= 0; i--)
    {
        int count_lis = 0;
        for(int j = len-1; j > i; j--)
        {
            if(test[i] > test[j] && DP2[j] > count_lis)
            {
                count_lis = DP2[j];
            }
        }
        DP2[i] = count_lis+1;
    }

    int res = DP1[0] + DP2[0] - 1;
    for(int i = 1; i < len; i++)
    {
        res = res > (DP1[i] + DP2[i] - 1) ? res : (DP1[i] + DP2[i] - 1);
    }

    cout << len - res;

    return 0;
}



