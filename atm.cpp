#include <iostream>
using namespace std;


void showMenu(){
    cout << "****************MENU*****************" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Make a Deposit" << endl;
    cout << "3. Make a Withdrawal" << endl;
    cout << "4. Exit" << endl;

    cout << "**************************************" << endl;

}

int main(){

    int options;
    double balance = 500;

    do{
    showMenu();
    cout<<"Options: ";
    cin >> options;

    system("cls");

    switch (options)
    {
    case 1: cout<<"Balance is $"<<balance<<endl; 
        break;


    case 2: cout<<" Deposit amount: ";
        double depositAmount;
        cin>> depositAmount;
        balance +=depositAmount; 
        break;


    case 3: cout<<" Withdraw amount: ";
        double WithdrawAmount;
        cin>> WithdrawAmount;
        if (WithdrawAmount <= balance)
            balance -=WithdrawAmount; 
        else
            cout << "Insufficient balnce " << endl; 

        break;

    default:
        break;
    }
    } while (options!= 4);
    

    system ("pause > 0");
}