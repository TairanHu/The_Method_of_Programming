
#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main()
{
    int test[] = {-9, -8, -7, -6, -5, 2, 3, 4};
    int len = sizeof(test)/sizeof(int);
    int dis = INT_MAX;
    int l = 0;
    int r = len-1;

    while(l <= r)
    {
        int mid = (l+r)/2;

        cout << l << " " << r << " " << mid << endl;

        if(test[mid] == 0)
        {
            dis = 0;
            break;
        }
        else if(test[mid] < 0)
        {
            l = mid+1;
            dis = dis > abs(test[mid]) ? abs(test[mid]) : dis;
        }
        else
        {
            r = mid-1;
            dis = dis > abs(test[mid]) ? abs(test[mid]) : dis;
        }
    }
    cout << dis;

    return 0;
}


