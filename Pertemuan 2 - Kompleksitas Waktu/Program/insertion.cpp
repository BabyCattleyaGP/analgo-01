/*
  Nama Program    : Insertion Search
  Oleh            : Baby Cattleya G.P.
  Tanggal Buat    : 11 Maret 2019
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	clrscr();
	int size, arr[50], i, j, temp;
	cout<<"Ukuran Array : ";
	cin>>size;
	cout<<"Element Array : ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Sorting array\n";
	for(i=1; i<size; i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]) && (j>=0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	cout<<"Array setelah sorting : \n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
}