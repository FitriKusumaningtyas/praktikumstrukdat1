#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string masukan;
    cout << "Silahkan Masukkan Kalimat: ";
    cin >>  masukan;

    stack<char> charStack;
    int lengthmasukan = masukan.length();

    for (int i = 0; i < lengthmasukan; ++i) {
        charStack.push(masukan[i]);
    }

    bool palindrom = true;
    for (int i = 0; i < lengthmasukan; ++i) {
        if (masukan[i] != charStack.top()) {
            palindrom = false;
            break;
        }
        charStack.pop();
    }

    if (palindrom) {
        cout << "Kalimat tersebut adalah palindrom" << endl;
    } else{
        cout << "Kalimat tersebut bukan palindrom" << endl;
        }

    return 0;
}