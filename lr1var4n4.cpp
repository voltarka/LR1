#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
     unsigned int b;
    int s;
   cout<< "Здравствуйте! Введите, пожалуйста, необходимую степень двойки от 0 до 7"<< endl;
   cin>> b;
   cout<< "Результат в десятичной сис-ме счисления"<< endl;
   cout<< "2^"<<b<<"="<< pow(2,b)<<endl;
   cout<< "Результат в восьмеричной сис-ме счисления"<< endl;
   s = pow(2,b);
   cout<< "2^"<<b<<"="<< std::oct << s << endl;
    return 0;
}
