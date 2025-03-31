#include <iostream>

using namespace std;


int main () {

        double balance = 1000;
    int option;


        cout << "------Your No.1 ATM-------" <<endl;
    while (true) {

        cout<< "1. View Balance" <<endl;
        cout<< "2. Deposit money" <<endl;
        cout<< "3. Withdraw Money" <<endl;
        cout<< "4. Exit" <<endl;
        cout<< "ENTER OPTION" <<endl;

        cin >>option;

        switch (option) {

            case 1:
                cout<< "Your current balance is: " << balance <<endl;
            break;

            case 2:
                double deposit_amount;
                cout<< "Enter Amount you want to deposit" <<endl;
                cin>>deposit_amount;

            if (deposit_amount > 0)
                    {
                    balance += deposit_amount;
                    cout<< "Deposit added successfully, Your new balance is " <<balance <<endl;
                }
            else{
                        cout<<"Please enter a valid amount to deposit";

                }
            break;

            case 3:
                double amount_to_withdraw;
                cout<< "Enter amount to withdraw"<<endl;
                cin>> amount_to_withdraw;

            if (amount_to_withdraw >0 && amount_to_withdraw<= balance)
                {
                    balance -=amount_to_withdraw;
                    cout<< "Withdrawal successful" <<endl;
                    cout<< "Your new balance is :" <<balance <<endl;

                }
            else if (amount_to_withdraw >balance)
                {
                    cout<< "You can't withdraw more than your current balance"<<endl;
                    cout<< "Enter the right amount"<<endl;

                }
                else {
                    cout<< "Invalid Amount Entered" <<endl;

                }
            break;

            case 4:
                cout << "Thanks for using the ATM" <<endl;
                cout << "Have a nice day!!!" <<endl;
                return 0;

            default:
                cout<< "Sorry! You have entered a Wrong Option" <<endl;
        }
    }

return 0;

}





