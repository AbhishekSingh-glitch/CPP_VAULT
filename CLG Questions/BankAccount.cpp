#include<iostream>

using namespace std;

class BankAccount{
    private:
        char name[50];
        int accNum;
        char accType[20];
        int Balance;

    public:
        // to get details
        void sname();
        void saccNum();
        void saccType();
        void sBalance();

        // to print details
        void pname();
        void paccNum();
        void paccType();
        void pBalance();

        //  to manage amount
        void deposit(int amount);
        void withdraw(int amount);
        
};

void BankAccount:: sname(){
    cout<<"Enter your name ";
    cin>>name;
}
void BankAccount:: saccNum(){
    cout<<"Enter your Account Number ";
    cin>>accNum;
}
void BankAccount:: saccType(){
    cout<<"Enter your Account Type ";
    cin>>accType;
}
void BankAccount:: sBalance(){
    cout<<"Enter your Balance ";
    cin>>Balance;
}

void BankAccount:: pname(){
    cout<<"Name             ";
    cout<<name<<'\n';
}
void BankAccount:: paccNum(){
    cout<<"Account Number   ";
    cout<<accNum<<'\n';
}
void BankAccount:: paccType(){
    cout<<"Account Type     ";
    cout<<accType<<'\n';
}
void BankAccount:: pBalance(){
    cout<<"Balance          ";
    cout<<Balance<<'\n';
}

void BankAccount:: deposit(int amount){
    Balance+=amount;
}
void BankAccount:: withdraw(int amount){
    Balance-=amount;
}


int main(){
    BankAccount P;

    P.sname();
    P.saccNum();
    P.saccType();
    P.sBalance();
    system("cls");
    P.pname();
    // P.paccNum();
    // P.paccType();
    P.pBalance();

    char choice;
    int amount;
    cout<<"Want to deposit \nY for Yes\nN for Cancel\t";
    cin>>choice;
    if(choice=='Y'||choice=='y'){
        cout<<"Enter Amount ";
        cin>>amount;
        P.deposit(amount);
    }

    if(choice!='Y'&&choice!='y'){
        cout<<"Want to withdraw \nY for Yes\nN for Cancel\t";
        cin>>choice;
        if(choice=='Y'||choice=='y'){
            cout<<"Enter Amount ";
            cin>>amount;
            P.withdraw(amount);
        }
    }
    return 0;
}