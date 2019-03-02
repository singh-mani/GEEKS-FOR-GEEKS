
//https://practice.geeksforgeeks.org/problems/minimize-the-heights/0
#include<bits/stdc++.h>
#define loop(m,N) for(int i=m;i<N;i++)
using namespace std;

int min_diff(int TEMP[],int N)
{
   int minn=TEMP[0];
   int larr=TEMP[0];
 for(int i=1;i<N;i++)
 {
     if(minn>TEMP[i]) minn=TEMP[i];
     if(larr<TEMP[i]) larr=TEMP[i];
 }
    return larr-minn;
}


int diff(int ARR[],int TEMP[],int N,int K,int i)
{

    if(i==N) { return min_diff(TEMP,N);}

   TEMP[i]+=K;
   int b=diff(ARR,TEMP,N,K,i+1);
   TEMP[i]-=K;
   int c=INT_MAX;
    if(TEMP[i]-K>=0)
    {
        TEMP[i]-=K;
          c=diff(ARR,TEMP,N,K,i+1);
          TEMP[i]+=K;
    }


   return min(b,c);

}




int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int N;
        int K;
        cin>>K;
        cin>>N;
        int ARR[N],TEMP[N];
        loop(0,N) cin>>ARR[i];
        loop(0,N) TEMP[i]=ARR[i];

        cout<<diff(ARR,TEMP,N,K,0)<<endl;
    }


	return 0;
}
