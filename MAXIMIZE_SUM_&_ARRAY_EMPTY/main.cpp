//https://practice.geeksforgeeks.org/problems/maximize-the-sum-of-selected-numbers-from-an-array-to-make-it-empty/0
#include <bits/stdc++.h>
using namespace std;

int main() {


int TEST;
cin>>TEST;
while(TEST--)
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	        cin>>arr[i];

	    sort(arr,arr+N);
	    vector<int >vv;
	    for(int i=0;i<N;i++)
	        vv.push_back(arr[i]);

	    int sum=0;
	    while(vv.empty()==false)
	       {int get=vv.back();
	        sum+=get;
	        std::vector<int>::iterator mm;
	        mm=find(vv.begin(),vv.end(),get);
	        vv.erase(mm);
	       std::vector<int>::iterator it;
	        it=find(vv.begin(),vv.end(),get-1);
	        if(it!=vv.end())
            {vv.erase(it);}
	    }
	 cout<<sum<<endl;
	}




	return 0;
}
