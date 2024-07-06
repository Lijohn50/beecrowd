#include <iostream>
 
using namespace std;
 
int main() {
 
 int arr[7] = {100,50,20,10,5,2,1}, n;
 cin >> n;

 cout << n << '\n';
 for (int i = 0; i < 7; i++)
    {
    int note;
    note = n / arr[i];
    cout << note << " nota(s) de R$ " << arr[i] << ",00" << '\n';
    n -= note * arr[i];
    }

    return 0;
}