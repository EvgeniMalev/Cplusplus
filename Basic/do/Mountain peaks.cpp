#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int n;
    float sum_peaks = 0.0;
    float s_aritm_peaks = 0.0;
    int numpeaks = 0;
    int peak;

    do {
        cout << "Enter the number of mountain peaks (maximum 10): ";
        cin >> n;
    } while (n < 1 || n > 10);

    for (int i = 0; i < n; i++) {
        do {
            cout << "Enter height of peak " << i + 1 << " in meters (between 100 and 550): ";
            cin >> peak;
        } while (peak < 100 || peak > 550);

        if (peak >= 100 && peak <= 550) {
            cout << "Peak " << i + 1 << ": " << peak << " meters" << endl;
            sum_peaks += peak;
            numpeaks++;
        }
    }

    if (numpeaks > 0) {
        s_aritm_peaks = sum_peaks / numpeaks;
        cout << "Average height of peaks between 100 and 550 meters: " << s_aritm_peaks << " meters" << endl;
    } else {
        cout << "No peaks between 100 and 550 meters found." << endl;
    }

    return 0;
}
