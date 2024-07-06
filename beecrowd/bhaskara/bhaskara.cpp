#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    
    cin >> a >> b >> c;

    double discriminant = pow(b, 2) - 4 * a * c;

    if (a == 0 || discriminant < 0) {
        cout << "Impossivel calcular" << endl;
    } else {
  
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        
        cout << "R1 = " << fixed << setprecision(5) << x1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << x2 << endl;
    }

    return 0;
}
