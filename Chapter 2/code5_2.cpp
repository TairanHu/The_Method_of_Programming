

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int64_t> method(101, 0); //ª·‘ΩΩÁ

    method[0] = 1;
    method[1] = 1;
    method[2] = 2;

    for(int n = 10; n < 100; n++)
    {
        for(int i = 3; i <= n; i++)
        {
            if(i >= 5)
            {
                method[i] += method[i-5];
            }
            if(i >= 10)
            {
                method[i] += method[i-10];
            }

            method[i] += method[i-1] + method[i-2];
        }
        cout << n << " " << method[n] << endl;
    }

    return 0;
}


