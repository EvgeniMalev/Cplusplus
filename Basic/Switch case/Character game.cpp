#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    char choice;

    do {
        cout << "Enter a string with minimum 7 characters: ";
        cin >> input;
    } while (input.length() < 7);
    do {
        cout << "\nMenu:\n";
        cout << "1. Remove the second character\n";
        cout << "2. Remove 'e' characters\n";
        cout << "3. Count the characters in the string\n";
        cout << "4. Copy and paste 'b' or 'r' to the next position\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case '1':
                if (input.length() >= 2)
                    input.erase(1, 1); // Remove the second character of the String
                else
                    cout << "String is too short to remove the second character.\n"; // Comment
                cout << input << endl;  // Print the input
                break;
            case '2':
                for (size_t i = 0; i < input.length(); i++) {
                    if (input[i] == 'e')
                        input.erase(i, 1); // Remove 'e' characters from the String
                }
                cout << "String after removing 'e' characters: " << input << endl;
                break;
            case '3':
                cout << "Number of characters in the string: " << input.length() << endl;
                break;
            case '4':
                for (size_t i = 0; i < input.length(); i++) {
                    if (input[i] == 'b' || input[i] == 'r') {
                        input.insert(i + 1, 1, input[i]); // Insert 'b' or 'r' to the next position
                        i++; // Move to the next position
                    }
                }
                cout << "String after copying and pasting 'b' or 'r': " << input << endl;
                break;
            case '0':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != '0');

    return 0;
}
