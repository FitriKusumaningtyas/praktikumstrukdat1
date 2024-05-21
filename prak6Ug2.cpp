
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){

    string masukan;
    cout << "Silahkan Masukkan Kalimat : ";
    getline(cin, masukan);

    stack<char> charStack;
    int lengthmasukan = masukan.length();

    for (int i = 0; i < lengthmasukan; ++i) {
        charStack.push(masukan[i]);
    }

    for (int i = 0; i < lengthmasukan; ++i) {
        cout << charStack.top();
        charStack.pop();
    }

    return 0;
}