#include <iostream>

using namespace std;

class ATM {
private:
    double accountBalance;

    bool validatePIN(int inputPIN) {
        const int correctPIN = 1234; // Example PIN
        return inputPIN == correctPIN;
    }

public:
    ATM(double initialBalance) : accountBalance(initialBalance) {}

    void withdrawMoney(int inputPIN, double amount) {
        if (validatePIN(inputPIN)) {
            if (amount <= accountBalance) {
                accountBalance -= amount;
                cout << "Withdrawal successful! Remaining balance: $" << accountBalance << endl;
            } else {
                cout << "Insufficient balance." << endl;
            }
        } else {
            cout << "Invalid PIN." << endl;
        }
    }

    void checkBalance(int inputPIN) {
        if (validatePIN(inputPIN)) {
            cout << "Current balance: $" << accountBalance << endl;
        } else {
            cout << "Invalid PIN." << endl;
        }
    }
};

int main() {
    ATM myATM(1000.00); // Initialize ATM with $1000 balance

    int pin;
    cout << "Enter your PIN: ";
    cin >> pin;

    int choice;
    do {
        cout << endl << "ATM Menu:" << endl;
        cout << "1. Withdraw Money" << endl;
        cout << "2. Check Balance" << endl;
        cout << "3. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                myATM.withdrawMoney(pin, amount);
                break;
            }
            case 2:
                myATM.checkBalance(pin);
                break;
            case 3:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
