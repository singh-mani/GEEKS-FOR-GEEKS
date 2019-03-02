#include <iostream>

using namespace std;

int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {

        int PAINTERS;int NO_OF_BOARDS;
        cin>>PAINTERS>>NO_OF_BOARDS;
        int BOARDS[NO_OF_BOARDS];
        int total_boards=0;
        for(int i=0;i<NO_OF_BOARDS;i++)
        {cin>>BOARDS[i];total_boards+=BOARDS[i];}
int each=total_boards/PAINTERS;
int time[PAINTERS];
int mintime=0;
int sum=0,count=0;

for(int i=0;i<NO_OF_BOARDS;i++)
{if(count>=PAINTERS){break;}
    sum+=BOARDS[i];
    if(sum>=each){time[count++]=sum;sum=0;}
    else if (i==NO_OF_BOARDS-1){time[count++]=sum;}
}

int mi=0;
for(int i=0;i<count;i++)
{
   mi=max(mi,time[i]);

}

    cout<<mi<<endl;

    }




    return 0;
}
