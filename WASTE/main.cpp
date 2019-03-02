#include <bits/stdc++.h>
#define MAX 1000000007
using namespace std;

long long int solve(int n)
{ int res[n+1];
    res[0] = 1; res[1] = 1;
    for (int i=2; i<=n; i++)
    {
       res[i] = res[i-1]+res[i-2];
    }
    return res[n];
}
int main() {
int TEST;
cin>>TEST;
//long long int dp[100001];
while(TEST--)
{
    int TOTAL;
    cin>>TOTAL;
   // memset(dp,-1,sizeof(dp));

    cout<<solve(TOTAL)<<endl;


}
	return 0;
}
