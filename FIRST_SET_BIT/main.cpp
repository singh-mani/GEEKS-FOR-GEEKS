#include <iostream>

using namespace std;

int first_set(int N)
{
    for(int count=0;;count++)
    {
        int flag=N&1<<count;
        if(flag!=0){return ++count;}
    }
}



int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int NO;
        cin>>NO;
        if(!NO){cout<<"0"<<endl;}
        else  cout<<first_set(NO)<<endl;
    }
    return 0;
}
