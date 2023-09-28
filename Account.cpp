#include "Account.h" // Bao gồm tệp header của lớp Account
#include <iostream>
using namespace std;
long Account::getNumber() {
    return accountNumber;
}

double Account::getBalance() {
    return accountBalance;
}

void Account::setNumber(long newNumber) {
    accountNumber = newNumber;
}

void Account::setBalance(long newBalance) {
    accountBalance = newBalance;
}

void Account::nhap() {
    cout << "so tien muon dua vao ngan hang : ";
    cin >> accountBalance;
}

void Account::display() {
    cout << "so du : " << accountBalance << endl;
}
