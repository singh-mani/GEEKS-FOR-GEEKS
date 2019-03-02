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
        int REPEATING=0;

        int sum=0;
        loop(0,N)
        {cin>>ARR[i];
            sum+=ARR[i];
            if(i>0 && abs(ARR[i]-ARR[i-1])!=1)
            {
                REPEATING=ARR[i];

                break;
            }
        }


  int MISSING=abs(N*(N+1)/2 - sum);
  cout<<REPEATING<<" "<<MISSING<<endl;


}
return 0;}
