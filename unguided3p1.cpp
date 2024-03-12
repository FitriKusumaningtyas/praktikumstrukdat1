#include <iostream>
#include <map>
using namespace std;

int main() {
    // Buat sebuah map dengan kunci string dan nilai integer
    map<string, int> myMap;

    // Masukkan beberapa pasangan kunci-nilai ke dalam map
    myMap.insert(make_pair("apel", 10));
    myMap.insert(make_pair("pisang", 20));
    myMap.insert(make_pair("ceri", 30));

    // Akses nilai menggunakan operator []
    cout << "Buah: " << "apel" << ", Jumlah: " << myMap["apel"] << endl;
    cout << "Buah: " << "pisang" << ", Jumlah: " << myMap["pisang"] << endl;
    cout << "Buah: " << "ceri" << ", Jumlah: " << myMap["ceri"] << endl;

    // Cek apakah kunci ada di dalam map
    if (myMap.find("apel") != myMap.end()) {
        cout << "Kunci 'apel' ada dalam map" << endl;
    }

    // Melakukan iterasi over map menggunakan iterator
    for (map<string, int>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
        cout << "Kunci: " << it->first << ", Nilai: " << it->second << endl;
    }

    // Melakukan iterasi over map menggunakan range-based for loop
    for (const auto& pair : myMap) {
        cout << "Kunci: " << pair.first << ", Nilai: " << pair.second << endl;
    }

    return 0;
}