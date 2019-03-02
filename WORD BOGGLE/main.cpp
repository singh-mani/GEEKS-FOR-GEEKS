#include<bits/stdc++.h>
using namespace std;

bool find_WORDS(char **boggle,bool **visited,int i,int j,string str,string result,int M,int N)

{

   if(i==-1 && j==-1)
  {
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(boggle[i][j]==result[0])
                {visited[i][j]=true;
                    if(find_WORDS(boggle,visited,i,j,str+result[0],result,M,N)) return true;

                    visited[i][j]=false;
                }
            }
        }

      return false;
  }



    if(str.length()>result.length()) return false;
    if(str==result){ cout<<str<<" "; return true;}

    for(int r=i-1;r<=i+1;r++)
    {
        for(int c=j-1;c<=j+1;c++)
        {int temp=str.length();
            if(r>=0 && c>=0 && r<M && c<N && visited[r][c]==false && boggle[r][c]==result[temp])
            {
                visited[r][c]=true;
                if(find_WORDS(boggle,visited,r,c,str+boggle[r][c],result,M, N)) return true;
                visited[r][c]=false;
            }

        }

    }



return false;

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
            if(find(ALL_STRINGS.begin(),ALL_STRINGS.end(),get)==ALL_STRINGS.end())
            ALL_STRINGS.push_back(get);
        }

        sort(ALL_STRINGS.begin(),ALL_STRINGS.end());
        int M,N;
        cin>>M>>N;

        char** boggle=(char**)malloc(sizeof(char*)*M);
        for(int i=0;i<M;i++)
        boggle[i]=(char*)malloc(sizeof(char)*N);

        for(int i=0;i<M;i++)
            for(int j=0;j<N;j++)
              cin>>boggle[i][j];




    bool** visited=(bool**)malloc(sizeof(bool*)*M);

        for(int i=0;i<M;i++)
        visited[i]=(bool*)malloc(sizeof(bool)*N);

        for(int i=0;i<M;i++)
            for(int j=0;j<N;j++)
            visited[i][j]=false;

int PRESENT=0;
for(auto it=ALL_STRINGS.begin();it!=ALL_STRINGS.end();it++)
   {
      //cout<<"FOR ANS == "<<*it<<endl;
        if(find_WORDS(boggle,visited,-1,-1,"",*it,M,N)) PRESENT=1;

         for(int i=0;i<M;i++)
            for(int j=0;j<N;j++)
                 visited[i][j]=false;


   }

        if(PRESENT==0){cout<<"-1";}
 cout<<endl;

    }

    return 0;
}
