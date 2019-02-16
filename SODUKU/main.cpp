#include<bits/stdc++.h>
#define loop(m,N) for(int i=m;i<N;i++)
using namespace std;

bool safe(int ARR[9][9],int m,int n,int no)
{

    int sum1=no,sum2=no;
    loop(0,9)
    {
        if(ARR[m][i]==no || ARR[i][n]==no) return false;
        sum1+=ARR[m][i];
        sum2+=ARR[i][n];
    }

    if(sum1>45 || sum2>45) return false;


    int row=m%3;
    int col=n%3;
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ARR[m-row+i][n-col+j]==no) return false;
            sum+=ARR[m-row+i][n-col+j];

        }

    }

    if(sum>45) return false;
    if(ARR[m][n]) return false;

    return true;
}


bool check(int ARR[9][9])
{

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(ARR[i][j]==0)return false;

        }

    }


 return true;
}


void print(int ARR[9][9])
{
    loop(0,9)
    {
        for(int j=0;j<9;j++)
            cout<<ARR[i][j]<<" ";
        cout<<endl;

    }

    cout<<"------------->>>----------->>>>"<<endl;
}


bool solve(int ARR[9][9])
{
   if(check(ARR))
   {
       for(int i=0;i<9;i++)
       {
           for(int j=0;j<9;j++)
           cout<<ARR[i][j]<<" ";

       }
       return true;
   }

   print(ARR);

   for(int i=0;i<9;i++)
   {
       for(int j=0;j<9;j++)
       {

           for(int no=1;no<=9;no++)
           {
              if(safe(ARR,i,j,no))
              {

                ARR[i][j]=no;
                if(solve(ARR)) return true;
                ARR[i][j]=0;

              }
           }

           if(ARR[i][j]==0) return false;
       }



   }
    return false;
}



int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {

        int ARR[9][9];
        loop(0,9)
        {for(int j=0;j<9;j++)
            cin>>ARR[i][j];
        }

        solve(ARR);
        cout<<endl;
    }


	return 0;
}
