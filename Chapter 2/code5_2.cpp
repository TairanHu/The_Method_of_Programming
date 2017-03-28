

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int64_t> method; //ª·‘ΩΩÁ

    for(int n = 1; n < 100; n++)
    {
        method.push_back(1);
        method.push_back(1);
        method.push_back(2);

        for(int i = 3; i <= n; i++)
        {
            int tmp = 0;
            if(i >= 5)
            {
                tmp += method[i-5];
            }
            if(i >= 10)
            {
                tmp += method[i-10];
            }

            tmp += method[i-1] + method[i-2];
            method.push_back(tmp);
        }
        cout << n << " " << method[n] << endl;
        method.clear();
    }

    return 0;
}


