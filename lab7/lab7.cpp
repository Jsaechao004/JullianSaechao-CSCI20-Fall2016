//Jullian Saechao
//lab 7 Song
#include <iostream>
#include <string>
using namespace std;

void chorus(string num, string animal)
{
    
    cout << num << " little " << animal << " jumping on the bed, " << endl;
    cout << "One fell off and bumped his head, " << endl;
    cout << "mama called the doctor," << endl;
    cout << "and the doctor said, " << endl;
    cout << "'No more monkeys jumping off the bed'" << endl;
    
    
}
    

int main(){
    chorus("5", "monkeys");
    
    cout << endl;
    
    chorus("10", "wolves");
}