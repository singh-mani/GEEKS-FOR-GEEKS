#include <iostream>
using namespace std;

int main() {
	int TEST;
	cin>>TEST;
	while(TEST--)
	{
	    int NO;
	    cin>>NO;
	    int arr[NO];
	    for(int i=0;i<NO;i++)
	    cin>>arr[i];

	    int sum;
	    cin>>sum;

	    int result=0,m=0;
	    for(int i=0;i<NO-3;i++)
	    {
	        for(int j=i+1;j<NO-2;j++)
	        {  for(int k=j+1;k<NO-1;k++)
                {   for(int l=k+1;l<NO;l++)
                    {
                        result=arr[i]+arr[j]+arr[k]+arr[l];
                        if(result==sum){m=1;break;}
                    }
                if(m==1){break;}
                }
            if(m==1){break;}
            }
        if(m==1){break;}
	    }
if(m==1){cout<<"1"<<endl;}
else{cout<<"0"<<endl;}

	}
	return 0;
}
