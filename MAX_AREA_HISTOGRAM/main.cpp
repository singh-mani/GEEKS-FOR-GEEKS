#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    int result=1;
    for(int i=0;i<N;i++)
    {   int ans=arr[i];
        int j=i+1,k=i-1;
        while(j<N || k>=0)
        {
                bool jj=false;
            if(j<N &&arr[j]>=arr[i]){ans=ans+arr[i];j++;jj=true;}
            if(k>=0 && arr[k]>=arr[i]){ans=ans+arr[i];k--;jj=true;}

        if(!jj) {break;}
        }

    result=max(result,ans);

    }
    cout<<result<<endl;

    }


	return 0;
}
