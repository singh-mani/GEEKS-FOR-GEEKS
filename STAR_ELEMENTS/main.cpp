#include <iostream>

using namespace std;

int main()
{int TEST;
cin>>TEST;
while(TEST--)
    {
        int NO; int super=-1,Result_super=-1;
        cin>>NO;   int arr[NO];
        for(int i=0;i<NO;i++)
        {
            cin>>arr[i];
        }

         for(int i=0;i<NO;i++)
        {int greater=1;
          for(int j=i+1;j<NO;j++)
            {
                    if(arr[i]>arr[j]){greater=1;}
                    else{greater=0;break;}

            }
            if(greater==1){cout<<arr[i]<<" ";
            int dec=i-1;if(i==0){Result_super=arr[0];}
            while(dec>=0){if(arr[dec]<arr[i]){if(super<arr[i]){super=arr[i];}}
                         else{super=-1;break;}
            dec--;}
            if(super!=-1){Result_super=super;}
            }


        }
        cout<<endl;
        cout<<Result_super<<endl;
    }

    return 0;
}
