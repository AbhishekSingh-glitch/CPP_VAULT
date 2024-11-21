//Created by Abhishek Singh
//16/10/2024

#include<iostream>

using namespace std;

class fun{
    public:
    fun(){
        cout<<"constructor is called when object is made\n";
    }
    ~fun(){
        cout<<"destructor is called just before control will go out of scope\n";
    }
};

int main(){
    // here the scope is main function of s
    fun s;
    return 0;
}