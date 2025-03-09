#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;

public:
    BankAccount(const string& accountNumber, const string& accountHolder, double balance = 0.0)
        : accountNumber(accountNumber), accountHolder(accountHolder), balance(balance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid amount for deposit." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Insufficient funds or invalid amount for withdrawal." << endl;
        }
    }

    double getBalance() const {
        return balance;
    }

    string getAccountHolder() const {
        return accountHolder;
    }

    string getAccountNumber() const {
        return accountNumber;
    }
};

class Bank {
private:
    vector<BankAccount> accounts;
public:
    void addAccount(const BankAccount& account) {
        accounts.push_back(account);
    }

    BankAccount* getAccount(const string& accountNumber) {
        for (BankAccount& account : accounts) {
            if (account.getAccountNumber() == accountNumber) {
                return &account;
            }
        }
        return nullptr;
    }

    void displayAllAccounts() const {
        for (const BankAccount& account : accounts) {
            cout << setw(20) << left << account.getAccountNumber()
                 << setw(20) << left << account.getAccountHolder()
                 << setw(10) << left << account.getBalance() << endl;
        }
    }
};

int main() {
    Bank bank;

    while (true) {
        cout << "Welcome to RR Bank Management System\n";
        cout << "************" << endl;
        cout << "1. Add Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Display All Accounts\n";
        cout << "5. Exit\n";
        cout << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                string accountNumber, accountHolder;
                double balance;
                cout << endl;

                cout << "Enter Account Number: ";
                cin >> accountNumber;

                cout << "Enter Account Holder Name: ";
                cin.ignore();
                getline(cin, accountHolder);

                cout << "Enter Initial Balance: ";
                cin >> balance;

                BankAccount account(accountNumber, accountHolder, balance);
                bank.addAccount(account);
                cout << endl;
                break;
            }
            case 2: {
                string accountNumber;
                double amount;
                cout << endl;

                cout << "Enter Account Number: ";
                cin >> accountNumber;

                BankAccount* account = bank.getAccount(accountNumber);

                if (account) {
                    cout << "Enter Deposit Amount: ";
                    cin >> amount;
                    account->deposit(amount);
                    cout << endl;
                } else {
                    cout << "!!!!Account not found!!!!" << endl;
                    cout << endl;
                }
                break;
            }
            case 3: {
                string accountNumber;
                double amount;
                cout << endl;
                cout << "Enter Account Number: ";
                cin >> accountNumber;

                BankAccount* account = bank.getAccount(accountNumber);

                if (account) {
                    cout << "Enter Withdrawal Amount: ";
                    cin >> amount;
                    account->withdraw(amount);
                    cout << endl;
                } else {
                    cout << "!!!!Account not found!!!!" << endl;
                    cout << endl;
                }
                break;
            }
            case 4: {
                cout << setw(20) << left << "Account Number"
                     << setw(20) << left << "Account Holder"
                     << setw(10) << left << "Balance" << endl;
                cout << "----------------------------------------------" << endl;

                bank.displayAllAccounts();
                cout << endl;
                break;
            }
            case 5: {
                cout << "Exiting Bank Management System.\n";
                return 0;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}
