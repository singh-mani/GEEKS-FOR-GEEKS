#include <iostream>

using namespace std;

int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        string str;
        cin>>str;
        int count=0;
        int len=str.length();
        for(int i=1;i<len;i++)
        {   if(str[count]==str[i])
                {count++;


                }
           else{count=0;
           if(str[count]==str[i])
                {count++;}
                }

       // cout<<count<<"\t"<<str[i]<<endl;
        }

        cout<<count<<endl;
    }
    return 0;
}
