/*
    Nama Program : Program Menghitung Pangkat dengan looping while
    Oleh    : Baby, Afifah, Islam
    Dibuat : Senin, 25 Maret 2018
*/


#include <iostream>
#include <chrono>
using namespace std;

int main() 
{
    int exponent;
    float basis, hasil = 1;

    cout << "Masukkan basis:  ";
    cin >> basis;
    
    cout << "Masukkan pangka:  ";
    cin >> exponent;
    
    cout << basis << "^" << exponent << " = ";
    
    auto start = chrono::steady_clock::now();

    while (exponent != 0) {
        hasil *= basis;
        --exponent;
    }
    
    auto end = chrono::steady_clock::now();
    auto diff = end - start;

    cout << hasil << endl;
    cout << chrono::duration <double, milli> (diff).count() << " ms" << endl;

    return 0;
}
