#include<bits/stdc++.h>
using namespace std;

int fiind(int array[],int arraySize,int item)
{for(int i = 0; i < arraySize; i++){
     if(array[i] == item){
        // cout<<"\t same AT INDEX "<<i<<endl;
          return i;
     }
}
return -5;
}


int main()
{
    int TEST;
    cin>>TEST;
    while(TEST--)
    {
    int M,N;
    cin>>M>>N;
    int arr_M[M],arr_N[N];
    for(int i=0;i<M;i++)    cin>>arr_M[i];
    for(int i=0;i<N;i++)    cin>>arr_N[i];

    char previous;
    int index=1,sum=0;

      if(arr_M[0]>arr_N[0]){sum+=arr_M[0];previous='i';}

      else{sum+=arr_N[0];previous='j';}


while((previous=='i' && index<M) || (previous=='j' && index<N))
{//cout<<previous<<"\t"<<index<<"\t  SUM  =="<<sum<<endl;
    int same;

  if(previous=='j') {same=fiind(arr_M,M,arr_N[index]);}
  else {same=fiind(arr_N,N,arr_M[index]);}
  //cout<<"SAiME   ==  "<<same<<"\t";
    if(same<0){
         if(previous=='i'){sum+=arr_M[index++];}
        else sum+=arr_N[index++];

    }

    else{



        if(previous=='j')
       {    sum+=arr_N[index++];
           int diff1=M-same;
           int diff2=N-index+1;
           if(diff1>diff2 ){index=same+1;previous='i';}
            else if(diff1 == diff2)
            {
                if(arr_M[same+1]>arr_N[index]){index=same+1;previous='i';}

            }

       }

       else
       {   sum+=arr_M[index++];
          int diff1=N-same;
           int diff2=M-index+1;
           if(diff1>diff2 ){index=same+1;previous='j';}
             else if(diff1 == diff2)
            {
                if(arr_N[same+1]>arr_M[index]){index=same+1;previous='j';}

            }

       }

    }


}

  cout<<sum<<endl;
    }

	return 0;
}
