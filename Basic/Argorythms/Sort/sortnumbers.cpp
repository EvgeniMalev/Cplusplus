#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {42, 7, 19, 88, 3, 27, 56};

    std::sort(numbers.begin(), numbers.end());

    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
