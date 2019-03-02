//https://practice.geeksforgeeks.org/problems/largest-prime-factor/0
#include <bits/stdc++.h>

using namespace std;
int LARGEST_PRIME(int N)
{
    long long int last=-1,i;
    for(i=2;i<sqrt(N);i++)
    {
         while(N%i==0)
            {
                N=N/i;
                last=i;
            }

    }
    if(N>2) return N;

    return last;
}





int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int NO;
        cin>>NO;
        cout<<LARGEST_PRIME(NO)<<endl;
    }
    return 0;
}
