#include<bits/stdc++.h>
#define loop(m,N) for(int i=m;i<N;i++)
using namespace std;
int sol=0;
int myCompare(string X, string Y)
{
    string XY = X.append(Y);

    string YX = Y.append(X);

    return XY.compare(YX) > 0 ? 1: 0;
}

void printLargest(vector<string> arr)
{
    //sort(arr.begin(), arr.end(), myCompare);
    for(int i=0;i<arr.size()-1;i++)
    {
        for(int j=0;j<arr.size()-i-1;j++)
        {
            string aa=arr[j+1]+arr[j];
            string bb=arr[j]+arr[j+1];

            if(aa.compare(bb)>0)
            {
                swap(arr[j],arr[j+1]);
            }

        }
    }


    for (int i=0; i < arr.size() ; i++ )
        cout << arr[i];
}


int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
        int N;
        cin>>N;
        vector<string> ARR ;string temp;
        loop(0,N) {cin>>temp;ARR.push_back(temp);}
      printLargest(ARR);
      cout<<endl;
    }


	return 0;
}
