
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void get_permutation(vector<string> res, string &a, string &tmp, int pos, int num)
{
    if(tmp.size() >= num)
    {
        cout << tmp << endl;
        res.push_back(tmp);
        return;
    }

    for(int i = pos; i < a.size(); i++)
    {
        tmp += a[i];
        get_permutation(res, a, tmp, i+1, num);
        tmp = tmp.substr(0, tmp.size()-1);
    }

}

int main()
{
    vector<string> res;
    string a;
    string tmp;

    cin >> a;

    for(int i = 1; i <= a.size(); i++)
    {
        tmp.clear();
        get_permutation(res, a, tmp, 0, i);
    }

    return 0;
}




