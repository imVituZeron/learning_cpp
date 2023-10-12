#include<iostream> // this library use to std::cout <<
using namespace std; // this use std function to default on the all code.

int main() {
    cout << "***********************" << endl;
    cout << "* Welcome to the Game *" << endl;
    cout << "***********************" << endl;

    const int SECRET_NUMBER = 42;
    bool not_right = true;
    int attempts = 0;

    while(not_right){
        int kick;
        attempts++;

        cout << "Attempt: "<< attempts << endl; // number attempt
        cout << "Choose one number: ";
        cin >> kick; // input values of keyboard
        cout << "The value of kick is "<< kick << endl;

        bool win = kick == SECRET_NUMBER;
        bool bigger_than_secretnumber = kick > SECRET_NUMBER;

        if (win){
            cout << "Congratulations!, You got the secret number right!" << endl;
            not_right = false;
        } else if (bigger_than_secretnumber) {
            cout << "Your number is bigger than secret number!" << endl;
        } else {
            cout << "Your number is smaller than secret number!" << endl;
        }
    }
    cout << "You just right secret number " << attempts << " attempts" << endl;
    cout << "End Game!" << endl;
}
