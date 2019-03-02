#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> g1(5);
    for(int i=1;i<=5;i++)
    {
        g1.push_back(i);
    }
    for(vector<int>::iterator i=g1.begin();i<g1.end();i++)
    {
        cout<<*i<<"";
    }
    cout<<endl<<"SIZE OF "<<g1.capacity();


return 0;
}
