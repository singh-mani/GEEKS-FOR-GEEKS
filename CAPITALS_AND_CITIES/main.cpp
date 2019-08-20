#include <iostream>

using namespace std;

int diff(int arr[],int n,int curr_index)
{
    int sum=0;

    for(int i=0;i!=n;i++)
    {

            sum+=abs(arr[i]-arr[curr_index]);

    }
return sum;
}




int main()
{


    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }



    int ans=INT_MAX;
    int index=0;
     for(int i=0;i<n;i++)
    {
        int sum=diff(arr,n,i);
        if(sum<ans){ans=sum; index=i;}

    }

    cout<<index+1<<" "<<ans<<endl;

    return 0;
}
