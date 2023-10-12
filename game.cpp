#include<iostream> // this library use to std::cout <<
using namespace std; // this use std function to default on the all code.

int main() {
    cout << "***********************" << endl;
    cout << "* Welcome to the Game *" << endl;
    cout << "***********************" << endl;

    const int SECRET_NUMBER = 42;
    bool not_right = true;
    int attempts = 0;

    double points = 1000.0; //point for person

    while(not_right){
        int kick;
        attempts++;

        cout << "Attempt: "<< attempts << endl; // number attempt
        cout << "Choose one number: ";
        cin >> kick; // input values of keyboard
        cout << "The value of kick is "<< kick << endl;

        bool win = kick == SECRET_NUMBER;
        bool bigger_than_secretnumber = kick > SECRET_NUMBER;

        double points_threw_out = abs(kick - SECRET_NUMBER)/2.0; // lost points

        points = points - points_threw_out; // I take your points.

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
    cout.precision(2);
    cout << fixed;
    cout << "Your score are: " << points << endl;
    cout << "End Game!" << endl;
}
