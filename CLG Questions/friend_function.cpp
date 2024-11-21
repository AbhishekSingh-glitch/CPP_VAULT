//Created by Abhishek Singh
//4/10/2024

#include<iostream>

using namespace std;

class A1;
class A2;
int sum(A1,A2);

class A1{
    int x;
    public:
        A1(){
            x=0;
        }
        void g(){
            cin>>x;
        }
        void p(){
            cout<<x;
        }
        friend int sum(A1,A2);
};

class A2{
    int x;
    public:
        A2(){
            x=0;
        }
        void g(){
            cin>>x;
        }
        void p(){
            cout<<x;
        }
        friend int sum(A1,A2);
};

int sum(A1 a,A2 b){
    return (a.x+b.x);
}

int main(){
    A1 y;
    A2 z;
    y.g();
    z.g();
    cout<<sum(y,z);

    return 0;
}