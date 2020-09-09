#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
    double x;
cout<< "Hello! Please, enter x - ";
cin >> x;
x = pow(x,5) + 3 * pow(x,3) -4;
cout << "x^5 + 3x^3 - 4 = "<<fixed<<setprecision(3)<< x << "    ";

    return 0;

}
