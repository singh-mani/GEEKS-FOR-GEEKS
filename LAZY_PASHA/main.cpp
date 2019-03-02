//https://practice.geeksforgeeks.org/problems/lazy-pasha/0
#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{

    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int N;
        cin>>N;
        int Q;
        cin>>Q;
        string str;
        cin>>str;
        for(int i=0;i<Q;i++)
        {  // cout<<str<<endl;
            int TYPE;
            cin>>TYPE;
            int k,I;
            if(TYPE==2){cin>>I;cout<<str[I]<<endl;}
            else{
                cin>>k;
                if(k>N){k=k%N;}
                string sub1=str.substr(0,N-k);
                string sub2=str.substr(N-k,N-1);
             //   reverse(sub2.begin(),sub2.end());
                    str=sub2+sub1;

            }




        }





    }




    return 0;
}
