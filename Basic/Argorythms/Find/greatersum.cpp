#include <iostream>
#include <vector>
#include <algorithm>


bool condition(int num) {
    return num > 10;  
}

int main() {
    std::vector<int> numbers = {1, 3, 7, 12, 5, 18};
    
   
    auto it = std::find_if(numbers.begin(), numbers.end(), condition);
    
    if (it != numbers.end()) {
        std::cout << "First element satisfying the condition: " << *it << std::endl;
    } else {
        std::cout << "No element satisfies the condition." << std::endl;
    }
    
    return 0;
}
