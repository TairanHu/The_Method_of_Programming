
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 20, 9, 10};
    int len = sizeof(a)/sizeof(int);

    sort(a, a+len);

    int tmp = len-1;

    for(int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    for(int i = 0, j = 1; j < len;)
    {
        if(2*a[i] == a[j])
        {
            cout << a[i] << " " << a[j] << endl;
            i++;
            j++;
        }
        else if(2*a[i] < a[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return 0;
}

