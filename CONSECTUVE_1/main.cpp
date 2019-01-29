#include <iostream>

using namespace std;

int main()
{

   int TEST;
   cin>>TEST;
   while(TEST--)
   {
       int no;
       cin>>no;
       int consec=0,result=0;
       while(no>0)
       {
       //cout<<"1111111"<<endl;
           if(no&1){consec++;}
           else{consec=0;}
           if(consec>result){result=consec;}
           no=no>>1;
           //cout<<no<<endl;
       }

       cout<<result<<endl;

   }


    return 0;
}
