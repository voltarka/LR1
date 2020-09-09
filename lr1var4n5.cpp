#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   unsigned short int c;
   unsigned short int d;
   unsigned short int e;
   unsigned short int f;
   int x ;
   cout<< "Здравствуйте! Введите логические значения следующих переменных:"<< endl;
   cout<< "c - ";
   cin >> c;
   cout<< "d - ";
   cin >> d;
   cout<< "e - ";
   cin >> e;
   cout<< "f - ";
   cin >> f;
   x = (c&&e)|| !d ^ f;
   cout<< "(c V e) ^ !d+f ="<< showbase<< hex<< setw(2) << x<< endl;
    return 0;
}
