#include <iostream>
using namespace std;

//class 
class hewan {
    private :
    string nama;
    double berat;

    public:
    hewan (string a,double b){
        nama  = a;
        berat = b; 
    }
    string getnama (){
        return nama;
    } 
    double getberat(){
        return berat;

    }

    void display (){
        cout << "Nama hewan : "<< nama<<endl;
        cout << "Berat      : "<< berat<< "kg"<<endl;
    }
};
    int main (){
        hewan kucing ("kucing", 3.8);
        kucing.display ();
    
        return 0;
    }
