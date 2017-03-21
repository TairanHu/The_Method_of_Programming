

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str;
    string str_res;
    getline(cin, str);

    for(int i = 0; i < str.size();)
    {
        int n = 1;
        char tmp = str[i];
        while(str[++i] == tmp)
        {
            n++;
        }

        if(n > 1)
        {
            str_res += n + '0';
        }
        str_res += str[i-1];
    }
    cout << str_res;

    return 0;
}


