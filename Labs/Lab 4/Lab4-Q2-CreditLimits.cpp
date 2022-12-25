/*(Credit Limits) Develop a C++ program that will determine whether a department-store 
customer has exceeded the credit limit on a charge account. For each customer, the following 
facts are available:
a) Account number (an integer)

b) Balance at the beginning of the month

c) Total of all items charged by this customer this month

d) Total of all credits applied to this customer's account this month

e) Allowed credit limit

The program should use a while statement to input each of these facts, calculate the new 
balance (= beginning balance + charges – credits) and determine whether the new balance 
exceeds the customer’s credit limit. For those customers whose credit limit is exceeded, 
the program should display the customer’s account number, credit limit, new balance and the 
message “Credit Limit Exceeded.”
*/
#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int accountNumber = 0;
    int balance = 0;
    int totalCharge = 0;
    int totalCredit = 0;
    int creditLimit = 0;

    while (i != -1) {
        cout << "Enter the account number: ";
        cin >> accountNumber;
        cout << "Enter the total charges: $";
        cin >> totalCharge;
        cout << "Enter the total credit: $";
        cin >> totalCredit;
        cout << "Enter the credit limit: $";
        cin >> creditLimit;

        cout << "The new balance is $" << balance + totalCharge - totalCredit << ".\n";
        if ((balance + totalCharge - totalCredit) > creditLimit) {
            cout << "Account " << accountNumber << " has exceed the credit limit of $" << creditLimit << " with a balance of $" << balance + totalCharge - totalCredit << endl;
        }

        cout << "\nAre there more customers to input information for?\nEnter any other integer to continue inputting or enter -1 to stop."<<endl;
        cin >> i;
    }
    cout << "\n\nCredit limit checking program finished!";
}
