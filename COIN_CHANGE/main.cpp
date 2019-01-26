//https://practice.geeksforgeeks.org/problems/coin-change/0
#include<bits/stdc++.h>
using namespace std;
vector<string> store;
int contains(string a)
{vector<string>::iterator it;
for(it=store.begin();it!=store.end();it++)
{
    if(*it==a){return 0;}
}
return -1;
}

int countways(int N,int arr[],int SUM,int cur,int ans,string a)
{
//cout<<a<<"---->>"<<cur<<"--->"<<ans<<endl;
if(SUM==cur){sort(a.begin(),a.end());

    if(contains(a)<0){
    ans++;store.push_back(a);}
    return ans;}
else if(cur>SUM){return ans;}
else
{
    for(int i=0;i<N;i++)
    {
   ans=countways(N,arr,SUM,cur+arr[i],ans,a+to_string(arr[i]));

    }

}
return ans;

}


int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
    int N;cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];

    }
    int SUM;
    cin>>SUM;
    cout<<countways(N,arr,SUM,0,0,"")<<endl;
    }


	return 0;
}
