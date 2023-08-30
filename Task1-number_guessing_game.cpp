#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    
    // to generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    
    int guess;
    
    while (true) {
        cout << "Guess the number between 1 and 100: ";
        cin >> guess;
        
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }
    
    return 0;
}
