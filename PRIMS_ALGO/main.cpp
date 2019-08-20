#include <iostream>

using namespace std;


int ext_min(bool vis[],int key[])
{
    int ans=INT_MAX;
    int index=0;
    for(int i=0;i<5;i++)
    {
        if(!vis[i] && ans>key[i])
        {
            ans=key[i];
            index=i;
        }
    }

    return index;
}



void print(int parent[],bool vis[],int G[5][5])
{


    printf("Edge \tWeight\n");
for (int i = 1; i < 5; i++)
    printf("%d - %d \t%d \n", parent[i], i, G[i][parent[i]]);


}

void prims()
{
    int G[5][5]={   {0, 2, 0, 6, 0},
                    {2, 0, 3, 8, 5},
                    {0, 3, 0, 0, 7},
                    {6, 8, 0, 0, 9},
                    {0, 5, 7, 9, 0}};
    int parent[5];
    int key[5];
    bool vis[5];


    for(int i=0;i<5;i++)
    {
        key[i]=INT_MAX;
        vis[i]=false;
    }

    key[0]=0;
    parent[0]=-1;

    for(int i=0;i<5-1;i++)
    {

        int u=ext_min(vis,key);

        vis[u]=true;

        for(int v=0;v<5;v++)
        {

            if(!vis[v]&&G[u][v]&&G[u][v]<key[v])
            {
                parent[v]=u;
                key[v]=G[u][v];
            }
        }


    }

    print(parent,vis,G);
}


int main()
{
   prims();
    return 0;
}
