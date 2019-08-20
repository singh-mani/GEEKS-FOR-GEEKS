#include<bits/stdc++.h>
using namespace std;
class A{
    private :
        int a;
    protected:
        int b;
    public :
        int c;
        A(int g,int h, int j){
            a=g;b=h;c=j;
        }
};

class B : protected A{

    private:
        int x;
    protected:
        int y;
    public:
        int z;
        B(int q,int w,int e,int g,int h,int j):A(q,w,e){

            x=g;y=h;z=j;
        }
};


int main()
{
    B obj(1,2,3,7,8,9);
    cout<<obj.c<<endl;


}
