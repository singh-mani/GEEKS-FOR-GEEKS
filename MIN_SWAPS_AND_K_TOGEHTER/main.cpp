//https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together/0
#include<bits/stdc++.h>
using namespace std;
#define loop(m,N) for(int i=m;i<N;i++)
int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
    int N;
    cin>>N; int ARR[N];
    loop(0,N) cin>>ARR[i];
    int K;  cin>>K;
    int good=0;
    loop(0,N) { if(ARR[i]<=K) good++;}
    int bad=0;
    loop(0,good) {if(ARR[i]>K) bad++;}
    int ans=bad;

    loop(good,N){if(ARR[i]>K) bad++;
        if(ARR[i-good]>K) bad--;

        ans=min(ans,bad);
    }
     cout<<ans<<endl;

    }


	return 0;
}
