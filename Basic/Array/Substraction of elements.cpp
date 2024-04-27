/* A program that extracts the members of two arrays
*/

#include <iostream>
using namespace std;

int main() {

  int numbers1[5] = {6, 12, 19, 40, 5};
  int numbers2[5] = {3, 15, 11, 25, 2};

  cout << "The numbers in array 1 are: ";
  for (int n : numbers1) {
    cout << n << "  ";
  }
  cout << "\n";

  cout << "The numbers in array 2 are: ";
  for (int m : numbers2) {
    cout << m << "  ";
  }
  cout << "\n";

  cout << "The subtraction of corresponding elements: ";
  for (int i = 0; i < 5; ++i) {
    cout << numbers1[i] - numbers2[i] << "  ";
  }
  cout << "\n";

  return 0;
}
