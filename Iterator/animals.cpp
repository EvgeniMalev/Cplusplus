#include <iostream>
#include <vector>
#include <string>

int main() {

    std::vector<std::string> animals = {"Cat", "Dog", "Elephant", "Giraffe", "Lion"};


    std::vector<std::string>::iterator it;
    for (it = animals.begin(); it != animals.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}
