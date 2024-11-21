//Created by Abhishek Singh
//7/10/2024

#include<iostream>

using namespace std;

class fun{

    public:
    int sum(int a,int b){
        cout<<(a+b)<<' ';
        return(a+b);
    }
    int sum(int a,int b,int c){
        cout<<(a+b+c)<<' ';
        // cout<<(sum(a,b)+c)<<' ';
        return(a+b+c);
    }
};
    
int main(){
    fun s;
    s.sum(1,2,3);
    s.sum(1,3);
    return 0;
}