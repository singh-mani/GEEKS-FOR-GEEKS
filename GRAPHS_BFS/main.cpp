#include <bits/stdc++.h>

using namespace std;


void bfs()
{

    int A[5][5]={0,1,0,0,1,
                1,0,1,1,1,
                0,1,0,1,0,
                0,1,1,0,1,
                1,1,0,1,0
                };

    stack<int>Q;
   bool vis[5];
    memset(vis,false,sizeof(vis));


    Q.push(0);

    while(!Q.empty())
    {
        cout<<Q.top()<<"  ";
        vis[Q.top()]=true;
        int M=Q.top();
        Q.pop();

        for(int j=0;j!=5;j++)
        {

            if(A[M][j] && !vis[j])
            {
                Q.push(j);
                vis[j]=true;
            }

        }


    }




}




int main()
{

    bfs();


    return 0;
}
