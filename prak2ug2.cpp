#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "Masukkan jumlah elemen x: ";
    cin >> x;
    cout << "Masukkan jumlah elemen y: ";
    cin >> y;
    cout << "Masukkan jumlah elemen z: ";
    cin >> z;
 
    int arr[x][y][z];
    
        for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++)
        {
              for (int k = 0; k < z; k++){
                 cout << "Masukkan elemen Array[" << i << "][" << j << 
                 "][" << k << "]: ";
                 cin >> arr[i][j][k];
                }
            }
        }
 
    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
             for (int k = 0; k < z; k++){
                 cout << "Data Array[" << i << "][" << j << "][" << k 
                << "] = " << arr[i][j][k] << endl;
                }
            }
        }
 // Tampilan array
    for (int i = 0; i < x; i++){
         for (int j = 0; j < y; j++){
             for (int k = 0; k < z; k++){
                 cout << arr[i][j][k] << " ";
            }
         cout << endl;
        }
    cout << endl;
 }
 return 0;
}
