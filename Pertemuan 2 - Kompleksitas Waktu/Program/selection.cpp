/*
  Nama Program    : Selection Search
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
	cout<<"Sorting array \n";
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Array setelah sorting :\n";
	for(i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	getch();
}