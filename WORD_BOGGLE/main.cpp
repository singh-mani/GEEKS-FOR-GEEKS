#include <bits/stdc++.h>
#include<string.h>
using namespace std;
bool isPRESENT(string str,int Number_of_strings, vector<string> ALL_STRINGS)
{

    for(int i=0;i<Number_of_strings;i++)
    {
        string get=ALL_STRINGS[i];
        if(str.compare(get)==0) return true;

    }
return false;
}


int PRESENT=0;


void find_WORDS(char **boggle,bool **visited,int i,int j,string str,int Number_of_strings, vector<string> ALL_STRINGS,int M,int N)

{
    visited[i][j]=true;
    str=str+boggle[i][j];
//cout<<str<<endl;
    if(isPRESENT(str,Number_of_strings,ALL_STRINGS)){ PRESENT=1; cout<<str<<" ";}


    for(int row=i-1;row<=i+1 && row <M;row++)
    {
        for(int col=j-1;col<=j+1 && col<N;col++)
        {
            if(row>=0 && col>=0 && visited[row][col]==false)
            find_WORDS(boggle,visited,row,col,str,Number_of_strings,ALL_STRINGS,M,N);
        }
    }
            str.erase(str.length()-1);
            visited[i][j]=false;



}





int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int Number_of_strings;
        cin>>Number_of_strings;
    vector<string> ALL_STRINGS;

        for(int i=0;i<Number_of_strings;i++)
        {   string get;
            cin>>get;
            ALL_STRINGS.push_back(get);
        }
        int M,N;
        cin>>M>>N;

        char** boggle=(char**)malloc(sizeof(char*)*M);
        for(int i=0;i<M;i++)
        boggle[i]=(char*)malloc(sizeof(char)*N);

        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                cin>>boggle[i][j];
            }
        }


    bool** visited=(bool**)malloc(sizeof(bool*)*M);
        for(int i=0;i<M;i++)
        visited[i]=(bool*)malloc(sizeof(bool)*N);

        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                visited[i][j]=false;
            }
        }

string str="";

        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                find_WORDS(boggle,visited,i,j,str,Number_of_strings,ALL_STRINGS,M,N);
            }
        }

if(PRESENT==0){cout<<"-1"<<endl;}






    }

    return 0;
}
