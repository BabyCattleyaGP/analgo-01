/*
   Nama Program    : Sequential Search
   Oleh            : Baby Cattleya G.P.
   Tanggal Buat    : 11 Maret 2019
*/

#include<iostream>
#include <chrono>
using namespace std;

typedef int larik [];

void linearSearch(larik a, int n, int kunci, int& found, int& lokasi){
 
 found = lokasi = 0;
 while (!found && lokasi < n) {
  if (a[lokasi] == kunci){
   found = 1;
  }
  else {
   lokasi=lokasi+1;
  }
 }
}

main() {
   larik x = {0,1,2,3,4,5,6,7,8,9};       
   int n,kunci,found,lokasi;
   
   cout << "Kunci Pencarian data : " ; 
   cin >> kunci;
   
   auto start = chrono::steady_clock::now();
   linearSearch(x, 10, kunci, found, lokasi);
   
   if (found) 
  cout << "Ditemukan di posisi : " << lokasi+1 <<endl ;
   else
   cout << "Tidak ditemukan";
   
   auto end = chrono::steady_clock::now();
   auto diff = end - start;
   cout << "Waktu Perhitungan : " <<chrono::duration <double, milli> (diff).count() << " ms" << endl;
   
}
