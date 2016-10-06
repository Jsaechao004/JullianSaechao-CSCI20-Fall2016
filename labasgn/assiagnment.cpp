#include <iostream>
#include <string>
using namespace std;

int main() {
    string fName;
    string lName;
    float hours;
    float rate;
    float grossPay;
    float taxes;
    float netPay;
    
    cout << "Enter your first name: " << endl;
    cin >> fName;
    
    cout << "Enter your last name: " << endl;
    cin >> lName;
    
    cout << "Enter your hours of the week: " << endl;
    cin >> hours;
    
    cout << "Enter your hourly pay: " << endl;
    cin >> rate;
    
    grossPay = rate * hours;
    taxes = grossPay * 0.17;
    netPay = grossPay - taxes;
    
    cout << "processing..... " << endl;
    cout << endl;
    
    cout << "Hello " << fName << " " << lName << ". "<< endl;
    cout << "Your weekly Gross Pay is $" << grossPay << ". " << endl;
    cout << "Your Net Pay is $" << netPay << ". " << endl;
    
   return 0;
}
