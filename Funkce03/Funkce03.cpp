// Funkce03.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;

bool jeSude(int x, int& soulich, double& ap)
{
    bool cisloJeSude = false;
    int soucetSudych{ 0 }, pocetSudych{ 0 }, soucetLichych{ 0 };
    if (x % 2 == 0)cisloJeSude = true;
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            soucetSudych += i;
            ++pocetSudych;
        }
        else soucetLichych += i;
    }
    ap = (double)soucetSudych / pocetSudych;
    soulich = soucetLichych;
    return cisloJeSude;
}



int main()
{

    int soucet;
    double ap;
    int x;
    cout << "Zadej cislo: ";
    cin >> x;

    if (jeSude(x, soucet, ap))
    {
        cout << "Ano, je sude" << endl;
        cout << "Soucet lichych je " << soucet << endl;
        cout << "Aritmeticky prumer je " << ap << endl;

    }
    else
    {
        cout << "Neni sude, proto nemuze mit zadne sude delitele" << endl;
        cout << "Soucet lichych je " << soucet << endl;
    }


    getchar();
    getchar();
    return 0;

}

