//Jullian Saechao
//created on 10/21
//banking
#include <iostream>
#include <string>
using namespace std;

class bank {
public:
   void withdrawal(int cash);
   void deposit(int cash);
   void Print() const;
   bank();  //default contructor
   
private:
   int price; 
};

bank::bank() {  
   price = 0;  
   
   return;
} // default

void bank :: withdrawal(int cash) {
   price = cash;
   
   return;
}
void bank :: deposit(int cash) {
   price = cash;
   
   return;
}

void bank::Print() const {
   cout << "Total left: " << price << endl;
   
   return;
}

int main() {
   bank item1;  
   
   item1.deposit(100);
   item1.withdrawal(20);
   item1.Print();
   item1.withdrawal(60);
   item1.withdrawal(40);
   item1.Print();
   item1.deposit(73);
   item1.withdrawal(40);
   
   return 0;
}