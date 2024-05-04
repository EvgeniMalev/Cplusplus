/* C++ simple program that inputs an array and divide every element to and integer n,
that is introduced by the user*/

#include <iostream>
using namespace std;

int main() {
  int arr[100]; 
  int n;

  cout << "Enter the size of the array: ";
  int size;
  cin >> size;

  cout << "Enter " << size << " numbers for the array: ";
  for (int i = 0; i < size; i++) {
      cin >> arr[i];
  }

  cout << "Elements of the array: ";
  cin >> n;

  cout << "The elements are divided by: " << n << "" << endl;
  for (int i = 0; i < size; i++) {
       arr[i] /= n;
    cout << arr[i] << endl;
  }

  return 0;
}
