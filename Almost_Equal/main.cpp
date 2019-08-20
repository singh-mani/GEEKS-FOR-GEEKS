#include <bits/stdc++.h>

using namespace std;

    int solve(int arr[],int LIM , int index,int N,int ii,int vis[],bool sign)
    {
        // for(int i=0;i<2*N;i++)
        //{
          //  cout<<arr[i]<<" ";
        //}
        //cout<<endl;
        if(index == 2*N) return sign==true?arr[0]-arr[index-N]==1?true:false:arr[index-N]-arr[0]==1?true:false;

        for(int i=1;i<=2*N;i++)
        {
            if(!vis[i])
            {vis[i]=true;
            arr[index] =i;
            if(index < N)
            {
                 if(solve(arr, LIM ,index+1,N,ii+1,vis,sign)) return 1;
            }
            if(index >= N &&( sign==true?arr[index]-arr[index-N]==1?true:false:arr[index-N]-arr[index]==1?true:false)&& solve(arr, LIM ,index+1,N,i+1,vis,!sign)) return 1;
            vis[i]=false;
            }
        }

        return 0;
    }

int main()
{

    int N;
    cin>>N;
    int arr[2*N+1];
    memset(arr, 0 , sizeof(arr));
    int vis[2*N+1];
    memset(vis , false , sizeof(vis));
    bool sign=true;
   int ans= solve(arr, 2*N + 1 ,0,N,1,vis,sign);

   if(ans)
   {cout<<"YES\n";
     for(int i=0;i<2*N;i++)
    {
        cout<<arr[i]<<" ";
    }
   }
   else cout<<"NO"<<endl;
    return 0;
}
