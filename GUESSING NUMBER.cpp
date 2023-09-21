#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 100;
    int tries = 0;
    int guess_number;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess_number;

        if (guess_number > num) {
            cout << "Your guess is too high. Try again." << endl;
        } else if (guess_number < num) {
            cout << "Your guess is too low. Try again." << endl;
        }

        tries++;
    } while (guess_number != num);

    cout << "Congratulations! You guessed the number " << num << " correctly in " << tries << " tries." << endl;

    return 0;
}

