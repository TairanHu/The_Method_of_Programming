
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    map<int, int> structs;
    int n = 5;

    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        structs[x] = y;
    }

    int x, y;
    cin >> x >> y;

    if(structs.count(x))
    {
        if(structs[x] == y)
        {
            cout << x << " " << y << endl;
        }
    }

    return 0;
}

