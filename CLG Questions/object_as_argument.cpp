//Created by Abhishek Singh
//30/9/2024

#include<iostream>

using namespace std;

class test{
    int a,b;
    public:
        void g(){
            cin>>a>>b;
        }
        void p(){
            cout<<a<<' '<<b;
        }
        void sum(test sum1,test sum2){
            a=sum1.a+sum2.a;
            b=sum1.b+sum2.b;
        }
};
int main(){

    test t1,t2,t3;
    cout<<"Enter 2 numbers for 1st object\t";
    t1.g();
    cout<<"Enter 2 numbers for 1st object\t";
    t2.g();
    t3.sum(t1,t2);
    t3.p();
    return 0;
}