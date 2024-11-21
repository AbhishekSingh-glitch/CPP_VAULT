//Created by Abhishek Singh
//5/10/2024

#include<iostream>

using namespace std;

class shape{
    int len,bre;
    public:
    shape(int a=1,int b=1){
        len=a;
        bre=b;
    }
    int area(){
        return(len*bre);
    }
    int perimeter(){
        return((len==bre)?(4*len):(2*(len+bre)));
    }
};

int main(){
    shape s1(3);
    cout<<s1.perimeter();
    return 0;
}