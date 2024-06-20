#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString = "Vietnam";
  string String = "Fiat";
  myString[2] = 'a';
  String[2] = ' ';
    String[1] = 'o';
  cout << myString;
    cout << String;
  return 0;
}
