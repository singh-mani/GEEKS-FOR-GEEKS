#include <iostream>

using namespace std;

 void maxheapify(int A[],int i,int siz)
{
    int L=2*i;
    int R=2*i+1;


    int largest=i;
    if(L<=siz && A[L]>A[i])
        largest=L;


    if(R<=siz && A[R]>A[largest])
        largest=R;

    if(largest!=i) swap(A[largest],A[i]);
    else return;
//cout<<largest<<"   "<<siz<<endl;
maxheapify(A,largest,siz);
}



int main()
{
    int A[]={0,4,7,6,15,5,9,8,3,1,2};

    int heapsize=10,N=10;

    for(int i=heapsize/2;i>=1;i--)
    {
      //  swap(A[1],A[i]);

        maxheapify(A,i,N);


    }


    for(int i=heapsize;i>1;i--)
    {
        swap(A[1],A[i]);

        maxheapify(A,1,--N);


    }

        for(int i=1;i<heapsize;i++)
            cout<<A[i]<<" ";

    return 0;
}
