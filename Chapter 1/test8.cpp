
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string str;
    string model_str;

    getline(cin, str);
    getline(cin, model_str);

    for(int i = 0; i < str.size();)
    {
        if(model_str.find(str[i]) == string::npos)
        {
            i++;
            continue;
        }
        str.erase(i, 1);
    }
    cout << str;

    return 0;
}



