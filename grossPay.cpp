#include <iostream>
using namespace std;

int main () {

    int numOfEmployee;
    int employeeWage;

    // taking input from user 

    cout << "Enter the numebr of employee ";
    cin >> numOfEmployee;

    cout << "Enter the number of wages ";
    cin >> employeeWage;

    int grossPay = numOfEmployee * employeeWage;

    cout << "Total gross Pay " << grossPay << endl;

    return 0;
}