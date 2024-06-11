#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main()

{

    int jumlahsimpul_FITRI2311102068;
    cout << "Silakan masukkan jumlah simpul : ";
    cin >> jumlahsimpul_FITRI2311102068;

    vector<string> simpul(jumlahsimpul_FITRI2311102068);
    vector<vector<int>> busur(jumlahsimpul_FITRI2311102068, vector<int>(jumlahsimpul_FITRI2311102068, 0));
    
    cout << "Silakan masukkan nama simpul : " << endl;
        for (int i = 0; i < jumlahsimpul_FITRI2311102068; i++)
        {
            cout << "Simpul " << (i + 1) << " : ";    
            cin >> simpul[i];
        }

    cout << "Silakan masukkan bobot antar simpul : " << endl;
        for (int i = 0; i < jumlahsimpul_FITRI2311102068; i++)
        {   
            for (int j = 0; j < jumlahsimpul_FITRI2311102068; j++)
            {
                cout << simpul[i] << " --> " << simpul[j] << " = ";
                cin >> busur[i][j];
            }
        }

    cout << endl;
    cout << setw(7) << " ";
        for (int i = 0; i < jumlahsimpul_FITRI2311102068; i++)
        {
            cout << setw(8) << simpul[i];
        }
        cout << endl;

        for (int i = 0; i < jumlahsimpul_FITRI2311102068; i++)
        {
            cout << setw(7) << simpul[i];   
                for (int j = 0; j < jumlahsimpul_FITRI2311102068; j++)
                {
                    cout << setw(8) << busur[i][j];
                }   
            cout << endl;
        }
    }
