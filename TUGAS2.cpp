#include <iostream>
using namespace std;

int main () {

    float sisi;
    cout << "Menentukan Luas persegi" << endl;
    cout << "Masukkan Sisi = ";
    cin >> sisi;

    cout << "Luas Persegi = " << sisi*sisi<< "\n";
    cout << endl;

    float panjang, lebar;
    cout << "Menentukan Luas Persegi Panjang" << endl;
    cout << "Masukkan Panjang = ";
    cin >> panjang;
    cout << "Masukkan Lebar = ";
    cin >> lebar;
    cout << "Luas Persegi Panjang = " << panjang*lebar << "\n";
    cout << endl;

    float alas_segitiga, tinggi_segitiga, luas;
    cout << "Menentukan Luas Segitiga" << endl;
    cout << "Masukkan Alas Segitiga = ";
    cin >> alas_segitiga;
    cout << "Masukkan Tinggi Segitiga = ";
    cin >> tinggi_segitiga;

    luas = 0.5*alas_segitiga*tinggi_segitiga;
    cout << "Luas Segitiga = " << luas << "\n";
    cout << endl;

    float sisi_a, sisi_b, tinggi_trapesium, luas_trapesium;
    cout << "Menentukan Luas Trapesium" << endl;
    cout << "Masukkan Sisi a = ";
    cin >> sisi_a;
    cout << "Masukkan Sisi b = ";
    cin >> sisi_b;
    cout << "Masukkan Tinggi Trapesium  = ";
    cin >> tinggi_trapesium;

    luas_trapesium = 0.5*(sisi_a+sisi_b)*tinggi_trapesium;
    cout << "Luas Trapesium = " << luas_trapesium << "\n";

    float alas_jajargenjang,tinggi,luas_jajargenjang;
    cout << "* Jajar Genjang" << endl;
    cout << "Masukkan alas : ";
    cin >> alas_jajargenjang;
    cout << "Masukkan tinggi : ";
    cin >> tinggi;

    luas_jajargenjang = alas_jajargenjang*tinggi;
    cout << "Luas Jajar Genjang : " << luas_jajargenjang<< endl;
    cout << endl;

    float diagonal1,diagonal2,luas_belahketupat;
    cout << "* Belah Ketupat" << endl;
    cout << "Masukkan Diagonal 1 : " ;
    cin >> diagonal1;
    cout << "Masukkan Diagonal 2 : " ;
    cin >> diagonal2;

    luas=0.5*diagonal1*diagonal2;
    cout << "Luas Belah Ketupat : " << luas_belahketupat << endl;
    cout << endl;

    float diagonal1LL,diagonal2LL,luas_LayangLayang;
    cout << "* Layang Layang" << endl;
    cout << "Masukkan Diagonal 1 : " ;
    cin >> diagonal1LL;
    cout << "Masukkan Diagonal 2 : " ;
    cin >> diagonal2LL;

    luas_LayangLayang=0.5*diagonal1LL*diagonal2LL;
    cout << "Luas Layang Layang : " << luas_LayangLayang << endl;
    cout << endl;

    float phi,r,luas_lingkaran;
    cout << "* Lingkaran" << endl;
    cout << "Masukkan Jari-Jari : ";
    cin >> r;
    phi=3.14;

    luas_lingkaran = phi*r*r;
    cout << "Luas Lingkaran : " << luas_lingkaran << endl;

 return 0;
}

