
#include <iostream>
#include <cmath>
int main (){
   unsigned int a;
   float x = 0;
    std::cout<< "Please, enter a from 0 to 2^32-1 : "<< std::endl;
    std::cin >> a;
x = 5* abs(a)- sqrt(3*a - 1);
std::cout << "5|a|-sqrt(3a-1) = "<< std::showpos<<x<<std::endl;
    return 0;
}
