// 18/9/2024
#include <iostream>
using namespace std;
int grea(int a, int b) { return (a > b ? a : b); }

class greaterNumber
{
public:
    int great2(int a, int b) 
    { 
        return (a > b ? a : b); 
    }
    int great3(int a, int b,int c) 
    { 
        return (a > b && a>c ? a : b>c? b:c); 
    }
};

int main()
{
    greaterNumber fun;
    int a, b,c;
    cin >> a >> b>>c;
    cout << fun.great2(a, b);
    cout << fun.great3(a, b,c);

    return 0;
}