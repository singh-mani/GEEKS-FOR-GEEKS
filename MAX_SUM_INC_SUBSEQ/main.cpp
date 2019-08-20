#include<bits/stdc++.h>
#define loop(m,N) for(int i=m;i<N;i++)
using namespace std;

int solve(int ARR[],int i,int pre_max,int N)
{

    if(i==N) return 0;


    int y1=solve(ARR,i+1,pre_max,N);
    int y2=0;
    if(ARR[i]>pre_max) y2=ARR[i]+solve(ARR,i+1,ARR[i],N);

    return max(y1,y2);


}






int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int N;
        cin>>N;
        int ARR[N];
        loop(0,N) cin>>ARR[i];

     cout<<solve(ARR,0,INT_MIN,N)<<endl;

    }


	return 0;
}
