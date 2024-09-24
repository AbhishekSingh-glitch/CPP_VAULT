// 23/09/2024
#include<iostream>
using namespace std;

class Greater {

    int a,b;
    public:

    void s(){
        cin>>a>>b;
    }

    void p(){
        cout<<a<<" "<<b;
    }

    Greater cla(Greater p,Greater p2){
        a= p.a>p2.a ? p.a: p2.a;
        b= p.b>p2.b ? p.b: p2.b;
    }
};

int main(){
    Greater gc,gc2,gc3;

    gc.s();
    gc2.s();

    gc3.cla(gc,gc2);
    gc3.p();
    return 0;
}