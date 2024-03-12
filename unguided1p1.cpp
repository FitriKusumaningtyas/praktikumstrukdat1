#include <iostream>
using namespace std;

int luaspersegipanjang (int p , int l){
    return p * l;
}

double luaslingkaran ( int r){
    double pi = 3.14;
    return pi * (r*r); 
}

int main (){

    int p;
    int l;
    int r;

    cout << "Masukkan nilai p : " ;
    cin >> p;
    cout << "Masukkan nilai l : " ;
    cin >> l;
    cout << "Masukkan nilai r : " ;
    cin >> r;

    cout << "LUAS PERMUKAAN TABUNG = " << luaspersegipanjang (p,l) + (2 * luaslingkaran (r)) << " cm" << endl;

    return 0;

}