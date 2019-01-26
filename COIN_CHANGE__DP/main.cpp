//https://practice.geeksforgeeks.org/problems/coin-change/0
#include<bits/stdc++.h>
int S(int coins,int SUM,int arr[],int ** dp)
{
    if(coins==0) {dp[SUM][coins]=0;return 0;}
    if(SUM==0){dp[SUM][coins]=1;return 1;}
    if(SUM<0){ return 0;}
    if(dp[SUM][coins]!=-1) return dp[SUM][coins];
    return dp[SUM][coins]=S(coins,SUM-arr[coins-1],arr,dp)+S(coins-1,SUM,arr,dp);
}

using namespace std;
int main()
 {
    int TEST;
    cin>>TEST;
    while(TEST--)
    {

    int COINS;
     cin>>COINS;
      int A[COINS];

      for(int i=0;i<COINS;i++)cin>>A[i];

      int SUM;
       cin>>SUM;

       int *dp[SUM+1];
        for(int i=0;i<=SUM;i++)
            dp[i]=(int *)malloc((COINS+1)*sizeof(int));

            memset(dp,-1,sizeof(dp));

cout<<S(COINS,SUM,A,dp)<<endl;

    }
	return 0;
}
