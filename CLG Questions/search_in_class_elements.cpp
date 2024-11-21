#include<iostream>

using namespace std;

class data{
    int a;
    public:
    void scan(){
        cin>>a;
    }
    void print(){
        cout<<a<<' ';
    }
    int search(int ele){
        return (a==ele?1:0);
    }
};


int main(){
    data d1[6];
    
    for (int i = 0; i < 6; i++)
    {
        d1[i].scan();
    }
    for (int i = 0; i < 6; i++)
    {
        d1[i].print();
    }

    int ele;
    cout<<"\nenter element to search ";
    cin>>ele;

    for (int i = 0; i < 6; i++)
    {
        int flag=0;
        flag=d1[i].search(ele);

        if(flag==1) {
            cout<<"\nelement found in class "<<i+1;
            break;
        }
    }
    return 0;
}