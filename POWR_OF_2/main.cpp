//https://practice.geeksforgeeks.org/problems/power-of-2/0/?track=Bit%20Magi

#include <iostream>

using namespace std;

bool powerof2(int N)
{
    if(N&1){return false;}
    int setbits=0;
    while(N!=0)
    {
        N=N&N-1;//BRIAN KERNIGHAN ALGO
        setbits++;
    }
    if(setbits==1){return true;}
return false;
}



int main()
{
   int TEST;
   cin>>TEST;
   while(TEST--)
   {
       int N;
       cin>>N;
       if(powerof2(N)){cout<<"YES"<<endl;}
       else{cout<<"NO"<<endl;}
   }
    return 0;
}
