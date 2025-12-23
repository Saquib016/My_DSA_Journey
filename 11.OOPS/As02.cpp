#include <iostream>
using namespace std;
class BankAccount
{
    int accno;
    int bal;

public:

    void deposit(int amount)
    {
        bal += amount;
        getbal();
    }
    void withdraw(int amount)
    {
        bal -= amount;
        getbal();
    }
    void getbal()
    {
        cout << bal << endl;
    }
};
int main()
{
    int a;
    int w;
    cout<<"Enter the Amount to be Deposit = "<<endl;
    cin>>a;
    cout<<"Enter the Amount to be Withdraw = "<<endl;
    cin>>w;
    BankAccount b;
    b.deposit(a);
    b.withdraw(a);
    b.getbal();
}