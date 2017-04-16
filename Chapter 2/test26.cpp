
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

/*****************************
    C++11 包含to_string，
    这里自己实现的
*****************************/
string to_string(int n)
{
    stringstream ss;
    string str;
    ss << n;
    ss >> str;

    return str;
}

bool cmp(int a, int b)
{
    string A = "";
    string B = "";

    A += to_string(a);
    A += to_string(b);
    B += to_string(b);
    B += to_string(a);

    return A < B;
}

int main()
{
    int test[] = {32, 321, 1, 123};
    int len = sizeof(test)/sizeof(int);
    string nums = "";

    sort(test, test+len, cmp);

    for(int i = 0; i < len; i++)
    {
        nums += to_string(test[i]);
    }

    cout << nums;

    return 0;
}


