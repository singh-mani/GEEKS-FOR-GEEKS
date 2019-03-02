//https://practice.geeksforgeeks.org/problems/tic-tac-toe/0

#include <iostream>

using namespace std;

int main()
{
    int TEST;
    cin>>TEST;
    cin.ignore();
    while(TEST--)
    {
        string str1;

     getline(cin,str1);
     //cout<<str1<<endl;
        string str="";
        for(int i=0;i<str1.length();i++)
        {
            if(str1[i]!=' '){str=str+str1[i];}
        }
        //cout<<str;
        int count_X=0,count_Y=0;
        for(int i=0;i<9;i++)
        {
            if(str[i]=='X'){count_X++;}
            else{count_Y++;}

        }

//cout<<"count_X==="<<count_X<<"  count_y=="<<count_Y;
        if(count_Y!=4||count_X!=5){cout<<"Invalid\n";continue;}
//cout<<"count_X==="<<count_X<<"  count_y=="<<count_Y;
        int x_win=0,y_win=0;
        if(str[0]==str[3]&&str[0]==str[6]){if(str[0]=='X')x_win++;else y_win++;}
        if(str[1]==str[4]&&str[1]==str[7]){if(str[1]=='X')x_win++;else y_win++;}
        if(str[2]==str[5]&&str[2]==str[8]){if(str[2]=='X')x_win++;else y_win++;}
        if(str[0]==str[1]&&str[0]==str[2]){if(str[0]=='X')x_win++;else y_win++;}
        if(str[3]==str[4]&&str[3]==str[5]){if(str[3]=='X')x_win++;else y_win++;}
        if(str[6]==str[7]&&str[6]==str[8]){if(str[6]=='X')x_win++;else y_win++;}
        if(str[0]==str[4]&&str[0]==str[8]){if(str[0]=='X')x_win++;else y_win++;}
        if(str[2]==str[4]&&str[2]==str[6]){if(str[2]=='X')x_win++;else y_win++;}
//cout<<"    "<<x_win;
        if(y_win>=1){ cout<<"Valid\n";continue;
                    }

        else{cout<<"Valid\n";continue;}



    }




       return 0;
}
