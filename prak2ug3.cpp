#include <iostream>
#include <conio.h>
#include <unistd.h>
using namespace std;

int main() {
    int menu_2311102068;
    int arr[10];
    int c = 0;

    do {
        cout << " MENU " << endl;
        cout << ">>>>>>>>>>>>>>>" << endl;
        cout << "1. INPUT ARRAY " << endl;
        cout << "2. TAMPILKAN ARRAY " << endl;
        cout << "3. NILAI MINIMUM " << endl;
        cout << "4. NILAI MAXIMUM " << endl;
        cout << "5. NILAI RATA-RATA " << endl;
        cout << "....................." << endl;
        cout << "pilih menu (1-5) : ";
        cin >> menu_2311102068;

        switch (menu_2311102068) {
            case 1:
                if (c > 0) {
                    char jwb;
                    cout << "Array sudah terisi. Apakah Anda yakin ingin mengisi ulang? (y/n): ";
                    cin >> jwb;
                    if (jwb == 'y' || jwb == 'Y') {
                        c = 0;
                    }
                }
                if (c == 0) {
                    cout << "Masukkan 10 bilangan bulat:\n";
                    for (int i = 0; i < 10; i++) {
                        cout << "Bilangan ke-" << i + 1 << ": ";
                        cin >> arr[i];
                    }
                   c = 10;
                    cout << "\nBerhasil input"<<endl;
                }
                break;
            case 2:
                if (c> 0) {
                    cout << "Isi Array:\n";
                    for (int i = 0; i < c ; i++) {
                        cout << arr[i] << " , ";
                    }
                    cout << endl;
                }
                break;
            case 3:
                if (c > 0) {
                    int min = arr[0];
                    for (int i = 0; i < c; i++) {
                        if (arr[i] < min) {
                            min = arr[i];
                        }
                    }
                    cout << "Nilai Minimum = " << min << endl;
                }
                break;
            case 4:
                if (c > 0) {
                    int max= arr[0];
                    for (int i = 0; i < c; i++) {
                        if (arr[i] > max) {
                            max = arr[i];
                        }
                    }
                    cout << "Nilai Maksimum =  " << max << endl;
                }
                break;
            case 5:
                if (c > 0) {
                    double mean = 0.0;
                    for (int i = 0; i < c; i++) {
                        mean += arr[i];
                    }
                    mean /=c;
                    cout << "Mean = " << mean << endl;
                }
        }
    } while ( menu_2311102068 != 0);
return 0;
}
