#include <bits/stdc++.h>
#include<string.h>
#define lli long long int
using namespace std;

bool check_pallindrome(int n)
{string s=to_string(n);
    if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
    return true;
else
    return false;;




/*
    int divisor = 1;
    while (n / divisor >= 10)
        divisor *= 10;

    while (n != 0)
    {
        int leading = n / divisor;
        int trailing = n % 10;

        if (leading != trailing)
            return false;
        n = (n % divisor) / 10;
        divisor = divisor / 100;
    }
    return true;
*/

}

void closest_pallindrome(string str)
{string pall;
   if(check_pallindrome(stoi(str))){cout<<str<<endl;return;}

    int N=str.length();

  if(N%2){
        string pal1,pal2;
  int mid=N/2;

  pal1=str.substr(0,mid+1);
  pal2=str.substr(0,mid);

reverse(pal2.begin(),pal2.end());
  pall=pal1+pal2;

  }
   else{

        int mid=N/2;
        string pal1;
        pal1=str.substr(0,mid);
       string pal2=pal1;
     reverse(pal2.begin(),pal2.end());;
    pall=pal1+pal2;
    }

    int i=stoi(str);
    int diff=stoi(pall)-i;

        while(diff>=0)
        {
            if(check_pallindrome(i)){cout<<i<<endl;return;}
             i--;
            diff--;
        }
i=stoi(str);
diff=stoi(pall)-i;
        while(diff<0)
        {
            if(check_pallindrome(i)){cout<<i<<endl;return;}
            i++;
            diff++;
        }


    cout<<pall<<endl;


}



int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        string N;
        cin>>N;
        closest_pallindrome(N);
    }



    return 0;
}
