#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "Welcome to the random number guessing game" << endl;
    cout << "Take a gues 1 - 10!" << flush;

    // Get current time, convert time(0) to integer - - unsigned
    // Without, rand() will return the same value
    srand(static_cast<unsigned>(time(0)));
    int random = (rand() % 10) + 1;
    // Inital guess
    int inital_guess;

    cin >> inital_guess;

    bool guess_staus = 0;

    if (inital_guess == random || guess_staus == 1)
    {
        cout << "Good Job, you are correct!" << endl;
        guess_staus = 1;
    }
    else
    {

        do
        {
            cout << "Incorrect, try again! > " << flush;
            int guess_two;
            cin >> guess_two;

            if (guess_two == random)
            {
                guess_staus = 1;
            }

        } while (guess_staus == 0);
        {
            cout << "Good Job, you are correct!" << endl;
        };
    }
}