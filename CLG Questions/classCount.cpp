#include<iostream>

using namespace std;

class Count
{
    private:
        static int a;
    public:
        Count(){
            cout<<a++<<' ';
        }
};
// Initializing static variable
int Count::a= 0;

int main(){
    Count c[10];
    
    return 0;
}