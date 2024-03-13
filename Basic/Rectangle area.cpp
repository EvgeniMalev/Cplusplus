#include <iostream>
 
int main()
{
    float a, b, area;
 
    std::cout << "Enter the a of the rectangle : ";
    std::cin >> a;
    std::cout << "Enter the b of the rectangle : ";
    std::cin >> b;
    area = a * b;
    std::cout << "The area of the rectangle is: "
              << " is " << area;
}
