#include <iostream>

using namespace std;

bool is_Present(int no,int X)
{
    while(no>0)
    {
        if(no%10==X){return true;}
        no/=10;
    }
  return false;
}

int How_Many(int no,int X)
{int count=0;
    while(no>0)
    {
        if(no%10==X){count++;}
        no/=10;
    }
 return count;
}




int main()
{
  int TEST;
  cin>>TEST;
  while(TEST--)
  {
      int X,Lower,Upper,count=0;
      cin>>X>>Lower>>Upper;
      for(int i=Lower+1;i<Upper;i++)
      {
          if(is_Present(i,X)){count+=How_Many(i,X);}
      }
cout<<count<<endl;
  }

    return 0;
}
