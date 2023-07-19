#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Get current time, convert time(0) to integer - - unsigned
    // Without, rand() will return the same value
    srand(static_cast<unsigned>(time(0)));

    int random = (rand() % 10) + 1;

    cout << "Test complie " << random << endl;
}