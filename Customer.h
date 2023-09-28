#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Account.h"
#include <string>

class Customer : public Account {
private:
    long idCustomer=20119266;
    std::string nameCustomer;

public:

    long getId();
    std::string getName();
    void setId(long newId);
    void addCustomer();
    void withdraw() override;
    void deposit() override;
    void transfer(Customer& otherCustomer, double transferAmount);
    void display();
};

#endif
