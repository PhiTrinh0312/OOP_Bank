#include <iostream>
#include "Customer.cpp"
#include "Account.cpp"
using namespace std;

int main() {
    int x;
    int id_num = 1;
    Customer customer[100];
    int n = 1;
    int i = 0;
    long number;
    long id;
    string name;
    bool found = false;

    while (i < 100) {
        cout << "1. Tao tai khoan" << endl;
        cout << "2. Rut tien" << endl;
        cout << "3. Gui tien vao tai khoan ban than" << endl;
        cout << "4. Gui tien vao mot tai khoan khac" << endl;
        cout << "Chon dich vu: ";
        cin >> x;

        switch (x) {
            case 1:
                cout << "Nhap thong tin tao tai khoan:" << endl;

                for (int i = n - 1; i < n; i++) {
                    customer[i].addCustomer();
                    customer[i].setId(customer[i].getId() + id_num);
                    customer[i].setNumber(customer[i].getNumber() + id_num);
                    id_num++;
                }
                cout << endl;
                for (int i = n - 1; i < n; i++) {
                    customer[i].display();
                    cout << "Ma so ID cua ban: " << customer[i].getId() << endl;
                    cout << "Ma so tai khoan cua ban: " << customer[i].getNumber() << endl;
                    cout << endl;
                }
                break;

            case 2:
                cin.ignore();
                cout << "Nhap ten cua ban: ";
                getline(cin, name);
                cout << "Nhap so tai khoan: ";
                cin >> number;
                cout << "Nhap ID: ";
                cin >> id;
                found = false;
                for (int i = 0; i < 100; i++) {
                    if (customer[i].getNumber() == number && customer[i].getId() == id && customer[i].getName() == name) {
                        customer[i].withdraw();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Khach hang khong ton tai." << endl;
                }
                break;

            case 3:
                cin.ignore();
                cout << "Nhap ten cua ban: ";
                getline(cin, name);
                cout << "Nhap so tai khoan: ";
                cin >> number;
                cout << "Nhap ID: ";
                cin >> id;
                found = false;
                for (int i = 0; i < 100; i++) {
                    if (customer[i].getNumber() == number && customer[i].getId() == id && customer[i].getName() == name) {
                        customer[i].deposit();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Khach hang khong ton tai." << endl;
                }
                break;

            case 4:
                cin.ignore();
                cout << "Nhap ten cua ban: ";
                getline(cin, name);
                cout << "Nhap so tai khoan: ";
                cin >> number;
                cout << "Nhap ID: ";
                cin >> id;
                found = false;
                for (int i = 0; i < 100; i++) {
                    if (customer[i].getNumber() == number && customer[i].getId() == id && customer[i].getName() == name) {
                        Customer recipient;
                        cin.ignore();
                        cout << "Nhap ten nguoi ban muon chuyen tien: ";
                        getline(cin, name);
                        cout << "Nhap so tai khoan ban muon chuyen tien: ";
                        cin >> number;
                        found = false;
                        for (int j = 0; j < 100; j++) {
                            if (customer[j].getNumber() == number && customer[j].getName() == name) {
                                recipient = customer[j];
                                found = true;
                                break;
                            }
                        }
                        if (found) {
                            double transferAmount;
                            cout << "Nhap so tien muon chuyen: ";
                            cin >> transferAmount;
                            customer[i].transfer(recipient, transferAmount);
                        }
                        else {
                            cout << "Tai khoan nhan khong ton tai." << endl;
                        }
                        break;
                    }
                }
                if (!found) {
                    cout << "Khach hang khong ton tai." << endl;
                }
                break;
        }
        i--;
    }
    return 0;
}
