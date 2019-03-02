#include <iostream>

using namespace std;
struct INTERVALS
{
    int first;
    int second;
};


int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int pairs;
        cin>>pairs;
        INTERVALS Intervals[pairs];
        for(int i=0;i<pairs;i++)
        {
            cin>>Intervals[i].first;
            cin>>Intervals[i].second;
        }


      //SORTING PAIRS WITH RESPECT TO STARTING POINNT

       for(int i=0;i<pairs-1;i++)
        { for(int j=0;j<pairs-i-1;j++)
            {
                if(Intervals[j].first>Intervals[j+1].first)
                {
                    swap(Intervals[j],Intervals[j+1]);
                }
            }
        }

         /*for(int i=0;i<pairs;i++)
        cout<<Intervals[i].first<<"\t"<<Intervals[i].second<<endl;*/

INTERVALS latest;
latest.first=-1;
latest.second=-1;
        for(int i=1;i<pairs;i++)
        {


            if((Intervals[i].first<=Intervals[i-1].second)&&(Intervals[i].first>=Intervals[i-1].first))
            {    if(Intervals[i].second>Intervals[i-1].second)
                {//cout<<"111"<<endl;
                    Intervals[i-1].second=Intervals[i].second;
                Intervals[i].first=Intervals[i-1].first;
                Intervals[i].second=Intervals[i-1].second;
                }
                else{
                 //   cout<<"2222"<<endl;
                    Intervals[i].first=Intervals[i-1].first;
                Intervals[i].second=Intervals[i-1].second;

                }

            }
            else{
                 latest=Intervals[i-1];
                cout<<Intervals[i-1].first<<" "<<Intervals[i-1].second<<" ";

                if(i==pairs-1){ cout<<Intervals[i].first<<" "<<Intervals[i].second<<" ";latest=Intervals[i];}

            }
        if(i==pairs-1){if((latest.first!=Intervals[pairs-1].first)&&(latest.second!=Intervals[pairs-1].second))
                        { cout<<Intervals[pairs-1].first<<" "<<Intervals[pairs-1].second<<" ";}
                      }
        }

cout<<endl;
    }



     return 0;
}
