#include <iostream>

using namespace std;
int G[10][10]={ 0,1,1,1,1,0,0,0,
                1,0,0,0,0,1,0,0,
                1,0,0,0,0,1,0,0,
                1,0,0,0,0,0,1,0,
                1,0,0,0,0,0,1,0,
                0,1,1,0,0,0,0,1,
                0,0,0,1,1,0,0,1,
                0,0,0,0,0,1,1,0
                };


  int visited[10]={0};



    void DFS(int i,int n)
{

	printf("\n%d",i);
    visited[i]=1;

	for(int j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFS(j,n);
}

int main()
{
    int n;
    cout<<"enter no of vertices";
    cin>>n;

 for(int i=0;i<n;i++)
        visited[i]=0;
    DFS(0,n);

    return 0;
}
