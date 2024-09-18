// 11/9/2024
#include<iostream>
#include<stdlib.h>

using namespace std;

class Table
{
    int a, upto;

    public:
    void snum()
    {
        cout << "enter no.";
        cin >> a >> upto;
    }
    void table()
    {
        for (int i = 1; i <= upto; i++)
        {
            printf("%d\n", a*i);
        }
    }
};

int main()
{
    Table ct;
    ct.snum();
    ct.table();

    return 0;
}