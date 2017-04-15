

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    int test[] = {2, 1, 5, 6, 2, 3};
    vector<int> test_data;
    stack<int> st;
    int max_area = 0;

    for(int i = 0; i < sizeof(test)/sizeof(int); i++)
    {
        test_data.push_back(test[i]);
    }
    test_data.push_back(0);

    for(int i = 0; i < test_data.size(); )
    {
        if(st.empty() || test_data[i] >= test_data[st.top()])
        {
            st.push(i++);
        }
        else
        {
            int tmp = st.top();
            st.pop();

            max_area = max(max_area, test_data[tmp] * (st.empty() ? i : i - st.top() - 1));

        }
    }

    cout << max_area;


    return 0;
}


