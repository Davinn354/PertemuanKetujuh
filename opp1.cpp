#include <iostream>
using namespace std;

class bangunDatar{

    //akses modifier
    private:
        float Panjang, Lebar;
    public:
        float Luas;

        void input() { //methode input persegi panjang

            cout << "Masukan Panjangnya = ";
            cin >> Panjang;
            cout << "Masukan Lebarnya = ";
            cin >> Lebar;
        }

        float hitungLuas (){
            return Panjang * Lebar;
            
        }
};