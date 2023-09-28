#pragma once // Đảm bảo rằng tệp sẽ chỉ được bao gồm một lần

class Account {
private:
    long accountNumber = 2002271903;
    double accountBalance;

public:
    long getNumber();
    double getBalance();
    void setNumber(long newNumber);
    void setBalance(long newBalance);

    void nhap();
    void display();

    virtual void withdraw() = 0;
    virtual void deposit() = 0;
};
