/*
    Nama Program    : Mencari nilai terbesar dalam array
    Oleh            : Baby Cattleya G.P.
    Tanggal Buat    : 11 Maret 2019
*/

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    int x[100];

    cout << "Masukan jumlah element array (1-100): ";
    cin >> n;
    cout << endl;

    // Input number
    for(i = 0; i < n; ++i)
    {
       cout << "Masukan angka ke- " << i + 1 << " : ";
       cin >> x[i];
    }

    int maks = x[0];
     
    // Loop untuk mencari angka terbesar ke arr[0]
    for(i = 1;i < n; ++i)
    {
       if(x[i] > x[0])
           maks = x[i];
    }
    cout << "Element Terbesar = " << maks;

    return 0;
}