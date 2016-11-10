#include <iostream>
using namespace std;



int main() {        // Read a character in 
    char ch;        
    cout << "Please enter a character: ";       
    cin  >> ch;         // check -- is it a letter??        
    if (ch >= 'A') {            
        if (ch <= 'Z') {               
            cout << "Yes, that is a uppercase letter." << endl;           
            }        
    }        
    if (ch >= 'a') {            
        if (ch <= 'z') {               
            cout << "Yes, that is a lowercase letter" << endl;           
            }        
    }        
    else {           
        cout << "Not a letter" << endl;       
        }          
        return 0; 
}


/*   so to fix this program, i had tested the others, in which the "Yes, that is a uppercase letter" and the "Not a letter".  Since the program is running and the other else and if are working, i
figured that it must be a small mistake such as a >,<, ||, &&, else if.  So i look only at the lowercase part and changed a few things and run it again and test again. Then i deleted the else
on the else if part, and run it, it now output "Yes, that is a lowercase letter."    */