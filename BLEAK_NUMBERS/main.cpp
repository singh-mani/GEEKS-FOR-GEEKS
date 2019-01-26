//https://practice.geeksforgeeks.org/problems/bleak-numbers/0

#include <iostream>

using namespace std;

int count_set(int N)
{
    int set_bits=0;
    while(N>0)
    {
        N=N&N-1;
        set_bits++;
        //cout<<"   "<<set_bits;

   // cout<<"00000000000"<<endl;
    }
return set_bits;
}


bool bleaky(int i,int NUM)
{
    if(i+count_set(i)==NUM){return true;}
    return false;


}




int main()
{int TEST;
cin>>TEST;
while(TEST--)
{
    int NUM,found=0;
    cin>>NUM;
    for(int i=NUM-1;i>0;i--)
    {
        if(bleaky(i,NUM)){found=1;break;}
    }
    if(found==1){cout<<"0"<<endl;}
    else{cout<<"1"<<endl;}


}
    return 0;
}
