#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));

    int random_num = rand() % 11;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 10. Try to guess it." << endl;

    int attempts = 0;
    int num = -1;

    while (num != random_num) {
        cout << "Enter your guess: ";
        cin >> num;
        attempts++;

        if (num < random_num) {
            cout << "Too low! Try again." << endl;
        } else if (num > random_num) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number " << random_num << " in " << attempts << " attempts." << endl;
        }
    }

    return 0;
}
