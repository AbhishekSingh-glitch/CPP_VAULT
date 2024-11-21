#include<iostream>

using namespace std;

void print(char symbol, int number=25){
    for (; number>0; number--){
        cout<<symbol<<' ';
    }
    
}
int main(){
    int number;
    char symbol;
    cout<<"Enter symbol to print ";
    cin>>symbol;
    cout<<"Enter number to print upto ";
    cin>>number;

    if(number>0)
        print(symbol,number );
    else 
        print(symbol);
    return 0;
}