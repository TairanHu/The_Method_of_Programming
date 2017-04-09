
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

char state[11][101];

int main()
{
    int a[] = {-10, -9, -3, -2, -1, 4, 5, 6, 7, 8, 10, 11};
    int len = sizeof(a)/sizeof(int);
    int DP[101];
    int m;

    while(cin >> m)
    {
        memset(DP, 0, sizeof(DP));
        for(int i = 0; i < len; i++)
        {
            for(int j = m; j >= a[i]; j--)
            {
                int tmp = DP[j-a[i]] + a[i];
                if(tmp > DP[j])
                {
                    DP[j] = tmp;
                    state[i][j] = 1;
                }
            }
        }
        cout << DP[m] << endl;

        int i = len;
        int j = m;
        while(i-- >= 0)
        {
            if(state[i][j] == 1)
            {
                cout << a[i] << " ";
                j -= a[i];
            }
        }
        cout << endl;
    }

    return 0;
}



