#include<iostream>
using namespace std;
class BankAccpunt{
    private:
    int accountBalance;
    string accountHolder;
    public:
    void setData(int Balance,string name){
        this->accountBalance=Balance;
        this->accountHolder=name;
    }
    void depositAmount(int amount){
        if(amount>0){
            this->accountBalance += amount;
            cout << "Deposit Successfull ! " << endl;
        }else{
            cout << "Please enter positive amount" << endl;
        }
    }
    void withdrawMoney(int amount){
        if(accountBalance>=amount){
            accountBalance-=amount;
            cout << "Money Withdrawn Successfully" << endl;
        }else{
            cout << "Insufficient Amount" << endl;
        }
    }
    int getBalance(){
        return accountBalance;
    }
};
int main(){
    cout << "Welcome to the Bank System!" << endl;

    string holderName;
    cout << "Enter account holder name: ";
    cin >> holderName;

    BankAccpunt b1;
    int initial_balance;
    cout << "Enter initial Balance: ";
    cin >> initial_balance;
    b1.setData(initial_balance,holderName);


    cout << "Choose an option: " << endl;
    cout << "1. Deposit Money " << endl;
    cout << "2. Withdraw Money " << endl;
    cout << "3. Check balance " << endl;
    cout << "4. Exit " << endl;

    
    bool ans = true;
    while(ans){
        int choice;
        cout << "Enter choice:";
        cin >> choice;
        switch (choice){
        case 1:
            int deposit;
            cout << "Enter deposit Amount:";
            cin >> deposit;
            b1.depositAmount(deposit);
            break;
        case 2:
            int withdraw;
            cout << "Enter withdrawal Amount:";
            cin >> withdraw;
            b1.withdrawMoney(withdraw);
            break;
        case 3:
            cout << "Balance in account: " << b1.getBalance() << endl;
            break;
        case 4:
            cout << "Thank You for using our Bank System!" << endl;
            ans = false;
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
}