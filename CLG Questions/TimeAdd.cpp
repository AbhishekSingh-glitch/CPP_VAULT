// 24/9/2024
#include<iostream>

using namespace std;

class Time{
    int o=1,hour=0,min=0 ;
    char mer='A';
    public:
    void entertime(){
        cout<<"Enter time ";
        cin>>hour>>min;
    }
    void printtime(){
        cout<<hour<<":"<<min;
    }
    char totaltime(Time a,Time b){
        hour=a.hour+b.hour;
        min=a.min+b.min;

        if(min>=60){
            hour+=min/60;
            min%=60;
        }
        while(hour>12){
            hour-=12;
            if(o==1){
                o=0;
                mer='P';
            }
            else if(o==0){
                o=1;
                mer='A';
            }
        }
        return mer;
    }
};
int main(){
    Time t1,t2,t3;
    char mer;
    t1.entertime();
    t2.entertime();
    mer=t3.totaltime(t1,t2);
    t3.printtime();
    cout<<' '<<mer<<'M';
    return 0;
}