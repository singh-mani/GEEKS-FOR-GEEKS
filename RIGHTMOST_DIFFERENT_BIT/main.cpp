#include<bits/stdc++.h>
#define loop(m,N) for(int i=m;i<N;i++)
using namespace std;
int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int N1,N2;
        cin>>N1>>N2;
        int count=0;

        while(N1>0 || N2>0 )
        {
            count++;
            cout<<N1&1<<"   "<<N2&1<<endl;

            if(N1&1 != N2&1)
            {cout<<count<<endl;
                break;
            }
               N1=N1>>1;
               N2=N2>>1;
        }

        if(N1==0 && N2==0 ) cout<<-1<<endl;

    }


	return 0;
}
