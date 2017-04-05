
#include <iostream>

using namespace std;

int main()
{
    int n;
    int ones = 0;

    cin >> n;

    for(int m = 1; m <= n; m = m*10)
    {
        ones += (n/m + 8)/10*m + (n/m %10 == 1)*(n%m + 1);
    }

    cout << ones << endl;
    return 0;
}

