#include <iostream>
using namespace std;

int bilA, bilB;

void input()
{
    cout << "masukan bilangan pertama = ";
    cin >> bilA;
    cout << "masukan bilangan kedua = ";
    cin >> bilB;

}

int penjumlahan(int a, int b)
{
    return a + b;
     
}


int pengurangan(int a, int b)
{
    return a - b;

}
int perkalian(int a, int b)
{
    return a * b;

}
int pembagian(float a, int b)
{
    return a / b;

}
int main()
{
    int pilihan;
    do
    {
        cout << "kalkulator sederhana" << endl;
        cout << "====================" << endl;
        cout << "1. penjumlahan" << endl;
        cout << "2. pengurangan" << endl;
        cout << "3. perkalian" << endl;
        cout << "4. pembagian" << endl;
        cout << "5.keluar" << endl;
        cout << "===================" << endl;
        cout << "masukan menu pilihan : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            input();
            cout << "hasil penjumlahan = " << penjumlahan(bilA, bilB) << endl;
            break;
        case 2:
            input();
            cout << "hasil pengurangan = " << pengurangan(bilA, bilB) << endl;
            break;
        case 3:
            input();
            cout << "hasil perkalian = " << perkalian(bilA, bilB) << endl;
            break;
        case 4:
            input();
            cout << "hasil pembagian = " << pembagian(bilA, bilB) << endl;
            break;
        case 5:
            break;
        default:
            cout << "pilihan anda salah" << endl;
            break;
        }

        system("pause");
        system("CLS");

    } while (pilihan != 5);
}

        
