// Print numbers in forward and reverse order using recursion

#include <iostream> 
using namespace std; 

void printN(int test) { 
    if (test < 1) { 
        return; 
    } else { 
        cout << test << " "; 
        printN(test - 1); 
        cout << test << " "; 
    } 
} 

int main() { 
    int test = 6; 
  
    cout << "Recursion: "; 
    printN(test); 
    cout << endl; 
  
    return 0; 
}
