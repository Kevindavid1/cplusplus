#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;
//for getting the details of the user
class BankAccount {
private:
    string name;
    string phone;
    string card;
    string pin;
    double balance;

public:
    // Account creation
    void createAccount() {
        cout << "\n=== Create Bank Account ===\n";
        cin.ignore();

        cout << "Enter your name: ";
        getline(cin, name);

        // Phone validation
        while (true) {
            cout << "Enter your phone number: ";
            getline(cin, phone);
            if (phone.length() == 10 && all_of(phone.begin(), phone.end(), ::isdigit)) break;
            cout << "Invalid phone number. Try again.\n";
        }

        // Card validation
        while (true) {
            cout << "Enter Aadhaar card number: ";
            getline(cin, card);
            if (card.length() == 12 && all_of(card.begin(), card.end(), ::isdigit)) break;
            cout << "Invalid card number. Try again.\n";
        }

        // PIN validation
        while (true) {
            cout << "Set a 4-digit PIN: ";
            getline(cin, pin);
            if (pin.length() == 4 && all_of(pin.begin(), pin.end(), ::isdigit)) break;
            cout << "PIN must be 4 digits.\n";
        }

        // Initial deposit
        while (true) {
            cout << "Enter initial deposit (minimum ₹5000): ";
            cin >> balance;
            if (!cin.fail() && balance >= 5000) break;
            cout << "Amount must be ₹5000 or more.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        cout << "\n Account created successfully!\n";
    }

    // Check login credentials
    bool login( string pinInput) {
        return ( pin == pinInput);
    }

    // Show menu
    void showMenu() {
        int choice;
        do {
            cout << "\n=== Account Menu ===\n";
            cout << "1. Deposit\n";
            cout << "2. Withdraw\n";
            cout << "3. Check Balance\n";
            cout << "4. Logout\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1: deposit(); break;
                case 2: withdraw(); break;
                case 3: showBalance(); break;
                case 4: cout << "Logging out...\n"; break;
                default: cout << "Invalid choice. Try again.\n";
            }
        } while (choice != 4);
    }

    // Deposit
    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (!cin.fail() && amount > 0) {
            balance += amount;
            cout << "₹" << amount << " deposited successfully.\n";
        } else {
            cout << "Invalid amount.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    // Withdraw
    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (!cin.fail() && amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "₹" << amount << " withdrawn successfully.\n";
        } else {
            cout << "Invalid or insufficient balance.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    // Balance
    void showBalance() {
        cout << "Current Balance: ₹" << balance << endl;
    }

    // Get card number (for searching)
    string getCard() {
        return card;
    }
};

int main() {
    vector<BankAccount> accounts;
    int mainChoice;

    do {
        cout << "\n========== Bank App ==========\n";
        cout << "1. Create New Account\n";
        cout << "2. Login to Existing Account\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        if (mainChoice == 1) {
            BankAccount newAcc;
            newAcc.createAccount();
            accounts.push_back(newAcc);
        } 
        else if (mainChoice == 2) {
            string  inputPin;
            cin.ignore();
            
            cout << "Enter 4-digit PIN: ";
            getline(cin, inputPin);

            bool found = false;
            for (auto &acc : accounts) {
                if (acc.login( inputPin)) {
                    cout << "\n Login successful!\n";
                    acc.showMenu();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << " Invalid card number or PIN.\n";
            }
        } 
        else if (mainChoice == 3) {
            cout << "Thank you for using the Bank App. Goodbye!\n";
        } 
        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (mainChoice != 3);

    return 0;
}
