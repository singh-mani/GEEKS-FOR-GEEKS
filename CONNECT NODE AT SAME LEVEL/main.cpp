//https://practice.geeksforgeeks.org/viewSol.php?subId=12043386&pid=700184&user=Un_known


void solve(Node* p,unordered_map<int,Node*> &mp,int level=0)
{
    if(p==NULL) return;

    if(mp.find(level)!=mp.end())
    {
    Node* prev=mp[level];
    prev->nextRight=p;

    }
    p->nextRight=NULL;
    mp[level]=p;
    solve(p->left,mp,level+1);
    solve(p->right,mp,level+1);



}

void connect(Node *p)
{unordered_map<int,Node*> mp;

solve(p,mp);
   // Your Code Here
}
