#include <iostream>
using namespace std;

int main() {
  
   int a = 90;
   int b = 45; 
   int c = 18;
   int d = 6;
   int e = 1102;

   e = (a + b) - c;
   cout << "Result : " << e << endl;

   e = ((a + b) * c) + d;
   cout << "Result : " << e << endl;

   e = ((a + b) * c) + (a / c);
   cout << "Result : " << e << endl;

   return 0;
}
