/*
Nama Program	:	bubble Sort
Nama			:	Baby Cattleya
NPM				:	140810160048
*/
#include<iostream> 
using namespace std;
 
int main()
{
	int a[50],n,i,j,temp;
	cout<<"Masukkan Jumlah elemen yang diinput: ";
	cin>>n;
	
	for(i=0;i<n;++i){
		cout<<"Masukkan Elemen ke-"<<i+1<<": "; cin>>a[i];
	}
	for(i=1;i<n;++i)
	{
		for(j=0;j<(n-i);++j)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	}
	
	cout<<endl<<"Hasil Bubble Sort:";
	for(i=0;i<n;++i)
		cout<<" "<<a[i];
}


