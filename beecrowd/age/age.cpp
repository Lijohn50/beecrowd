#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,y,m,d,x;

    cin >> a;

    y = a / 365;
    m = (a - y * 365) / 30;
    d = a - ((365*y) + (30 * m));

    cout << y << " ano(s)" << '\n';
    cout << m << " mes(es)" << '\n';
    cout << d << " dia(s)" << '\n';
    return 0;
}