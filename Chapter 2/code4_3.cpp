
#include <iostream>
#include <climits>
#include <cstring>

#define N 4
#define M 3

using namespace std;

int BC(int (*PartSum)[M+1], int imin, int imax, int j)
{
    int value;
    value = PartSum[imax][j]-PartSum[imin-1][j]-PartSum[imax][j-1]+PartSum[imin-1][j-1];

    return value;
}

int MaxSum(int (*array)[M])
{
    int PartSum[N+1][M+1];
    int i, j;
    for(i=0; i<=N; i++)
        PartSum[i][0] = 0;
    for(j=0; j<=M; j++)
        PartSum[0][j] = 0;
    for(i=1; i<=N; i++)
        for(j=1; j<=M; j++)
            PartSum[i][j] = PartSum[i-1][j] + PartSum[i][j-1] - PartSum[i-1][j-1] + array[i-1][j-1];

    int MaxSum = INT_MIN;
    int Start, All;
    int imin, imax;
    for(imin=1; imin<=N; imin++)
    {
        for(imax=imin; imax<=N; imax++)
        {
            Start = BC(PartSum, imin, imax, M);
            All = BC(PartSum, imin, imax, M);

            for(j=M-1; j>=1; j--)
            {
                if(Start > 0)
                    Start += BC(PartSum, imin, imax, j);
                else
                    Start = BC(PartSum, imin, imax, j);
                if(Start > All)
                    All = Start;
            }
            if(All > MaxSum)
                MaxSum = All;
        }
    }
    return MaxSum;
}


int main()
{
    int a[N][M] = {
        1,2,3,
        4,0,-2,
        -8,2,2,
        9,3,-4
    };
    int maxSum = MaxSum(a);
    cout << maxSum << endl;

    cin.get();
    return 0;
}

