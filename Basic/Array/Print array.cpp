#include <iostream>
using namespace std;

int main() {

  int numbers[10];

  cout << "Write ten numbers: " << endl;


  for (int i = 0; i < 10; ++i) {
    cin >> numbers[i];
  }

  cout << "You create an array with additional elements: ";

  for (int n = 0; n < 10; ++n) {
    cout << numbers[n + 2] << "  ";
  }

  return 0;
}
