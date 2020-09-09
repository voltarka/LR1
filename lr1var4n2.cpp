#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
    unsigned int a;
cout<< "Hello! Please, enter a - ";
cin >> a;
a= 5* abs(float(a))- sqrt(3*a - 1);
cout << "5|a|-sqrt(3a-1) = "<< showpos<<a<<"     ";


    return 0;

}
