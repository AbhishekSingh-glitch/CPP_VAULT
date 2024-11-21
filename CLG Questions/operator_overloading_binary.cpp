//Created by Abhishek Singh
//8/10/2024

#include<iostream>

using namespace std;

class fun{
    int x;
    public:
    fun(int a=0){
        x=a;
    }
    // fun(int a=0): x(a) {}   // better way 
    void g(){
        cin>>x;
    }
    void p(){
        cout<<x<<' ';
    }
    fun operator+(fun a){
        fun op;
        op.x=(x+a.x);
        return op;
    }
    fun operator-(fun a){
        fun op;
        op.x=(x-a.x);
        return op;
    }
    fun operator*(fun a){
        fun op;
        op.x=(x*a.x);
        return op;
    }
    fun operator/(fun a){
        fun op;
        op.x=(x/a.x);
        return op;
    }
    fun operator%(fun a){
        fun op;
        op.x=(x%a.x);
        return op;
    }
    fun operator^(fun a){
        fun op(1);
        int i=0;
        
        while(i<a.x){
            op.x*=x;
            i++;
        }
        return op;
    }
    
    bool operator<(fun b){
        return (x<b.x);
    }
    bool operator>(fun b){
        return (x>b.x);
    }

};


int main(){
    fun s(2),s2(3),s3;
    s3= s+s2;
    s3.p();
    s3= s-s2;
    s3.p();
    s3= s*s2;
    s3.p();
    s3= s/s2;
    s3.p();
    s3= s%s2;
    s3.p();
    s3=s^s2;
    s3.p();
    return 0;
}