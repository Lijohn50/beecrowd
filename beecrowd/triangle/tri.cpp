#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
 
double a,b,c;
cin >> a >> b >> c;

if (a + b > c && b + c > a && a + c > b)
    cout << "Perimetro = " << fixed << setprecision(1) << a + b + c << '\n';

else
    cout << "Area = " << fixed << setprecision(1) << (a + b) * c / 2.0 << '\n';
    return 0;
}