#include <iostream>

using namespace std;

int gcd(int X,int Y)
{   if(Y!=0){gcd(Y,X%Y);}
    else{return X;}

}


int main()
{
   int TEST;
   cin>>TEST;
   while(TEST--)
   {
   int X,Y;
   cin>>X>>Y;
   int g=gcd(X,Y);
   cout<<2*g<<endl;

   }
    return 0;
}
