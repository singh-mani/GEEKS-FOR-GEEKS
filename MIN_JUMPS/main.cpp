//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps/0
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int N,int steps,int pos,int minn)
{//cout<<pos<<"  "<<steps<<endl;
if(pos>=N-1){return steps;}
if(arr[pos]==0){return -1;}
for(int j=arr[pos];j>=1;j--)
{
 steps=solve(arr,N,steps+1,pos+j,minn);
if(steps<minn){minn=steps;}

}
if(minn!=0) return minn;
return -1;
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
    {
        cin>>arr[i];
    }

        cout<<solve(arr,N,0,0,INT_MAX)<<endl;


    }


	return 0;
}
