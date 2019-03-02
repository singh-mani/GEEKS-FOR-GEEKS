//https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
#include <iostream>

using namespace std;
int kadane(int arr[],int LEN)
{
    int now=0;
    int so_far=INT_MIN;
    for(int i=0;i<LEN;i++)
    {
        now=now+arr[i];
        if(so_far<now){so_far=now;}
        if(now<0){now=0;}
    }
return so_far;
}




int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int len;
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++) cin>>arr[i];
        cout<<kadane(arr,len)<<endl;
    }
}
