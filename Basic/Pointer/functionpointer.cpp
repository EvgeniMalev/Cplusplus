#include <iostream>

void sayHello() {
    std::cout << "Pointer!" << std::endl;
}

int main() {
    void (*funcPtr)() = Pointer;

    funcPtr();

    return 0;
}
