#include <iostream>
 
int main()
{
    float bgn, rsd;
 
    std::cout << "Enter the amount of the Bulgarian currency : ";
    std::cin >> bgn;
    rsd = bgn * 59.92;
    std::cout << "You had: "
              << " is " << rsd;
}
