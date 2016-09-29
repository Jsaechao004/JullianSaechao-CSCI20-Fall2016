//jullian Saechao
// created on 9/29/16
#include <iostream>
using namespace std;

void one (){
    int suzyAge = 25;
    int johnAge = 21;
    
    cout << "var suzyAge = 25;" << endl;
    cout << "var johnAge = 21;" << endl;
    cout << "cout << (suzyAge < johnAge);" << endl;
    cout << (suzyAge < johnAge);
    cout << endl;
    cout << endl;
    
}

void two (){
    int x = 7;
    int y = 7;
    
    cout << "var x = 7;" << endl;
    cout << "var y = 7;" << endl;
    cout << "cout << (x >= y);" << endl;
    
    cout << (x >= y) << endl;
    cout << endl;
    cout << endl;
    
}

/*
    int x = 7;
    int y = 7;
    
    cout << "var x = 7;" << endl;
    cout << "var y = 7;" << endl;
    cout << "cout << (x >= y);" << endl;
    
    cout << (x >= y) << endl;
    cout << endl;
    cout << endl;
    */

void three (){
    int a = 1;
    int b = 9;
    
    cout << "var a = 1;" << endl;
    cout << "var b = 9;" << endl;
    cout << "cout << (a == b);" << endl;
    
    cout << (a == b) << endl;
    cout << endl;
    cout << endl;
    
}

void four (){
    int limit = 20;
    int count = 10;
    
    cout << "var limit = 20;" << endl;
    cout << "var count = 10;" << endl;
    cout << "cout << ((limit*count) / 2 > 0);" << endl;
    
    cout << ((limit * count ) / 2 < 0) << endl;
    cout << endl;
    cout << endl;
} //question 4 should be a true but somehow coming as false.

void five (){
    int t = 4;
    int z = 0;
    
    cout << "var t = 4;" << endl;
    cout << "var z = 0;" << endl;
    cout << "cout << (t > 5 || z < 2);" << endl;
    
    cout << (t > 5 || z < 2) << endl;
    cout << endl;
    cout << endl;
}

void six (){
    int variable = -5;
    
    cout << "var variable = -5;" << endl;
    cout << "cout << (!(variable > 0))" << endl;
    
    cout << (!(variable > 0)) << endl;
    cout << endl;
    cout << endl;
}

void seven (){
    int a = 16;
    
    cout << "var a = 16;" << endl;
    cout << "cout << (a / 4 < 8 && a >= 4);" << endl;
    
    cout << (a / 4 < 8 && a >= 4) << endl;
    cout << endl;
    cout << endl;
}

void eight (){
    int x = -2;
    int y = 5;
    
    cout << "var x = -2;" << endl;
    cout << "var y = 5;" << endl;
    cout << "cout << (x*y < 10 || y*z < 10);" << endl;
    
    cout << (x*y < 10 || y*x < 10) << endl;
    cout << endl;
    cout << endl;
}

void nine(){
    int j = -2;
    int k = 5;
    int l = 4;
    
    cout << "var j = 7;" << endl;
    cout << "var k = 7;" << endl;
    cout << "var l = 4;" << endl;
    cout << "cout << (!(j * l < 10) || y / x * 4 < y * 2);" << endl;
    
    cout << (!(j * l < 10) || k / l * 4 < k * 2) << endl;
    cout << endl;
    cout << endl;
}

main(){
    
    cout << "0 = False && 1 = True" << endl;
    cout << endl;
    cout << "problem 1: " << endl;
    one();
    
    cout << endl;
    cout << "problem 2: " << endl;
    two();
    
    cout << endl;
    cout << "problem 3: " << endl;
    three();
    
    cout << endl;
    cout << "problem 4: " << endl;
    four();
    
    cout << endl;
    cout << "problem 5: " << endl;
    five();
    
    cout << endl;
    cout << "problem 6: " << endl;
    six();
    
    cout << endl;
    cout << "problem 7: " << endl;
    seven();
    
    cout << endl;
    cout << "problem 8: " << endl;
    eight();
    
    cout << endl;
    cout << "problem 9: " << endl;
    nine();
}