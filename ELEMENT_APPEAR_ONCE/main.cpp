#include <iostream>
using namespace std;

int main() {
int test;
cin>>test;
while(test--)
{
    int len,rep=0;
    cin>>len;
    int arr[len];
    cin>>arr[0];
    for(int i=1;i<=len;i++)
    {
        if(i==len){if(rep==0){cout<<arr[len-1]<<endl;break;}}
        else{
        cin>>arr[i];
        if(arr[i]==arr[i-1]){rep=1;}
        else{ if(rep==0){cout<<arr[i-1]<<endl;break;}
                else{rep=0;}
             }
        }
    }

}
	return 0;
}
