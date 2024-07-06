#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double amount;
    cin >> amount;
    
    int arr[6] = {100, 50, 20, 10, 5, 2};

    cout << "NOTAS:" << '\n';
    for (int i = 0; i < 6; i++)
        {int notes;
        notes = amount / arr[i];
        cout << notes << " nota(s) de R$ " << arr[i] << ".00" << '\n';
        amount -= notes * arr[i];
        }

    cout << "MOEDAS:" << '\n';
    double ar[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    for (int j = 0; j < 6; j++)
        {
            int coin = static_cast<int> (amount / ar[j]);
            cout << coin << " moeda(s) de R$ " << fixed << setprecision(2) << ar[j] << '\n';
            amount -= coin * ar[j]; 
        }
    return 0;
}
