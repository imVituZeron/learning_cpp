#include<iostream> // this library use to std::cout <<
using namespace std; // this use std function to default on the all code.

int main() {
    cout << "***********************" << endl;
    cout << "* Welcome to the Game *" << endl;
    cout << "***********************" << endl;

    const int SECRET_NUMBER = 42;
    int kick;
    
    cout << "Choose one number: ";
    cin >> kick; // input values of keyboard
    cout << "The value of kick is "<< kick << endl;

    bool win = kick == SECRET_NUMBER;
    bool bigger_than_secretnumber = kick > SECRET_NUMBER;

    if (win){
        cout << "Congratulations!, You got the secret number right!" << endl;
    } else if (bigger_than_secretnumber) {
        cout << "Your number is bigger than secret number!" << endl;
    } else {
        cout << "Your number is smaller than secret number!" << endl;
    }
}
