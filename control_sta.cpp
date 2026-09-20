#include<iostream>
using namespace std;

int main() {

    enum Signal {
        RED = 1,
        YELLOW = 2,
        GREEN = 3
    };

    int choice;

    cout << "Enter signal: ";
    cin >> choice;

    switch(choice) {

        case RED:
            cout << "Stop!!!!!";
            break;

        case YELLOW:
            cout << "Get Ready";
            break;

        case GREEN:
            cout << "Go";
            break;

        default:
            cout << "Invalid signal";
    }

    return 0;
}