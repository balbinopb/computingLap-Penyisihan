#include <iostream>
#include <cmath>
using namespace std;

//udh benar
int main()
{
    int Hfandal, Usubaru, Ukalah, Umenang;
    cin >> Hfandal >> Usubaru;
    cin >> Ukalah >> Umenang;
    int iMenang = (Hfandal - Usubaru + Umenang - 1) / Umenang;
    int iKalah = (Hfandal - Usubaru + Ukalah - 1) / Ukalah;

    cout << floor(iMenang) << " " << floor(iKalah) << endl;
}