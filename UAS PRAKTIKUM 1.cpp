#include <iostream>
using namespace std;

int main() {
    // Input
    int angka;
      
    cout << "Nama    : Nadhya Shaliha Ridha"; cout << endl;
    cout << "NIM     : 202131075"; cout <<endl;
    cout << "==============================="; cout << endl;

    cout << "Masukkan sebuah angka: "; cin >> angka;
    cout << endl;

    // Looping
    for (int i = 1; i <= angka; ++i) {
        // Branching
        if (i % 2 == 0) {
            cout << "Angka genap: " << i << endl;
        } else {
            cout << "Angka ganjil: " << i << endl;
        }

        // Nested Looping
        for (int j = 1; j <= i; ++j) {
            // Nested Branching
            if (j % 2 == 0) {
                cout << " - Bilangan genap: " << j << endl;
            } else {
                cout << " - Bilangan ganjil: " << j << endl;
            }
        }
    }

    return 0;
}

