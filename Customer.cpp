#include "Customer.h"
#include <iostream>

using namespace std; // Sử dụng namespace std

long Customer::getId() {
    return idCustomer;
}

string Customer::getName() {
    return nameCustomer;
}

void Customer::setId(long newId) {
    idCustomer = newId;
}

void Customer::addCustomer() {
    cin.ignore();
    cout << "Ten khach hang: ";
    getline(cin, nameCustomer);
    nhap();
}

void Customer::withdraw() {
    double withdrawAmount;
    cout << "Nhap so tien muon rut: ";
    cin >> withdrawAmount;
    if (withdrawAmount <= 0) {
        cout << "Khong duoc rut so tien khong hop le." << endl;
    } else if (withdrawAmount > getBalance()) {
        cout << "So tien rut vuot qua so du tai khoan." << endl;
    } else {
        setBalance(getBalance() - withdrawAmount);
        cout << "Ban da rut " << withdrawAmount << " tu tai khoan." << endl;
        cout << "So du hien tai: " << getBalance() << endl;
    }
}

void Customer::deposit() {
    double depositAmount;
    cout << "Nhap so tien muon gui: ";
    cin >> depositAmount;
    if (depositAmount <= 0) {
        cout << "Khong duoc gui so tien khong hop le." << endl;
    } else if (depositAmount > 20000000) {
        cout << "So tien gui trong 1 ngay phai nho hon hoac bang 20,000,000." << endl;
    } else {
        setBalance(getBalance() + depositAmount);
        cout << "Ban da gui " << depositAmount << " vao tai khoan." << endl;
        cout << "So du hien tai: " << getBalance() << endl;
    }
}

void Customer::transfer(Customer& otherCustomer, double transferAmount) {
    if (transferAmount <= 0) {
        cout << "So tien chuyen phai lon hon 0." << endl;
    } else if (transferAmount > getBalance()) {
        cout << "So tien chuyen vuot qua so du tai khoan." << endl;
    } else {
        setBalance(getBalance() - transferAmount);
        otherCustomer.setBalance(otherCustomer.getBalance() + transferAmount);
        cout << "Ban da chuyen " << transferAmount << " cho tai khoan cua " << otherCustomer.getName() << endl;
        cout << "So du hien tai cua ban: " << getBalance() << endl;
    }
}

void Customer::display() {
    cout << "Ten: " << nameCustomer << endl;
    Account::display();
}
