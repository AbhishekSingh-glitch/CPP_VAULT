#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;


class BankAccount
{
private:
    char name[50];
    unsigned int accNum;
    char accType[10]="Savings";
    int Balance;
    int PIN;

public:
    // to set details
    void setname();
    void setAccountNumber();
    void setBalance();
    void setPin();
    // to print details
    void getName();
    void getAccountNumber();
    void getAccountType();
    void getBalance();

    //  to manage amount
    void givePIN();
    void deposit(int amount);
    void withdraw(int amount);
};

void BankAccount::setname()
{
    cout << "Enter your name ";
    cin.get(name, 50);
}
void BankAccount::setAccountNumber()
{
    srand(time(0));
    int i = 0;
    accNum = 0;
    while (i < 16)
    {
        accNum += rand() % 9 + 1;
        accNum *= 10;
        i++;
    }
}
void BankAccount::setBalance()
{
    cout << "Enter your Balance ";
    cin >> Balance;
}
void BankAccount::setPin()
{
    int fpin = -1, cpin = 0;
    do
    {
        do{
            if(fpin<999 && fpin!=-1){
                cout<<"password must be of 4 digits ";
            }
            cout << "Enter Pin ";
            cin>>fpin;
        }
        while(fpin<999);

        cout << "\nEnter Confirm Pin ";
        cin>>cpin;

    } while (fpin != cpin);
    PIN = cpin;
}

void BankAccount::getName()
{
    cout << "Name             ";
    cout << name << '\n';
}
void BankAccount::getAccountNumber()
{
    cout << "Account Number   ";
    cout << accNum << '\n';
}
void BankAccount::getAccountType()
{
    cout << "Account Type     ";
    cout << accType << '\n';
}
void BankAccount::getBalance()
{
    cout << "Balance          ";
    cout << Balance << '\n';
}

void BankAccount::givePIN()
{
    int pin = 0;
    do
    {
        cout << "Enter PIN\t";
        cin >> pin;
    } while (PIN != pin);
    // add wrong pin accpected till 3
    // 
}
void BankAccount::deposit(int amount)
{
    Balance += amount;
}
void BankAccount::withdraw(int amount)
{
    if(amount>Balance){
        cout<<"Out of Balance ";
    }
    else
        Balance -= amount;
}

void set_data(BankAccount &P)
{
    P.setname();
    P.setAccountNumber();
    P.setBalance();
    P.setPin();
}
void print_data(BankAccount P, int n = 0, int a = 0, int aT = 0, int b = 0)
{

    if (n == 1)
        P.getName();
    if (a == 1)
        P.getAccountNumber();
    if (aT == 1)
        P.getAccountType();
    if (b == 1)
        P.getBalance();
}

void print_choice(char *choice)
{
    cout << "1. Deposit\n2. Withdraw\n3. Deatils\n4. Cancel\n";
    do
    {
        *choice = getch();
    } while (*choice > '4');
}

int main()
{
    cout << "\033[H\033[J";


    BankAccount P;
    set_data(P);

    printf("\033[H\033[J");
    print_data(P, 1, 0, 0, 1);

    int amount;
    char choice = 0;
    print_choice(&choice);

    if (choice == '1')
    {
        cout << "Enter Amount ";
        cin >> amount;
        P.deposit(amount);
    }

    else if (choice == '2')
    {
        cout << "Enter Amount ";
        cin >> amount;
        P.givePIN();
        P.withdraw(amount);
    }

    else if (choice == '3')
    {
        print_data(P, 1, 1, 1, 1);
        return 0;
    }

    printf("\033[H\033[J");

    return 0;
}