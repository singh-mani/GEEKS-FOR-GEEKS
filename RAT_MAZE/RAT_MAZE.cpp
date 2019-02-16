//https://practice.geeksforgeeks.org/problems/rat-maze-with-multiple-jumps/0
#include <bits/stdc++.h>
using namespace std;

bool safe(int** maze, int x, int y,int N)
{
    // if (x, y outside maze) return false
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] != 0)
        return true;

    return false;
}



bool solved(int** matrix,int x,int y,int distance,int order,int** result)
{
   // cout<<x<<"   "<<y<<endl;


    if(x==order-1&&y==order-1){
        result[x][y]=1;
    for(int i=0;i<order;i++)
    {
        for(int j=0;j<order;j++)
            cout<<result[i][j]<<" ";
    cout<<endl;
    }

   return true;
 }

  //int move=matrix[x][y];
 if(safe(matrix,x,y,order)==true)
    {
result[x][y]=1;
           for(int move=1;move<=matrix[x][y]&&move<order;move=move+1)
            {   //int sx=0,sy=0;
                  if(solved(matrix,x,y+move,distance+move,order,result)==true)
                    {return true;}
                    //else{result[x][y]=0;}

                //else{result[x][y]=0;}

                 if(solved(matrix,x+move,y,distance+move,order,result)==true)
                    {return true;}
               // else{result[x][y]=0;}
            }


        //if(sx==0&&sy==0){cout<<"xx"<<x<<"  "<<y<<endl;result[x][y]=0;}


        result[x][y]=0;
        return false;
    }
return false;
}





int main()
{
int TEST;
cin>>TEST;
while(TEST--)
{
    int order;
    cin>>order;
    int* matrix[order];
    for(int i=0;i<order;i++)
    matrix[i]=(int *)malloc(order*sizeof(int ));

    for(int i=0;i<order;i++)
    {
        for(int j=0;j<order;j++)
            cin>>matrix[i][j];
    }

  int* result[order];
    for(int i=0;i<order;i++)
    result[i]=(int *)malloc(order*sizeof(int ));

    for(int i=0;i<order;i++)
    {
        for(int j=0;j<order;j++)
        {
            result[i][j]=0;
        }
    }



int distance=0;
if(!solved(matrix,0,0,distance,order,result))
{cout<<"-1"<<endl;}


}
    return 0;
}
