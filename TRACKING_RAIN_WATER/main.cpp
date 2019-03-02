#include <bits/stdc++.h>

using namespace std;

int main()
{int TEST;
cin>>TEST;
    while(TEST--)
    {

        int NUM;
        cin>>NUM;
        int ARR[NUM];
        for(int i=0;i<NUM;i++)
        {

            cin>>ARR[i];


        }


        int Lmax[NUM];
        int Rmax[NUM];
Lmax[0]=0;Rmax[NUM-1]=0;

 for(int i=1;i<NUM;i++)
        {
        Lmax[i]=max(Lmax[i-1],ARR[i-1]);

        }
 for(int i=NUM-2;i>=0;i--)
        {
        Rmax[i]=max(Rmax[i+1],ARR[i+1]);

        }

int water=0;

         for(int i=0;i<NUM;i++)
        {
        water+=max(min(Lmax[i],Rmax[i])-ARR[i],0);

        }





        cout<<water<<endl;


    }
    return 0;
}
