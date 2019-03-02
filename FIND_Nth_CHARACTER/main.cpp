#include <iostream>
#include<math.h>
using namespace std;

char fn(string s,int k,int n)
{
	if(k==0)
		return s[n];
	int ind=n/k;
	n%=k;
	if(s[ind]=='1')
		return fn("10",k/2,n);
	return fn("01",k/2,n);
}


int main() {
	int TEST;
	cin>>TEST;
	while(TEST--)
	{
	    string sss;
	    cin>>sss;
	    int len=sss.length();
	    int iterations,N;
	    cin>>iterations>>N;

	    int k=pow(2,iterations);
		cout<<fn(sss,k,N)<<endl;




	   /* for(int i=0;i<iterations;i++)
	    {int count=0;
	        if(i>=1){len=len*2;for(int i=0;i<len;i++){str[i]=result[i];}}
	     //    cout<<"str==="<<str<<" result==="<<result<<"  i==="<<i<<" len=="<<len;
	        for(int j=0;j<len;j++)
	        {//if(count==len){cout<<i<<"\t"<<"11111"<<endl;}
	            if(str[j]=='1'){ result[count++]='1';result[count++]='0';}
	            else if(str[j]=='0'){ result[count++]='0';result[count++]='1';}
	        }
           // for(int i=0;i<count;i++)
           // cout<<result[i];
    cout<<endl;


	    }

	    cout<<result[N]<<endl;
*/
	}
	return 0;
}
