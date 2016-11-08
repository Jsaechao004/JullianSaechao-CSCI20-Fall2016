//jullian Saechao
//looping
#include <iostream>
#include <string>
using namespace std;

int main(){ 
    char answer;
    int userStartTime;
    int userEndTime;
    int interval = 0;
    int minute = 0; 
    
    cout << "Which program ould you like to try?" << endl;
    cout << "Enter the letter 'E' for the example" << endl;
    cout << "Enter the letter 'U' for your own input." << endl;
    cin >> answer;
    switch(answer){
        case 'E':
            while (minute >= 0 && minute < 179 ) {
                minute = minute + 1;
                cout << minute << endl;
            }
        break;
        
        case 'U':
            cout << "Enter your start time:" << endl;
            cin >> userStartTime;
            cout << endl;
            cout << "Enter your end time: " << endl;
            cin >> userEndTime;
            cout << endl;
            
            while(userStartTime >= minute && userEndTime < 720)   {
                minute = minute + 15;
                cout << minute << endl;
            }
            break;
           
        default:
        cout << "unknown" << endl;
        break;
            }
      
      

   }
