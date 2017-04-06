
#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
    int a[] = {-10, -9, -3, -2, -1, 4, 5, 6, 7, 8, 10, 11};
    int len = sizeof(a)/sizeof(int);
    int l = 0;
    int r = len-1;
    int min_sum = INT_MAX;

    int c = 0;
    int b = len-1;

    sort(a, a+len);

    while(l < r)
    {
        if(abs(a[l] + a[r]) <= min_sum)
        {
            c = l;
            b = r;
            min_sum = abs(a[l] + a[r]);

            if(a[l] + a[r] <= 0)
            {
                l++;
            }
            else
            {
                r--;
            }
            continue;
        }

        if(a[l] + a[r] > min_sum)
        {
            r--;
        }
        else if(-(a[l] + a[r]) > min_sum)
        {
            l++;
        }
    }

    cout << a[c] << " " << a[b] << endl;

    return 0;
}


