#include<bits/stdc++.h>
#define loop(m,N) for(int i=m;i<N;i++)
using namespace std;
int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int N;
        cin>>N;
        int ARR[N];
        loop(0,N) cin>>ARR[i];
    stack<int> S;

        for(int i=0;i<N;++i)
        {
               while(!(S.empty())&&(ARR[S.top()]<=ARR[i]))
                {S.pop();}

                if(S.empty()) {cout<<i+1<<" ";}
                else{cout<<i-S.top()<<" ";}

                S.push(i);

        }


        cout<<endl;


    }


	return 0;
}
