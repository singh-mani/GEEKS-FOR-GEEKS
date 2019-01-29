#include <iostream>

using namespace std;

int main()
{
  int TEST;
  cin>>TEST;
  while(TEST--)
  {
      int len;
      cin>>len;
      string str;
      cin>>str;
      for(int i=0;i<len-1;i=i+2)
      {
          swap(str[i],str[i+1]);
      }

//cout<<str[len-1];

       for(int i=0;i<len;i=i+1)
      {
      int rem=str[i]%96;
      char r=123-rem;
      cout<<r;
      }
  cout<<endl;
   }
   return 0;
}
