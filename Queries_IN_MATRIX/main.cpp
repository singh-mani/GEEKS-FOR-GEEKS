#include<bits/stdc++.h>
#define lli long long int
#define loop(m,N) for(lli i=m;i<N;i++)
using namespace std;

void input(lli arr[],lli n)
{
    loop(0,n) cin>>arr[i];
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    lli TEST;
    cin>>TEST;
    while(TEST--)
    {
     int n,q;
		cin>>n>>q;
		int mat[n+1][n+1]={};
		for (int i = 0; i < q; ++i)
		{
			int a,b,c,d;
			cin>>a>>b>>c>>d;
			for(int j=a;j<=c;j++){
				mat[j][b]++;
				mat[j][d+1]--;
			}
		}


		for(int i=0;i<n;i++){
			int curr=0;
			for(int j=0;j<n;j++){
				curr+=mat[i][j];
				mat[i][j]=curr;
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}


    return 0;
}
