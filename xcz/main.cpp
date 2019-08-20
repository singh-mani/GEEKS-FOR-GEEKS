#include <bits/stdc++.h>

using namespace std;

struct Node{
    struct Node* left;
    struct Node* right;
    int data;
};

vector<Node*> w(int l, int r)
{
    if(l==r)
    {
        Node* tmp = new Node();
        tmp->left=NULL;
        tmp->right=NULL;
        tmp->data=l;
        vector<Node *> v;
        v.push_back(tmp);
        return v;
    }

    vector<Node *> ans;
    for(int i=l; i<=r; i++)
    {
        vector<Node*> lef=w(l, i-1);
        if(lef.size()<1) lef.push_back(NULL);
        vector<Node *> righ = w(i+1, r);
        if(righ.size()<1) righ.push_back(NULL);

        for(auto l:lef)
        {
            for(auto r:righ)
            {
                Node *tmp= new Node;
                tmp->data=i;
                tmp->left = l;
                tmp->right = r;
                ans.push_back(tmp);
            }
        }
    }
    return ans;

}

int main()
{
    int n;
    cin>>n;
    vector<Node*> v;
    v=w(1, n);
    return 0;

}
