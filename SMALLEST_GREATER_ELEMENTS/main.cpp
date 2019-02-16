#include <bits/stdc++.h>

using namespace std;
int greater_than(int element,int arr[],int len)
{
    for(int i=0;i<len-1;i++)
    {
        if(arr[i]==element)
        {   while(arr[i+1]==element)
            {
                i++;
            }


            return arr[i+1];

        }
    }



}




int main()
{int TEST;
cin>>TEST;
while(TEST--)
{
    int len;
    cin>>len;
    int arr[len];
   int sorted_arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
        sorted_arr[i]=arr[i];
    }
    sort(sorted_arr,sorted_arr+len);

    for(int i=0;i<len;i++)
    {
        if(arr[i]==sorted_arr[len-1]){cout<<"_ ";}
        else{cout<<greater_than(arr[i],sorted_arr,len)<<" ";}


    }
    cout<<endl;
}
    return 0;
}
