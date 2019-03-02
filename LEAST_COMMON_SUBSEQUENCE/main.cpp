                //IMPORTANT QUESTIONNNNN//

//https://practice.geeksforgeeks.org/problems/longest-common-subsequence/0
#include <bits/stdc++.h>

using namespace std;

bool found(vector<int >indexes,int ind)
{
    for(int i=0;i<indexes.size();i++)
    {
        if(ind==indexes[i]){return true;}
    }
    return false;
}




int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {int ans=0;
        int m,n;
        cin>>m>>n;
       // vector<int> indexes;
        //vector<char>vecstr;
       // vector<char>::iterator ind;
        string str1,str2;
        cin>>str1>>str2;
int L[m+1][n+1];
        for(int i=0;i<=m;i++)
        {for(int j=0;j<=n;j++)
            {
                if(j==0||i==0){L[i][j]=0;}

                else if(str1[i-1]==str2[j-1]){L[i][j]=L[i-1][j-1]+1;}
                else{L[i][j]=max(L[i][j-1],L[i-1][j]);}

            }

        }

    cout<<L[m][n]<<endl;
    }



    return 0;
}
