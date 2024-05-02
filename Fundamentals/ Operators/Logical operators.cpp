#include <iostream>
using namespace std;

int main() {
  
   unsigned int a = 50;
   unsigned int b = 4; 
   unsigned int c = 108;
   int d = 10;

   d = a & b & c;
   cout << "Result : " << d << endl;

   d = a | b | c;
   cout << "Result : " << d << endl;

   d = a & b | c;
   cout << "Result : " << d << endl;

   d = a | b & c;
   cout << "Result : " << d << endl;

   return 0;

}
