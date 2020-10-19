# include <iostream>
# include <iomanip>
using namespace std;
int  main(){
    bool k;
    bool l;
    bool m;
    bool n;
bool x;

cout<<"Hello! Please, enter 1 (true) or 0 (false) soo we can count the next example";
cout<< endl;
cout<< "k - ";
cin >> k;
cout<< "l - ";
cin >> l;
cout<< "m - ";
cin >> m;
cout<< "n - ";
cin >> n;
x = n || (m^k) && !l;

cout<< "n V (m+k) ^ l! = "<< boolalpha << x;
cout<< endl;

    return 0;
}
