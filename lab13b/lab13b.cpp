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
            for(minute = 60; minute >= 0 && minute < 179; ++minute ) {
                //minute = minute + 1;
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
            
            for(userStartTime = userStartTime; userStartTime >=0 && userStartTime < userEndTime; userStartTime = userStartTime + 15)   {
                //minute = minute + 15;
               
                cout << userStartTime << endl;
            }
            break;
           
        default:
        cout << "unknown" << endl;
        break;
            }
      
      

   }
