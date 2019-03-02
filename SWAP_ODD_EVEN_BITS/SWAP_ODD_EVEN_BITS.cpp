//https://practice.geeksforgeeks.org/problems/swap-all-odd-and-even-bits/0

#include <iostream>

using namespace std;

int main()
{
    int TEST;
    cin>>TEST;

    while(TEST--)
    {
        int NO;
        cin>>NO;
        int even_bits=NO&(0xAAAAAAAA);
         int odd_bits=NO&(0x55555555);
        even_bits=even_bits>>1;
        odd_bits=odd_bits<<1;
        int result=even_bits|odd_bits;
        cout<<result<<endl;
    }


    return 0;
}
