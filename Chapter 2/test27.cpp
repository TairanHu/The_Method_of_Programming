
#include <iostream>
#include <vector>

using namespace std;

int fun1(int *test, int len)
{
    if(len == 0)
    {
        return 0;
    }

    for(int i = 0; i < len-1; i++)
    {
        if(test[i] > test[i+1])
        {
            return test[i+1];
        }
    }

    return test[0];
}

int fun2(int *test, int len)
{
    if(len == 0)
    {
        return 0;
    }

    int l = 0;
    int r = len-1;
    int mid = -1;

    while(test[l] >= test[r])
    {
        if(r - l == 1)
        {
            mid = r;
            break;
        }

        mid = (l+r)/2;

        if(test[l] <= test[mid])
        {
            l = mid;
        }
        else if(test[r] >= test[mid])
        {
            r = mid;
        }
    }

    return test[mid];
}


int main()
{
    int test[] = {3, 4, 5, 1, 2};
    int len = sizeof(test)/sizeof(int);

    cout << fun1(test, len) << endl;
    cout << fun2(test, len) << endl;

    return 0;
}



