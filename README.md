💳 Bank Management System - C++
📌 Introduction
The Bank Management System is a simple console-based application written in C++. It offers fundamental functionalities such as account creation, deposit/withdrawal of money, and viewing account details. It is built using Object-Oriented Programming concepts and utilizes a linked list for dynamic account storage.

✅ Features
Add Account: Create a new bank account with an initial balance.

Deposit Money: Deposit an amount into an existing account.

Withdraw Money: Withdraw funds from an account (if sufficient balance exists).

Display All Accounts: View all account holders with account numbers and balances.

Exit System: Terminate the program gracefully.

🛠️ Technologies Used
Programming Language: C++

Concepts Implemented:

Object-Oriented Programming (Classes, Objects, Encapsulation, Inheritance)

Data Structures (Singly Linked List)

🧩 Class Structure
1. BankAccount Class
Represents an individual bank account.

Attributes:

accountNumber (string): Unique account identifier.

accountHolder (string): Name of the account holder.

balance (double): Current account balance.

Methods:

BankAccount(string, string, double): Constructor to initialize account details.

deposit(double): Adds funds to the account.

withdraw(double): Deducts amount if sufficient balance is available.

getBalance(): Returns current balance.

getAccountHolder(): Returns account holder's name.

getAccountNumber(): Returns account number.

2. Node Struct
A structure representing a node in the linked list holding a BankAccount object.

3. LinkedList Class
Manages dynamic storage of bank accounts using a singly linked list.

Methods:

insert(BankAccount): Adds a new node/account to the list.

search(string): Finds an account by account number.

display(): Prints details of all accounts.

4. Bank Class
Central class managing bank operations.

Methods:

addAccount(BankAccount): Adds a new account to the system.

getAccount(string): Returns a pointer to a specific account.

displayAllAccounts(): Displays all available accounts.

🔁 Program Flow
Display Main Menu with all available operations.

Process user input:

Add Account: Request user input and store the account.

Deposit/Withdraw: Ask for account number and perform transaction.

Display All Accounts: Show all records.

Exit: Quit the application.

🧪 Example Usage
markdown
Copy
Edit
Welcome to RR Bank Management System
************
1. Add Account
2. Deposit
3. Withdraw
4. Display All Accounts
5. Exit
Enter your choice: 1
Enter Account Number: 1001
Enter Account Holder Name: John Doe
Enter Initial Balance: 5000
🚀 Future Enhancements
Add file handling for persistent account storage.

Implement a login system for added security.

Introduce interest calculations for savings accounts.

Build a GUI version using frameworks like Qt or Tkinter.

📌 Conclusion
This Bank Management System project serves as an educational tool to understand and apply object-oriented programming and linked list data structures in a real-world scenario. It lays the groundwork for creating more advanced and secure banking applications.

