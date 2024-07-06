#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 int x, y;
  double fuel;
 cin >> x >> y;

 fuel = (x*y) / 12.0;

 cout << fixed << setprecision(3) << fuel << '\n';

    return 0;
}