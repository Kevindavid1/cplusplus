#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount() {
        accountNumber = 0;
        accountHolderName = "";
        balance = 0.0;
    }

    void setAccountNumber(int accNum) {
        accountNumber = accNum;
    }

    void setAccountHolderName(string name) {
        accountHolderName = name;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount <<endl<< " New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
            } else {
                cout << "Insufficient funds." << endl;
            }
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc;

    int accNum;
    string name;
    double amount;
    int choice;

    cout << "Enter Account Number: ";
    cin >> accNum;
    acc.setAccountNumber(accNum);

    cout << "Enter Account Holder Name: ";
    cin.ignore(); 
    getline(cin, name);
    acc.setAccountHolderName(name);

    cout << "\nAccount created successfully! \n";

    
    cout << "Please deposit your initial amount: $";
    cin >> amount;
    acc.deposit(amount);

    do {
        cout << "\nMenu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Display Account Info\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: $";
                cin >> amount;
                acc.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: $";
                cin >> amount;
                acc.withdraw(amount);
                break;
            case 3:
                acc.displayAccountInfo();
                break;
            case 4:
                cout << "Exiting application. bye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
