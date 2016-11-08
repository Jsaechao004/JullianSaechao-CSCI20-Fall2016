//jullian Saechao
//what animal are you
#include <iostream>
#include <string>
using namespace std;

int main() {
    char answer = '?';
    char answer2 = '?';
    char answer3 = '?';

    
    cout << "To answer type in Y for yes and N for no" << endl;
    cout << endl;
    cout << endl;
    cout << "Do you live on land?" << endl;
    cin >> answer;
    
    switch (answer) {
        case 'Y':
        cout << "are you big?" << endl;
        cin >> answer2;
             switch (answer2) {
                case 'Y':
                cout << "you are an elephant!" << endl;
                break;
                
                case 'N':
                cout << "are you fast?" << endl;
                cin >> answer3;
                    switch (answer3) {
                        case 'Y':
                        cout << "Then you are a cheetah!" << endl;
                        break;
                        
                        case 'N':
                        cout << "Then you are a sloth!" << endl;
                        break;
                        
                        default :
                        cout << "can not understand." << endl;
                        break;
                        
                    }
                break;
                
                default:
                cout << "can not understand." << endl;
                break;
            } 
        break;
        
        
        case 'N':
        cout << "Then you must live in a sea, are you big?" << endl;
        cin >> answer2;
            switch (answer2){
            case 'Y':
            cout << "do you eat others?" << endl;
            cin >> answer3;
                switch (answer3) {
                    case 'Y':
                    cout << "Then you are a shark, RAWR!" << endl;
                    break;
                    
                    case 'N':
                    cout << "Then you are a giant Whale!" << endl;
                    break;
                    
                    default:
                    cout << "Can not understand." << endl;
                    break;
                }
            break;
            
            case 'N':
            cout << "so you are a regular fish..." << endl;
            break;
            
            default:
            cout << "I can not understand." << endl;
            break;
        }
        break;
        
        
        default:
        cout << "can't understand." << endl;
        break;
    }
   }