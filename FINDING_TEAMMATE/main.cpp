#include <bits/stdc++.h>

using namespace std;
bool VALID(int a,int b,int x,int y)
{
    if((a >x && b<y) ) return false;
    return true;



}

int solve(int arr[],int n)
{   if(n==0){return 1;}
    while(n!=0){if(arr[n]==arr[n-1]){return (1+solve(arr,n-1));}
        if(arr[n]!=arr[n-1]){return solve(arr,n-1);}
    }
}


int main()
{
   int TEST;
   cin>>TEST;
   while(TEST--)
   {
       int N;
       cin>>N;
       int arr[N];
       for(int i=0;i<N;i++)
        cin>>arr[i];

      sort(arr,arr+N);
      cout<<solve(arr,N)<<endl;

   }
    return 0;
}
