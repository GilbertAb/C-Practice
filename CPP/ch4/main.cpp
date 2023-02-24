#include <iomanip>
#include <iostream>

int main(){

  int miles = 0;
  unsigned int total_miles = 0;
  unsigned int total_gallons = 0;
  
  while (miles != -1) {
    unsigned int gallons = 0;
   
    std::cout<< std::setprecision(6) << std::fixed;

    std::cout << "Enter miles driven (-1 to quit): " << std::endl;
    std::cin >> miles;

    if (miles != -1) {
      total_miles += miles;
      std::cout << "Enter gallons used: " << std::endl;
      std::cin >> gallons;
      total_gallons += gallons;
      float mpg = static_cast<double>(miles) / gallons;
      std::cout << "MPG this trip: " << mpg << std::endl;
      std::cout << "Total MPG: " << static_cast<double>(total_miles) / total_gallons << std::endl;
    }
  }

}