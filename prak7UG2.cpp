#include <iostream>
#include <cstdio>
using namespace std;

const int maximalQueue = 5;
int length = 0;

struct Node
{
    string nama;
    string nim;
    Node *next;
};

Node *head;
Node *tail;

void init()
{
    head = NULL;
    tail = NULL;
}

bool isFull()
{
    return (length == maximalQueue);
}

bool isEmpty()
{
    return head == NULL;
}

void enqueueAntrian(string nama, string nim)
{
    if (isFull())
    {
        cout << "Antrian penuh" << endl;
    }
    else
    {
        Node *baru = new Node;
        baru->nama = nama;
        baru->nim = nim;
        baru->next = NULL;
        if (isEmpty())
        {
            head = tail = baru;
        }
        else
        {
            tail->next = baru;
            tail = baru;
        }
        length++;
        cout << endl << "Berhasil Masuk Antrian";
    }
}

void dequeueAntrian()
{
    if (!isEmpty())
    {
        Node *hapus = head;
        if (head->next != NULL)
        {
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
            delete hapus;
        }
    }
    else
    {
        cout << "Tidak ada antrian" << endl;
    }
}

void clearQueue()
{
    Node *bantu = head;
    while (bantu != NULL)
    {
        Node *hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }
    head = tail = NULL;
}

void viewQueue()
{
    if (!isEmpty())
    {
        Node *bantu = head;
        int index = 1;
        while (bantu != NULL)
        {
            cout << index << ". " << bantu->nama << " ( " << bantu->nim << " ) "<< endl;
            bantu = bantu->next;
            index++;
        }
        cout << endl;
    }
    else
    {
        cout << "Antrian masih kosong" << endl;
    }
}

int countQueue()
{
    Node *hitung = head;
    int jumlah = 0;
    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }
    return jumlah;
}

int main()
{
    init();
    system("cls");
    do
    {
        int pilih;
        string nama, nim;
        cout << "\n=============ANTRIAN MAHASISWA=============" << endl;
        cout << "1. Tambah Antrian " << endl;
        cout << "2. Keluar Antrian " << endl;
        cout << "3. Jumlah Antrian " << endl;
        cout << "4. Lihat Antrian " << endl;
        cout << "5. Hapus Antrian " << endl;
        cout << "0. Keluar Program" << endl;
        cout << "Pilih menu:  ";
        cin >> pilih;
        cout << endl;
        switch (pilih)
        {
        case 1:
            cout << "Masukkan Nama Mahasiswa : ";
            cin.ignore();
            getline(cin, nama);
            cout << "Masukkan NIM : ";
            cin >> nim;
            enqueueAntrian(nama, nim);
            system("pause > nul");
            break;

        case 2:
            dequeueAntrian();
            cout << "Berhasil keluar" << endl;
            cout << endl;

            system("pause > nul");
            break;

        case 3:
            cout << "Jumlah Antrian : " << countQueue() << endl;
            cout << endl;

            system("pause > nul");
            break;

        case 4:
            viewQueue();
            cout << endl;

            system("pause > nul");
            break;

        case 5:
            clearQueue();
            cout << "Data berhasil dihapus" << endl;
            cout << endl;

            system("pause > nul");
            break;

        case 0:
            cout << "Anda Keluar dari Program" << endl;
            exit(0);

        default:
            break;
        }

    } while (true);

    return 0;
}