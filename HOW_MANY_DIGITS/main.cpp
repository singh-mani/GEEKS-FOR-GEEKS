#include<iostream>
using namespace std;
int main()
{
int N;
cin>>N;
int count=0;
for(int i=N;i>0;i=i/10)
{count++;}
cout<<count;




return 0;
}
