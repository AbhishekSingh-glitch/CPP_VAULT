//Created by Abhishek Singh
//22/10/2024

#include<iostream>

using namespace std;

class fun{
    int x;
    public:
    fun(int a=0){
        x=a;
    }
    void p(){
        cout<<x<<' ';
    }
    void operator++(){
        ++x;
    }
    int operator++(int){
        return x++;
    }
    void operator--(){
        --x;
    }
    int operator--(int){
        return x--;
    }
  
};

int main(){
    fun s;
    s++;
    s.p();
    return 0;
}