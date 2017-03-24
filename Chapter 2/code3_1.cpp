

#include <iostream>
#include <vector>
#include <algorithm>
#define N 10

using namespace std;

int main()
{
    int m;
    int num[N] = {1,2,3,4,5,6,7,8,9,0};
    vector<int> sum;

    cin >> m;

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            sum.push_back(num[i] + num[j]);
        }
    }

    sort(sum.begin(), sum.end());

    int left = 0;
    int right = sum.size()-1;

    while(left < right)
    {
        if(m > sum[left] + sum[right])
        {
            left++;
            continue;
        }

        if(m < sum[left] + sum[right])
        {
            right--;
            continue;
        }

        left++;
        right--;
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;

    return 0;
}

