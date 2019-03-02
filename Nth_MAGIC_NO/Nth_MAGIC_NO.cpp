//https://practice.geeksforgeeks.org/problems/magic-number/0
#include <bits/stdc++.h>

using namespace std;

long long int FIND_MAGIC(long long int N)
{long long int  sum=0;
int count=0;
    while(N!=0)
    {   count++;
        if(N&1){sum+=pow(5,count);}
       // cout<<count<<"   "<<sum<<endl;
        N=(N>>1);

    }

    return sum%1000000007;
}



int main()
{

    int TEST;
    cin>>TEST;
    while(TEST--)
    {
       long long  int N;
        cin>>N;
        cout<<FIND_MAGIC(N)<<endl;
    }

    return 0;
}
