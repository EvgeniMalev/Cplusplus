#include <iostream>
#include <cmath>      
using namespace std;

#define CLS         (cout << "\033[2J")
#define LOCATE(z,s) (cout <<"\033["<<(z)<<';'<<(s)<<'H')
#define DOT(x,y)    (LOCATE(y,x) << '*')

#define PI  3.1416
#define Mx  30  
#define My  15   
#define A   25   
#define B   10   

int main()
{
    int x, y;  
    CLS;
    
    
    for(double t = 0.0; t <= 2 * PI; t += 0.03)
    {
        x = static_cast<int>(A * cos(t) + 0.5);
        y = static_cast<int>(B * sin(t) + 0.5);
        
        
        DOT(x + Mx, y + My);
        DOT(x + Mx, -y + My);
        DOT(-x + Mx, y + My);
        DOT(-x + Mx, -y + My);
    }
    
   
    DOT(Mx + A, My); 
    DOT(Mx, My + B); 

    LOCATE(24,0);  
    return 0;
}
