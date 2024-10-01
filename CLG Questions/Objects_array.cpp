#include<iostream>

using namespace std;
class students{
    char name[20];
    int rollno;
    int _class;

    public:
    void addetails(){
        cout<<"Enter class ";
        cin>>_class;
        cout<<"Enter Name ";
        cin>>name;
        cout<<"Enter roll Number ";
        cin>>rollno;
        
    }
    void getdetails(){
        cout<<_class;
        cout<<name;
        cout<<rollno;
        
    }
};

int main(){
    students s[10];
    for (int i = 0; i < 10; i++)
    {
        s[i].addetails();
    }
    for (int i = 0; i < 10; i++)
    {
        s[i].getdetails();
    }
    return 0;
}