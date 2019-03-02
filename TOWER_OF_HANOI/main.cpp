#include <iostream>
using namespace std;
int steps=0;
void SOLVE(int N,int from,int to,int usig)
{steps++;
if(N==1){printf("move disk %d from rod %d to rod %d\n",N,from,to);return;}


SOLVE(N-1,from,usig,to);
printf("move disk %d from rod %d to rod %d\n",N,from,to);
SOLVE(N-1,usig,to,from);







}




int main() {
int TEST;
cin>>TEST;
while(TEST--)
{steps=0;
    int N;
    cin>>N;
    SOLVE(N,1,3,2);
    cout<<steps<<endl;



}
	return 0;
}
