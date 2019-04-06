/*
    Nama Program : Program Binary Seacrh
    Oleh    : Baby, Afifah, Islam
    Dibuat : Senin, 25 Maret 2018
*/

#include <iostream>
#include <chrono>
using namespace std;

main () {
	int n, i, search, first, last, middle;
	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	
	cout<<endl<<"Masukkan angka yang akan dicari :";
	cin>>search;
	
	int posisi;
	for (int i=0; i<10-1; i++) {
		posisi=i;
		for (int j=i+1;j<10;j++) {
			if (arr[posisi]>arr[j]) {
				posisi=j; 
			}
		}
		swap(arr[i], arr[posisi]);
	}
	
	auto start = chrono::steady_clock::now();
	
	first = 0;
	last = 10-1;
	middle = (first+last)/2;        
	
	while (first <= last)
	{
		if(arr[middle] < search)
		{
			first = middle + 1;
		}
		else if(arr[middle] == search)
		{
			cout<<search<<" ditemukan di indeks ke "<<middle+1<<endl;
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	
	if(first > last)
	{
		cout<<"Error! "<<search<<" tidak ditemukan dalam list";
	}
	
	auto end = chrono::steady_clock::now();
    auto diff = end - start;
    
    cout << chrono::duration <double, milli> (diff).count() << " ms" << endl;

}
