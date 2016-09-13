// Jullian Saechao
// created on 9/6/2016

#include <iostream>
#include <string>
using namespace std;

int main(){
    string userName;
    string userName2;
    string userNoun;
    string userNoun2;
    string userVerb;
    string userVerb2;
    string userPlace;
    string userFood;
    string myName;
    string myAge;
    string userBad;
    
    cout << "Enter a name for yourself: " << endl;
    cin >> myName;
    
    cout << "Enter your age: " << endl;
    cin >> myAge;
    
    cout << "Enter a Name: " << endl;
    cin >> userName;
    
    cout << "Enter another Name: " << endl;
    cin >> userName2;
    
    cout << "Enter a Verb: " << endl;
    cin >> userVerb;
    
    cout << "Enter another Verb: " << endl;
    cin >> userVerb2;
    
    cout << "Enter a Place: "<< endl;
    cin >> userPlace;
    
    cout << "Enter a food: " << endl;
    cin >> userFood;
    
    cout << "Finish this sentence: I could not make it to work because I got _____." << endl;
    cin >> userBad;
    
    cout << "My name is " << myName << " and I am " << myAge << " years old. " << endl;;
    cout << "I heard a funny story that happened to my friend, " << userName << ". " << endl;
    cout << "One day, " << userName << " and " << userName2 << " went out to " << userPlace << "." << endl;
    cout << " As they were "<< userVerb << ", " << userName << " saw a piece of " << userFood;
    cout << " and decided to " << userVerb2 << " it. " << endl;
    cout << "Because he " << userVerb2 << " it, he got " << userBad << ", who knew that " << userFood << " was bad." ;
    
}

//One day ____ and ___ went out to ____. As they were ___, _____ see a _____ and decided to _____ it.
//Because he _____ it, he got bad luck for the rest of the day, who knew
//as the two were walking down a street, username, 
    