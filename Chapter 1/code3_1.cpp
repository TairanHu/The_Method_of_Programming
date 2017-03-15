
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void get_permutation(vector<string> res, string &a, string &tmp, int pos)
{
    if(pos == a.size())
    {
        cout << tmp << endl;
        res.push_back(tmp);
        return;
    }

    for(int i = 0; i < a.size(); i++)
    {
        tmp += a[i];
        get_permutation(res, a, tmp, pos+1);
        tmp = tmp.substr(0, tmp.size()-1);
    }

}

int main()
{
    vector<string> res;
    string a = "ab";
    string tmp;
    get_permutation(res, a, tmp, 0);

    return 0;

}




