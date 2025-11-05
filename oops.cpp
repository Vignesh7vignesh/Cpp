#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
    double balance;
    public:
    BankAccount(double b): balance(b){balance=50000000;}
    friend void auditaccount(BankAccount A);

};
