//https://practice.geeksforgeeks.org/problems/akku-and-binary-numbers/0
#include <bits/stdc++.h>
#define lli long long int
using namespace std;

int count_bits(lli i)
{int setbits=0;
   while(i!=0)
    {i=i&i-1;
    setbits++;
    if(setbits>3){break;}
    }
//cout<<i<<"=="<<setbits<<endl;
return setbits;

}





void store(vector<lli> storehouse)
{
    lli number=pow(2,63);
    lli R=pow(10,18);
    for(lli i=2;i<=63;i++)
    {   for(lli j=1;i<=62;i++)
        {

            for(lli k=0;k<=61;k++)
                {
                int no=pow(2,i)|pow(2,j)|pow(2,k);


        if(count_bits(no)==3) {numbers++;storehouse.push_back(no);}


    }
 // return numbers;
}


int findnum(vector<lli > storehouse,lli L,lli R)
{
    int numbers=0;
    lli i=0;
    while(storehouse[i]<=R)
{
    if(storehouse[i]>=L){numbers++;}
i++;
}

return numbers;
}









int main()
{ vector<int >storehouse;
    store(storehouse);
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        long long int L,R;
        cin>>L>>R;
        cout<<findnum(storehouse,L,R)<<endl;
    }



       return 0;
}
