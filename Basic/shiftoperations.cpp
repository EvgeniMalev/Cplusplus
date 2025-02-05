#include <iostream>
#include <bitset>

void displayShift(const std::string& label, int value) {
    std::cout << label << " (Decimal: " << value << ", Binary: " << std::bitset<8>(value) << ")\n";
}

int main() {
    int num = 0b10110011; 
    displayShift("Original", num);
    
    int logicalLeft = num << 1;
    displayShift("Logical Shift Left", logicalLeft);
    
    unsigned int unsignedNum = static_cast<unsigned int>(num);
    unsigned int logicalRight = unsignedNum >> 1;
    displayShift("Logical Shift Right", logicalRight);
    
    int arithmeticRight = num >> 1;
    displayShift("Arithmetic Shift Right", arithmeticRight);
    
    return 0;
}
