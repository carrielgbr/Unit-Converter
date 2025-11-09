#include <iostream>
using namespace std;

void otherTypesVaribles() {

    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false) 

    cout << "Dentro da função 'otherTypesVariable'" << endl;
    cout << "myNum: " << myNum << endl;
    cout << "myFloatNum: " << myFloatNum << endl;
    cout << "myLetter: " << myLetter << endl;
    cout << "myText: " << myText << endl;
    cout << "myBoolean: " << myBoolean << endl;
}

int main(){

    int myNum = 15; //declaring varible 15
    myNum = 10; // now variable is 10 
    cout << myNum; //Output 10

    otherTypesVaribles();

    return 0;
}