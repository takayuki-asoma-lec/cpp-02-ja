// コードを入力してください
#pragma once

class BankAccount{
public:
    BankAccount(const double balance) : balance_(balance){};
    void deposit(const double amount);
    void withdraw(const double amount);
    double get_balance();

private:
    double balance_;
};
