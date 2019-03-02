#include <iostream>

using namespace std;
bool found(int x,int arr[],int len)
{int m=0;
    for(int i=0;i<len;i++)
    {
        if(x==arr[i]){m=1;}
    }
if(m==0){return false;}
else{return true;}
}




int main()
{
   int TEST;
   cin>>TEST;
   while(TEST--)
   {
 int arr[256]={0};
 string str;
 cin>>str;
 int len=str.length();
 int count=0;
 for(int i=0;i<len;i++)
 {
    arr[str[i]]++;
    if(arr[str[i]]==1){count++;}
 }

 if(count<3){cout<<"Dynamic"<<endl;continue;}
 int sum[count];
 count=0;
  for(int i=0;i<len;i++)
  {
      if(arr[str[i]]!=0){sum[count++]=arr[str[i]];arr[str[i]]=0;}
  }

  //SORTING SUM ARRAY
    for(int i=0;i<count-1;i++)
  { for(int j=0;j<count-i-1;j++)
        {
          if(sum[j]>sum[j+1]){int temp=sum[j];sum[j]=sum[j+1];sum[j+1]=temp;}
        }

  }
/*
 for(int i=0;i<count;i++)
 {
     cout<<sum[i]<<"--->"; }

cout<<"COUNTTT===="<<count<<endl;
*/

  int m=1;

                 for(int i=count;i>=2;i--)
                 {
                     if(sum[i]==( sum[i-1]+sum[i-2]))
                     {
                        m=0;
                        break;
                     }

                 }
  if(m==1){cout<<"Not"<<endl;}
    else{cout<<"Dynamic"<<endl;}

}

    return 0;

}
