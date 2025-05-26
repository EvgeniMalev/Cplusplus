#include <iostream>  
#include <string>    


void greetUser();
int addNumbers(int a, int b);

int main() {
    std::cout << "Welcome to the C++ Program Structure Example!\n";

    greetUser();

    int sum = addNumbers(5, 10);
    std::cout << "Sum: " << sum << std::endl;

    return 0;  
}


void greetUser() {
    std::cout << "Hello, user!\n";
}

int addNumbers(int a, int b) {
    return a + b;
}
