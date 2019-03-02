//https://practice.geeksforgeeks.org/problems/kth-smallest-element/0

#include <bits/stdc++.h>

using namespace std;
int dp[1001];
int main()
{
int test;
cin>>test;
while(test--)
{memset(dp,-1,sizeof(dp));
   int len;
   cin>>len;
   int arr[len];
   for(int i=0;i<len;i++)
    {
        cin>>arr[i];
        dp[arr[i]]=1;
    }

    int k;
    cin>>k;
    int count=0;
    for(int i=0;;i++)
    {
        if(dp[i]==1){count++;}
        if(count==k){cout<<i<<endl;break;}
    }


}
    return 0;
}
