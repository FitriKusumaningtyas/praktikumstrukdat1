#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct mahasiswa {
    string nama;
    string nim;
    mahasiswa* next;
};

class LinkedList {
private:
    mahasiswa* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertDepan(string nama, string nim) {
        mahasiswa* newNode = new mahasiswa();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = head;
        head = newNode;
        cout << endl << "Data telah ditambahkan"<<endl;
    }

    void insertBelakang(string nama, string nim) {
        mahasiswa* newNode = new mahasiswa();
        newNode->nama = nama;
        newNode->nim = nim;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
        } else {
            mahasiswa* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << endl << "Data telah ditambahkan"<<endl;
    }

    void insertTengah(string nama, string nim, int posisi) {
        if (posisi < 1) {
            cout << endl << "Posisi tidak valid"<<endl;
            return;
        }
        mahasiswa* newNode = new mahasiswa();
        newNode->nama = nama;
        newNode->nim = nim;
        if (posisi == 1) {
            newNode->next = head;
            head = newNode;
        } else {
            mahasiswa* temp = head;
            for (int i = 1; i < posisi - 1; i++) {
                if (temp == NULL) {
                    cout << endl << "Posisi tidak valid"<<endl;
                    return;
                }
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
        cout << endl << "Data telah ditambahkan"<<endl;
    }

    void ubahDepan(string nama, string nim) {
        if (head == NULL) {
            cout << endl << "Linked List kosong"<<endl;
            return;
        }
        head->nama = nama;
        head->nim = nim;
        cout << endl << "Data di depan telah diubah"<<endl;
    }

    void ubahBelakang(string nama, string nim) {
        if (head == NULL) {
            cout << endl << "Linked List kosong"<<endl;
            return;
        }
        mahasiswa* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->nama = nama;
        temp->nim = nim;
        cout << endl << "Data di belakang telah diubah"<<endl;
    }

    void ubahTengah(string nama, string nim, int posisi) {
        if (posisi < 1) {
            cout << endl << "Posisi tidak valid"<<endl;
            return;
        }
        if (head == NULL) {
            cout << endl << "Linked List kosong"<<endl;
            return;
        }
        mahasiswa* temp = head;
        for (int i = 1; i < posisi; i++) {
            if (temp == NULL) {
                cout << endl << "Posisi tidak valid"<<endl;
                return;
            }
            temp = temp->next;
        }
        temp->nama = nama;
        temp->nim = nim;
        cout << endl << "Data di posisi " << posisi << " telah diubah"<<endl;
    }

    void hapusDepan() {
        if (head == NULL) {
            cout << endl << "Linked List kosong"<<endl;
            return;
        }
        mahasiswa* temp = head;
        head = head->next;
        delete temp;
        cout << endl << "Data di depan telah dihapus"<<endl;
    }

    void hapusBelakang() {
        if (head == NULL) {
            cout << endl << "Linked List kosong"<<endl;
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            cout << endl << "Data di belakang telah dihapus"<<endl;
            return;
        }
        mahasiswa* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        cout << endl << "Data di belakang telah dihapus"<<endl;
    }

    void hapusTengah(int posisi) {
        if (posisi < 1) {
            cout << endl << "Posisi tidak valid"<<endl;
            return;
        }
        if (head == NULL) {
            cout << endl << "Linked List kosong"<<endl;
            return;
        }
        mahasiswa* temp = head;
        if (posisi == 1) {
            head = head->next;
            delete temp;
            cout << endl << "Data di posisi " << posisi << " telah dihapus"<<endl;
            return;
        }
        for (int i = 1; i < posisi - 1; i++) {
            if (temp == NULL || temp->next == NULL) {
                cout << endl << "Posisi tidak valid"<<endl;
                return;
            }
            temp = temp->next;
        }
        mahasiswa* nextNode = temp->next->next;
        delete temp->next;
        temp->next = nextNode;
        cout << endl << "Data di posisi " << posisi << " telah dihapus"<<endl;
    }

    void print() {
        if (head == NULL) {
            cout << endl << "Linked List kosong"<<endl;
            return;
        }
        cout << "---------- DATA MAHASISWA ----------"<< endl;
        cout << setw(20) << left << "NAMA" << setw(20) << left << "NIM" << endl;
        mahasiswa* temp = head;
        while (temp != NULL) {
            cout << setw(20) << left << temp->nama << setw(20) << left << temp->nim << endl;
            temp = temp->next;
        }
    }

    void deleteAll() {
        while (head != NULL) {
            mahasiswa* temp = head;
            head = head->next;
            delete temp;
        }
        cout << endl << "Semua data mahasiswa telah dihapus"<<endl;
    }
};

int main() {
    LinkedList linkedList;
    int pilihan;
    string nama, nim;
    int posisi;
    while (true) {
        cout << endl;
        linkedList.print();
        cout << endl; 
        cout << "=================MENU PILIHAN======================" << endl;
        cout << endl ;
        cout << "1. Tambah Depan"<<endl;
        cout << "2. Tambah Belakang"<<endl;
        cout << "3. Tambah Tengah"<<endl;
        cout << "4. Ubah Depan"<<endl;
        cout << "5. Ubah Belakang"<<endl;
        cout << "6. Ubah Tengah"<<endl;
        cout << "7. Hapus Depan"<<endl;
        cout << "8. Hapus Belakang"<<endl;
        cout << "9. Hapus Tengah"<<endl;
        cout << "10. Hapus List"<<endl;
        cout << "11. Tampilkan"<<endl;
        cout << "12. Keluar"<<endl;

        cout << endl;

        cout << "Pilihan : ";
        cin >> pilihan;

        cout << endl;

        switch (pilihan) {
            case 1:
                cout << "----Tambah Depan----"<<endl;
                cout << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                linkedList.insertDepan(nama, nim);
                break;
            case 2:
                cout << "----Tambah Belakang----"<<endl;
                cout << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                linkedList.insertBelakang(nama, nim);
                break;
            case 3:
                cout << "----Tambah Tengah----"<<endl;
                cout << endl;
                cout << "Masukkan Nama : ";
                cin >> nama;
                cout << "Masukkan NIM : ";
                cin >> nim;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                linkedList.insertTengah(nama, nim, posisi);
                break;
            case 4:
                cout << "----Ubah Depan----"<<endl;
                cout << endl;
                cout << "Masukkan Nama Baru : ";
                cin >> nama;
                cout << "Masukkan NIM Baru : ";
                cin >> nim;
                linkedList.ubahDepan(nama, nim);
                break;
            case 5:
                cout << "----Ubah Belakang----"<<endl;
                cout << endl;
                cout << "Masukkan Nama Baru : ";
                cin >> nama;
                cout << "Masukkan NIM Baru : ";
                cin >> nim;
                linkedList.ubahBelakang(nama, nim);
                break;
            case 6:
                cout << "----Ubah Tengah----"<<endl;
                cout << endl;
                cout << "Masukkan Nama Baru : ";
                cin >> nama;
                cout << "Masukkan NIM Baru : ";
                cin >> nim;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                linkedList.ubahTengah(nama, nim, posisi);
                break;
            case 7:
                cout << "----Hapus Depan----"<<endl;
                cout << endl;
                linkedList.hapusDepan();
                break;
            case 8:
                cout << "----Hapus Belakang----"<<endl;
                cout << endl;
                linkedList.hapusBelakang();
                break;
            case 9:
                cout << "----Hapus Tengah----"<<endl;
                cout << endl;
                cout << "Masukkan Posisi : ";
                cin >> posisi;
                linkedList.hapusTengah(posisi);
                break;
            case 10:
                cout << "----Hapus List----"<<endl;
                cout << endl;
                linkedList.deleteAll();
                break;
            case 11:
                cout << "----Tampilkan----"<<endl;
                cout << endl;
                linkedList.print();
                break;
            case 12:
                exit(12);
            default:
                cout << "Pilihan tidak valid!"<<endl;
        }
    }

    return 0;
}


