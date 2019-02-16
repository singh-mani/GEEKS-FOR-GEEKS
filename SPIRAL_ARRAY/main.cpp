#include <iostream>

using namespace std;

void solve(int** arr,int i=0,int j=0,int cou_i=0,int cou_j=0,int count=0,int m=4,int n=4)
{
    while((i<m-cou_i)&&(j<n-cou_j)&&(count<=n*m)){
        cout<<arr[i][j]<<" ";j++;count++;
    }
        j--;
      i++;
      while((i<m-cou_i)&&(j<n-cou_j)&&(count<=n*m)){
        cout<<arr[i][j]<<" ";i++;count++;
    }
    i--;
    cou_i++;
    j--;
   while((i==m-cou_i)&&(j>=cou_j)&&(count<=n*m)){
        cout<<arr[i][j]<<" ";j--;count++;
    }
   cou_j++;

      j++;
      i--;
    while((i>=cou_j)&&(j<n-cou_j)&&(count<=n*m)){
        cout<<arr[i][j]<<" ";i--;count++;
    }

i++;j++;
if(count<m*n){
solve(arr,i,j,cou_i,cou_j,count,m,n);
}
else{cout<<endl;}
}





int main()
{

    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        cout<<"ENTER THE ORDER OF ANY MATRIX";
        int m,n;
    cin>>m>>n;

       int **arr=(int**)malloc(m*sizeof(int*));
            for(int i=0;i<n;i++)
            {arr[i]=(int*)malloc(n*sizeof(int));}







        for(int j=0;j<m;j++)
        {
            for(int i=0;i<n;i++)
            {
            cin>>arr[j][i];
            }
        }
        solve(arr,0,0,0,0,0,m,n);

    }
    return 0;
}
