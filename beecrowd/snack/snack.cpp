#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main()
{
 
 int x ,y;

 cin >> x >> y;
 
 if (x == 1)
    cout << "Total: R$ " << fixed << setprecision(2) << y * 4.00 << '\n';
 else if (x == 2)
    cout << "Total: R$ " << fixed << setprecision(2) << y * 4.50 << '\n';
 else if (x == 3)
    cout << "Total: R$ " << fixed << setprecision(2) << y * 5.00 << '\n';
 else if (x == 4)
    cout << "Total: R$ " << fixed << setprecision(2) << y * 2.00 << '\n';
 else if (x == 5)
    cout << "Total: R$ " << fixed << setprecision(2) << y * 1.50 << '\n';
return 0;
}