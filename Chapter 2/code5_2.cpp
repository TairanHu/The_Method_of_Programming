
#include<iostream>
#include<vector>
using namespace std;

const int maxn = 10;
const int maxsum = 1000;

int dp[maxn][maxsum] = {0};

int main()
{
    int sum = 100;
    int n = 4;
    int v[5] = {0, 1, 2, 5, 10};

    dp[0][0] = 1;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 0; j <= sum; ++j)
        {
            if(j == 0)
            {
                dp[i][j] = 1;
            }
            else
            {
                dp[i][j] = 0;
                for(int xi = 0; xi <= j/v[i]; ++xi)
                {
                    dp[i][j] += dp[i-1][j-(xi*v[i])];
                }
            }
        }
    }
    cout << dp[n][sum] << endl;

    return 0;
}
