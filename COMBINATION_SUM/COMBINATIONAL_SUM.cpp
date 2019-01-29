//https://practice.geeksforgeeks.org/problems/combination-sum/0
#include <bits/stdc++.h>

using namespace std;
int solved=0;


void print(vector <int >path)
{   solved=1;
    cout<<"(";
    for(int i=0;i<path.size();i++)
        {cout<<path[i];
        if(i!=path.size()-1){cout<<" ";}
        }
        //char b=127;
      //  cout<<'\b \b';
cout<<")";

}

int  summ(vector<int > pp)
{int sum=0;
    for(int i=0;i<pp.size();i++)
        sum=sum+pp[i];

    //if(sum<0){return 0;}
        return sum;
}


vector<int> remove_dup(int arr[],int N)
{vector<int > distinct;
  for(int i=1;i<N;i++)
  {
      if(arr[i]!=arr[i-1])
      {
          distinct.push_back(arr[i-1]);
      }
  }
  distinct.push_back(arr[N-1]);
return distinct;
}




void solve (int N, vector<int>distinct,int sum,vector<int >path,int i)
{//cout<<"size of path"<<path.size()<<"   ";
//cout<<"N==="<<N<<"   "<<"i==="<<i<<"      ";

   // print(path);
    int now=summ(path);
   // cout<<now<<"    "<<sum<<endl;
    if(sum<now){ return ;}
    if(now==sum){print(path);}
 //   if(arr[i]>=sum){return;}
    for(;i<N && distinct[i]<=sum;i++)
    {
      //  cout<<"11111111111111"<<endl;

        path.push_back(distinct[i]);
        //now=accumulate(path.begin(),path.end(),0.0);

                solve(N,distinct,sum,path,i);
                path.pop_back();


    }
//cout<<"STOPP";
}



int main()
{

    int TEST;
    cin>>TEST;
    while(TEST--)
    {solved=0;   //global variable to check if print fun is executed or not
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
sort(arr,arr+N);

    vector<int> distinct=remove_dup(arr,N);//removing duplicates and storing in vector
int sum;
cin>>sum;
    vector<int >path;
        solve(distinct.size(),distinct,sum,path,0);
    if(solved==0){cout<<"Empty";}
cout<<endl;
}
    return 0;
}
