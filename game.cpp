#include<iostream> // this library use to std::cout <<
using namespace std; // this use std function to default on the all code.

int main() {
    cout << "***********************" << endl;
    cout << "* Welcome to the Game *" << endl;
    cout << "***********************" << endl;

    cout << "Choose your difficulty level: " << endl;
    cout << "Easy (E), Middle (M), Hard (H): ";
    char level;
    cin >> level;

    // variable and IF condition that to fill attempt_number with number;
    int attempt_number; 
    if (level == 'E') {
        attempt_number = 20;
    } else if (level == 'M') {
        attempt_number = 10;
    } else {
        attempt_number = 5;
    }

    const int SECRET_NUMBER = 42;
    bool not_right = true;
    int attempts = 0;

    double points = 1000.0; //point for person

    for (attempts = 1;attempts <= attempt_number;attempts++) {
        int kick;

        cout << "Attempt: "<< attempts << endl; // number attempt
        cout << "Choose one number: ";
        cin >> kick; // input values of keyboard
        cout << "The value of kick is "<< kick << endl;

        bool win = kick == SECRET_NUMBER;
        bool bigger_than_secretnumber = kick > SECRET_NUMBER;

        double points_threw_out = abs(kick - SECRET_NUMBER)/2.0; // lost points

        points = points - points_threw_out; // I take your points.

        if (win){
            cout << "==> Congratulations!, You got the secret number right!" << endl;
            not_right = false;
            break;
        } else if (bigger_than_secretnumber) {
            cout << "==> Your number is bigger than secret number!" << endl;
        } else {
            cout << "==> Your number is smaller than secret number!" << endl;
        }
    }

    // final message!
    cout << "End Game!" << endl;
    if (not_right) {
        cout << "==> You lost, try again!" << endl;
    } else {
        cout << "==> You just right secret number " << attempts << " attempts" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "==> Your score are: " << points << endl;
    }
}
