
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {4, 2, 3};
    int big = 0;
    int small = 0;

    sort(a, a+3);

    cout << a[1];

    return 0;
}

