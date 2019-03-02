#include<iostream>
using namespace std;
  int same=0;int z=0;int cc=1;
void solve(int tip_X[],int tip_Y[],int N,int TIP,int cou_X,int cou_Y,int j,int X,int Y)
{


for(int i=j;i<N;i++)
{//cout<<i<<"==="<<cou_X<<"\t"<<cou_Y<<"\t";
if((cou_Y>=Y)&&(cou_X>=X)){break;}
if(cou_X+cou_Y>=N){break;}

    if((cou_Y==Y)||((tip_X[i]>tip_Y[i])&&(cou_X<X)))
        {cou_X++;
         TIP=TIP+tip_X[i];

        }
    else if((cou_X==X)||((tip_X[i]<tip_Y[i])&&(cou_Y<Y)))
    {
        {TIP=TIP+tip_Y[i];cou_Y++;}
    }

   else if(tip_X[i]==tip_Y[i])
    {
       TIP=TIP+tip_X[i];
        }

}

cout<<TIP<<endl;

}












void soort(int arr1[],int arr2[],int N)
{     int diff[N];
    for(int i=0;i<N;i++)
    {
        diff[i]=abs(arr1[i]-arr2[i]);

    }
for(int i=0;i<N-1;i++)
    {   for(int j=0;j<N-1;j++)
        {
            if(diff[j]<diff[j+1])
            {
                swap(diff[j],diff[j+1]);
                swap(arr1[j],arr1[j+1]);
                swap(arr2[j],arr2[j+1]);
            }


        }

    }


}








int main() {

int TEST;
cin>>TEST;
while(TEST--)
{
    int N,X,Y;
    cin>>N>>X>>Y;
    int tip_X[N],tip_Y[N];
    for(int i=0;i<N;i++)
    {
        cin>>tip_X[i];
    }
     for(int i=0;i<N;i++)
    {
        cin>>tip_Y[i];
    }
    int TIP=0;
    soort(tip_X,tip_Y,N);

solve(tip_X,tip_Y,N,TIP,0,0,0,X,Y);
}

	return 0;
}
