
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int test[] = {9, 4, 3, 2, 5, 4, 3, 2};
    int len = sizeof(test)/sizeof(int);
    int max_len = 0;
    vector<int> DP(8, 1);

    for(int i = 1; i < len; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(test[j] > test[i] && DP[j] + 1 > DP[i])
            {
                DP[i] = DP[j] + 1;
                max_len = max_len > DP[i] ? max_len : DP[i];
            }
        }
    }

    cout << max_len;

    return 0;
}


