#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    srand(time(0));

    while (true) {
        int touch = rand() % 2; // 0 = not touched, 1 = touched

        if (touch) {
            cout << "Touch detected!" << endl;
        } else {
            cout << "No touch." << endl;
        }

        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
