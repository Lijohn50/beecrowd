#include <iostream>
 
using namespace std;
 
int main() {
 
int x,y,z, a, b, c;
cin >> x >> y >> z;

a = max(max(x, y), z);
b = min(min(x, y), z);

if (x != a && x != b)
    c = x;
else if (y != a && y != b)
    c = y;
else
    c = z;
cout << b << '\n' << c << '\n' << a << '\n' << '\n';

cout << x << '\n' << y << '\n' << z << '\n';
    return 0;
}