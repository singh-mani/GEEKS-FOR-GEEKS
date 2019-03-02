#include <iostream>
using namespace std;

int main() {
int TEST;
cin>>TEST;
while(TEST--)
{int count=0;
    int N;
    if(N%2==0){count++;}
    //if(N>=1){count++;}
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=N;j++)
        {
        if((2*i+j)==N){count++;}
        }
    }
    cout<<count<<endl;
}
	return 0;
}
