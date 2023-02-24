#include <iostream>

template <typename T>
T minimum(T num1, T num2) {
    return num1 < num2 ? num1 : num2;
}
template <typename T>
T maximum(T num1, T num2) {
    return num1 > num2 ? num1 : num2;
}

int main() {
    int integer1= 0;
    int integer2= 0;
    std::cout << "Enter two integers:\n ";
    std::cin >> integer1 >> integer2;
    std::cout << "Minimum: " << minimum(integer1,integer2) << std::endl; 
    std::cout << "Maximum: " << maximum(integer1,integer2) << std::endl;
    
    float fp1 = 0.0;
    float fp2 = 0.0;
    std::cout << "Enter two floating point numbers:\n ";
    std::cin >> fp1 >> fp2;
    std::cout << "Minimum: " << minimum(fp1,fp2) << std::endl; 
    std::cout << "Maximum: " << maximum(fp1,fp2) << std::endl;

    char c1 = ' ';
    char c2 = ' ';
    std::cout << "Enter two characters:\n ";
    std::cin >> c1 >> c2;
    std::cout << "Minimum: " << minimum(c1,c2) << std::endl; 
    std::cout << "Maximum: " << maximum(c1,c2) << std::endl;

}
