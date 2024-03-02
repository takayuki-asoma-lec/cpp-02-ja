// コードを入力してください
#include "bank_account.h"
#include <iostream>

void BankAccount::deposit(const double amount){
    if(amount < 0)
        return;
    balance_ += amount;
    std::cout << balance_ << std::endl;
}

void BankAccount::withdraw(const double amount){
    if(amount < 0)
        return;
    if (amount > balance_)
    {
        std::cout << "Insufficient balance!" << std::endl;
        return;
    }
    balance_ -= amount;
    std::cout << balance_ << std::endl;
}

double BankAccount::get_balance() { return balance_; };