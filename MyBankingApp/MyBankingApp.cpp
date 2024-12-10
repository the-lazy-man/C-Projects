#include <iostream>
#include <string>

using namespace std;

class AccountHolder {
private:
    int balance = 0;
    int withdrawnAmount = 0;
    int depositAmount = 0;

public:
    void withdrawCash() {
        cout << "Enter Withdraw Amount: ";
        cin >> withdrawnAmount;
        if (withdrawnAmount <= balance) {
            balance -= withdrawnAmount;
            cout << withdrawnAmount << " Amount is Withdrawn Successfully\n";
        } else {
            cout << "Your account balance is insufficient!\n";
        }
    }

    void depositCash() {
        cout << "Enter Deposit Amount: ";
        cin >> depositAmount;
        balance += depositAmount;
        cout << depositAmount << " Amount is Deposited Successfully\n";
    }

    void checkBalance() {
        cout << "Your current balance is: " << balance << endl;
    }

    void openAccount() {
        string name, dob, phoneNo;
        cin.ignore(); // Clear input buffer
        cout << "Enter your Full Name: ";
        getline(cin, name);
        cout << "Enter your DOB (xx/yy/zzzz): ";
        getline(cin, dob);
        cout << "Enter Your Phone Number: ";
        getline(cin, phoneNo);
        cout << "Congratulations! Your account has been successfully opened.\n";
    }
};

int main() {
    AccountHolder accountHolder;
    int choice;

    cout << "* Welcome to SBI Branch Bansoor 301402 *\n";
    cout << "_________________________\n";
    cout << "1. Open Account\n";
    cout << "2. Deposit Cash\n";
    cout << "3. Withdraw Cash\n";
    cout << "4. Check Balance\n";
    cout << "5. Exit\n";
    cout << "_________________________\n";

    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                accountHolder.openAccount();
                break;
            case 2:
                accountHolder.depositCash();
                break;
            case 3:
                accountHolder.withdrawCash();
                break;
            case 4:
                accountHolder.checkBalance();
                break;
            case 5:
                cout << "Thank you for using our services. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option.\n";
        }
    }

    return 0;
}
