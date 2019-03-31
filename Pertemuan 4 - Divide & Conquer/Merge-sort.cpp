/*
    Program Merge Sort
*/

#include<iostream>
#include <chrono>
#include <ctime>
#include <cstdlib>

using namespace std;

    void Merge(int A[],int p, int q,int r) {     /* merges two arrays */
        int n1=q-p+1;           /*size of L[]*/
    	int n2=r-q;             /*size of R[]*/
    	int i,j,k;
    	int L[n1],R[n2];
    
    	for(i=0;i<n1;i++) 
    	{
    		L[i]=A[p+i];
    	}
    
    	for(j=0;j<n2;j++) 
    	{
    		R[j]=A[q+j+1];
    	}
    
    	i=0,j=0;
    
    	for(k=p;i<n1&&j<n2;k++)
    	{
    		if(L[i]<R[j])
    		{
    			A[k]=L[i++];
    		}
    		else
    		{
    			A[k]=R[j++];
    		}
    	}
    
    	while(i<n1)             /*If L[] has more elements than R[] then it will put all the reamining elements of L[] into A[]*/
    	{
    		A[k++]=L[i++];
    	}
    	
    	while(j<n2)             /*If R[] has more elements than L[] then it will put all the reamining elements of R[] into A[]*/  
    	{
    		A[k++]=R[j++];
    	}
    }

    void MergeSort(int A[],int p,int r)    /*It will will divide the array and sort them while merging them*/
    {
    	int q;                                
    
    	if(p<r)
    	{
    		q=(p+r)/2;                      /*q is the middle element to divide the array*/ 
    		MergeSort(A,p,q);
    		MergeSort(A,q+1,r);
    		Merge(A,p,q,r);
    	}
    
    }


    int main()
    {
        int A_Size; 
        int A[A_Size];
        
        cout<<"Masukkan banyak elemen :";
    	cin>>A_Size;
    
        cout << "Data array sebelum sort :";
    
        unsigned seed = time(0);
        srand(seed);
    
        // Buat Random Array
        for(int i = 0; i<A_Size; i++)
        {
            A[i]=rand()%10+1;
        }
        
        for(int i = 0; i<A_Size; i++)
        {
            cout<<A[i]<<" ";
        }
        
        auto start = chrono::steady_clock::now();
        
    	MergeSort(A,0,A_Size-1);
    	
    	auto end = chrono::steady_clock::now();
        auto diff = end - start;
    	
    	cout<<endl<<"Hasil Setelah Sort :";
    
    	for(int i=0;i<A_Size;i++)
    	{
    		cout<<A[i]<<" ";
    	}
    
    	cout<<endl;
    	
    	cout << endl <<"Runtime : " << chrono::duration <double, milli> (diff).count() << " ms" << endl;

    }