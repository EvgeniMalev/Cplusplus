/* The example had three objects and their five properties */

#include <iostream>
#include <string>
using namespace std;

class Building {
  public:
    string name;
    string address;
    int yearofconstruction;
    int floors;
    double length;
    double width;
    double height;    
};

int main() {
  Building firstbuilding;
  firstbuilding.name = "Han Hadzhi Nikoli";
  firstbuilding.address = "Georgi Sava Rakovski";
  firstbuilding.yearofconstruction = 1858;
  firstbuilding.floors = 4;
  firstbuilding.length = 25.6;
  firstbuilding.width = 20.6;
  firstbuilding.height  = 14.6; 
  
  Building secondbuilding;
  secondbuilding.name = "Stambolov han";
  secondbuilding.address = "Stafan Stambolov";
  secondbuilding.yearofconstruction = 1850;
  secondbuilding.floors = 3;
  secondbuilding.length = 12.6;
  secondbuilding.width = 8.2;
  secondbuilding.height  = 11.6;
  
  Building thirdbuilding;
  thirdbuilding.name = "Golyemya han";
  thirdbuilding.address = "Stafan Stambolov";
  thirdbuilding.yearofconstruction = 1850;
  thirdbuilding.floors = 3;
  thirdbuilding.length = 12.6;
  thirdbuilding.width = 8.2;
  thirdbuilding.height  = 11.6;

  cout << " The first building is "<< firstbuilding.name << " " << firstbuilding.address 
  << " " << firstbuilding.yearofconstruction << "\n";
  cout << " The second building is "<< secondbuilding.name << " " << secondbuilding.address 
  << " " << secondbuilding.yearofconstruction << "\n";
  cout << " The third building is "<< thirdbuilding.name << " with parameters " << thirdbuilding.length 
  << " " << thirdbuilding.height << "\n";
  return 0;
}
