#include <bits/stdc++.h>

using namespace std;
int dp[1001];
int FAB(int NUM)
{
    if(NUM<=0){return 0;}
    if(NUM==1||NUM==2){return 1;}
    if(dp[NUM]!=-1){return dp[NUM];}
    dp[NUM]=(FAB(NUM-1)+FAB(NUM-2))%1000000007;

return dp[NUM];
}


int main()
{memset(dp,-1,sizeof(dp));
    int TEST;
    cin>>TEST;
    while(TEST--)
    {int NUM;
        cin>>NUM;
        cout<<FAB(NUM)<<endl;

    }
    return 0;
}
