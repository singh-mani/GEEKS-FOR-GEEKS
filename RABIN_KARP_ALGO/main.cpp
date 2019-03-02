#include <iostream>
#include<string.h>
#define d 256
using namespace std;

void search (char txt[],char pat[],int q)
{
    int N=strlen(txt);
    int M=strlen(pat);
    int i,j;
    int t=0,p=0;
    int h=1;
    for(t=0;t<M-1;t++)
    {
    h=(h*d)%q;
    }
t=0;
    for(i=0;i<M;i++)
    {p=(d*p+pat[i])%q;
    t=(d*t+txt[i])%q;
    //cout<<p<<"\t"<<t<<endl;
    }

    for(i=0;i<N-M;i++)
    { //cout<<p<<"\t"<<t<<endl;
        if(p==t)
        {
            for(j=0;j<M;j++)
            {if(pat[j]!=txt[i+j])
                break;

            }

            if(j==M)
            {
            cout<<"FOUND AT INDEX =="<<i<<endl;

            }

        }

    if(i<N-M)
    {
        t=(d*(t-txt[i]*h)+txt[i+M])%q;
        if(t<0){t=t+q;}

    }

  }
}



int main()
{

    char txt[]={"ABDCB"};
    char pat[]={"DC"};
    int q=11;
    search(txt,pat,q);
    return 0;
}
