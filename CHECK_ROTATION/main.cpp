#include <iostream>

using namespace std;
string LEFT_ROTATE(string str)
{
    int len=str.length();

      string rot=str;

      for(int i=0;i<len-1;i++)
      {
          rot[i]=str[i+1];
      }
    rot[len-1]=str[0];
//cout<<endl<<rot<<endl;
return rot;
}
int main()
{
   int TEST;
   cin>>TEST;
   while(TEST--)
   {int ans=0;
       string str1,str2;
       cin>>str1>>str2;
       int len1=str1.length();
       int len2=str2.length();
       if(len1!=len2){ans=0;}
       else
        {

        for(int i=0;i<len1;i++)
        {
            str2=LEFT_ROTATE(str2);
            if(str1==str2){ans=1;break;}
        }


       }

   if(ans==0){cout<<"0"<<endl;}
   else{cout<<"1"<<endl;}
   }
    return 0;
}
