

#include <iostream>
#include <vector>

void Sum(TreeNode *Node, vector<int> &tmp, int rest)
{
    if(Node == NULL)
    {
        if(rest == 0)
        {
            for(int i = 0; i < tmp.size(); i++)
            {
                cout << tmp[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    tmp.push_back(Node->val);
    Sum(Node->left, tmp, rest-Node->val);
    Sum(Node->right, tmp, rest-Node->val);
    tmp.pop_back();
}

int main()
{
    TreeNode* root;
    vector<int> tmp;

    Sum(root, tmp, rest);

    return 0;
}



