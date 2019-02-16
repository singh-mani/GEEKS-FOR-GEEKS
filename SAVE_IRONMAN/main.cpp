#include <iostream>
#include<string.h>
using namespace std;
bool check_no(int l)
{
    if((l>=48)&&(l<=57)){return true;}
    else{return false;}

}
bool check_big(int l)
{
    if((l>=65)&&(l<=90)){return true;}
    else{return false;}

}
bool check_small(int l)
{
    if((l>=97)&&(l<=122)){return true;}
    else{return false;}

}
int main()
{
    int TEST;
    cin>>TEST;
     cin.ignore();
    while(TEST--)
    {int res=0,j=0;
int count=0;
        string str;
       getline(cin,str);
        int len=str.length();
        cout<<"lennn"<<len<<endl;
        for(int i=0;i<len/2;i++)
        {cout<<i<<" ==>>"<<endl;
            int l=str[i];
            int r=str[len-count-1];

            while(!(check_no(l))&&!(check_big(l))&&!(check_small(l)))
                {i++;l=str[i];if(i>=len/2){j=1;break;}
                }

            while(!(check_no(r))&&!(check_big(r))&&!(check_small(r)))
            {count++;r=str[len-count-1];if(count>=len/2){j=1;break;}}

            if(j==1){

                if((!(check_no(l))&&!(check_big(l))&&!(check_small(l)))==(!(check_no(r))&&!(check_big(r))&&!(check_small(r))))
                    {
                    res=1;
                    break;
                    }
            }



char L=l;char R=r;count++;
          //  while(l==' '){i++;l=str[i];}
           // while(r==' '){len--;r=str[len-i-1];}
            if((abs(l-r)==32)||(l==r)){res=1;cout<<"1111    "<<L <<"\t";cout<<"2222   "<<R<<"\t";cout<<"CORRECT";}
            else{res=0;cout<<"1111    "<<L <<"\t";cout<<"2222   "<<R<<"\t";break;}
            cout<<endl;
        }

        if(res==1){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
    }
    return 0;
}
