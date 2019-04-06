/*
    Nama Program : Program Menghitung Pangkat dengan rekursif
    Oleh    : Baby, Afifah, Islam
    Dibuat : Senin, 25 Maret 2018
*/

#include <iostream>
#include <math.h>
#include <chrono>
using namespace std;
 
//function declaration
double Power(double base, int exponent);
 
int main()
{
    double base, power;
    int exponent;
 
    cout<<"Masukkan Basis: ";
    cin>>base;
    cout<<"Masukkan Pangkat: ";
    cin>>exponent;
    
    auto start = chrono::steady_clock::now();
 
    power = Power(base, exponent);
    
    auto end = chrono::steady_clock::now();

    auto diff = end - start;
    
    cout<<base<< "^"<<exponent<<" = "<<power<<endl;
    cout << chrono::duration <double, milli> (diff).count() << " ms" << endl;
    return 0;
}
 
double Power(double base, int exponent)
{
    if(exponent == 0)
        return 1;
    else if(exponent > 0)
        return base * pow(base, exponent - 1);
    else
        return 1 / pow(base, - exponent);
}
