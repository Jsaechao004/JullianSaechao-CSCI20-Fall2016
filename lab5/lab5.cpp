
#include <iostream>
#include <string>
using namespace std;


struct monster {
    string Head;
    string Eyes;
    string Ears;
    string Mouth;
    string Nose;
    string Name;
};


int main(){
    
    monster Zombus;
    monster oneMonster;
    
    Zombus.Name = "Yakitori";
    Zombus.Head = "Zombus";
    Zombus.Eyes = "Vegitas";
    Zombus.Mouth = "Spritem";
    Zombus.Ears = "Wackus";
    Zombus.Nose = "Vegitas";
    
    
    oneMonster.Name = "MonsterOne";
    oneMonster.Head = "Zombus";
    oneMonster.Eyes = "Spritem";
    oneMonster.Ears = "Vegitas";
    oneMonster.Nose = "None";
    oneMonster.Mouth = "Wackus";
    
    
    cout << "   Monster:" << endl; 
    cout << "Name: " << Zombus.Name << endl;
    cout << "Head: " << Zombus.Head << endl;
    cout << "Eyes: " << Zombus.Eyes << endl;
    cout << "Mouth: " << Zombus.Mouth << endl;
    cout << "Ears: " << Zombus.Ears << endl;
    cout << "Nose: " << Zombus.Nose << endl;
    
    cout << endl;
    cout << endl;
    
    cout << oneMonster.Name << ": ";
    cout << oneMonster.Head << ", ";
    cout << oneMonster.Eyes << ", ";
    cout << oneMonster.Ears << ", ";
    cout << oneMonster.Nose << ", ";
    cout << oneMonster.Mouth;
    
    cout << endl;
    cout << endl;
    
    monster User;
    
    User.Name;
    User.Eyes;
    
    cout << "Enter a name: " << endl;
    cin >> User.Name;
    cout << "Enter Head type: " << endl;
    cin >> User.Head;
    cout << "Enter Eyes type: " << endl;
    cin >> User.Eyes;
    cout << "Enter Ears type: " << endl;
    cin >> User.Ears;
    cout << "Enter Mouth type: " << endl;
    cin >> User.Mouth;
    cout << "Enter Nose type: " << endl;
    cin >> User.Nose; 
    
    
    cout << "   Monster:" << endl; 
    cout << "Name: " << User.Name << endl;
    cout << "Head: " << User.Head << endl;
    cout << "Eyes: " << User.Eyes << endl;
    cout << "Mouth: " << User.Mouth << endl;
    cout << "Ears: " << User.Ears << endl;
    cout << "Nose: " << User.Nose << endl;
    
    return 0;
}