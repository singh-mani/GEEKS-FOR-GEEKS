#include <iostream>

using namespace std;

int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        long long int N;
        cin>>N;
        long long int arr1[N];long long int arr2[N*N];
        for(long long int i=0;i<N;i++)
            cin>>arr1[i];

          long long int count=0,xo;
        for(long long int i=0;i<N;i++)
        {   for(long long int j=0;j<N;j++)
            {
                arr2[count]=arr1[i]+arr1[j];
                if(count==0){xo=arr2[0];}
                else{xo=xo^arr2[count];}
              //  cout<<endl<<arr2[count]<<"=="<<arr1[i]<<"++"<<arr1[j]<<endl;
                count++;

            }
        }

    cout<<xo<<endl;
    }
    return 0;
}
