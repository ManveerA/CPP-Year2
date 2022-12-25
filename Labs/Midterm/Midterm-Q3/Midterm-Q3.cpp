// Source file
#include <iostream>
#include "Account.h"
#include "Activity.h"

using namespace std;

int main() {

    int deposite{ 0 };
    cout << "Enter deposite amount : ";
    cin >> deposite;
    
    Account account1{ "Jack", 100 };

    cout << "The initial balance was" << account1.getBalance() << endl;
    Activity activityCheck(account1, deposite);
    activityCheck.validate(deposite);
    account1.deposit(deposite);
    cout << "The new balance is " << account1.getBalance();
}


