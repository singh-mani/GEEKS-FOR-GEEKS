
//https://practice.geeksforgeeks.org/problems/total-decoding-messages/0
#include<bits/stdc++.h>
#define loop(m,N) for(int i=m;i<N;i++)
using namespace std;

int solve(string s,int i)
{
    if(i==s.length()) return 1;
    else if(i>s.length()) return 0;
   if(s[i]=='0') return 0;
    if(s[i]=='1') return solve(s,i+1)+solve(s,i+2);
    if(s[i]=='2' && s[i+1] <'7')  return solve(s,i+1)+solve(s,i+2);

    else return solve(s,i+1);



}












int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int N;
        cin>>N;
        string str;
        cin>>str;

        cout<<solve(str,0)<<endl;
    }


	return 0;
}
