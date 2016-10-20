//Jullian Saechao
//created on 10/16/2016
//lab 11 if/else
#include <iostream>
#include <string>
using namespace std;


main(){
    string name;
    string status;
    int gross;
    int taxHeld;
    int tax;
    int owedTax;
    int calcTot;
    
    cout << "Input name: "<< endl;
    cin >> name;
    cout << endl;
    
    cout << "Input Status (marriage status): " << endl;
    cin >> status;
    cout << endl;
    
    cout << "Input gross wages (adjusted Gross Income): " << endl;
    cin >> gross;
    cout << endl;
    
    cout << "Input tax WithHeld: " << endl;
    cin >> taxHeld;
    cout << endl;

    
    if(status == "single"){
        gross = gross - 3900;
        gross = gross - 6100;
    }
    else if(status == "married"){
        gross = gross - 3900*2;
        gross = gross - 6100*2;
    }
    
    if(gross = 0){
        owedTax = 0;
        calcTot = owedTax;
        
    }
    else if(gross >= 1){
        if(status == "single"){
            if(gross <= 8925){
                owedTax = .1;
                calcTot = owedTax * gross;
            }
            else if(gross >= 8926 && gross <= 36250){
                owedTax = .15;
                calcTot = 892.50 + owedTax* 8925;
            }
            else if(gross >= 36251 && gross <= 87850){
                owedTax = .25;
                calcTot = 4991.25 + owedTax * 36250;
            }
            else if (gross >= 87851){
                owedTax = .28;
                calcTot = 17891.25 + owedTax * 87850;
            }
        } //if user type single as their status, will go this route of if/else
        
        else if(status == "married"){
            if(gross <= 17850){
                owedTax = .1; //percentage and repeated down
                calcTot = owedTax * gross; // the multiplications and math.
            } 
            else if(gross >= 17851 && gross <= 72500){
                owedTax = .15;
                calcTot = 1785 + owedTax * 17850;
            }
            else if(gross >= 72501){
                owedTax = .28;
                calcTot = 9982.50 + owedTax * 72500;
            }
        } // if user type married as their status, will go this route.
    }
    
    
    if(owedTax > taxHeld){
        cout << "Name: " << name <<endl;
        cout << "Total Gross Adjusted Income: " << calcTot << endl;
        cout << "Total tax owed: " << owedTax << endl;
    } 
    else {
        cout << "Name: " << name <<endl;
        cout << "Total Gross Adjusted Income: " << calcTot << endl;
        cout << "Total tax owed: " << owedTax << endl;
        cout << name << " is entitled to a refund." << endl;
    }


}

