//Created by Abhishek Singh
//1/10/2024

#include<iostream>

using namespace std;

class pattern
{
public:
    void print_line(int count=5,char symbol='*'){
        for(int i=1;i<=count;i++){
            cout<<symbol<<' ';
        }
        cout<<endl;
    }
};


int main(){
    pattern p;
    p.print_line();
    return 0;
}