//Created by Abhishek Singh
//6/10/2024

#include<iostream>

using namespace std;

class c{
    int a;
    public:
    
    c(int t=0){
        a=t;
    }
    void p(){
        cout<<a<<endl;
    }
};

int main(){
    c a;
    a.p();
    c b(5);
    b.p();
    return 0;
}