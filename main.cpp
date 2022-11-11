#include <iostream>
#include <fstream>
#include <cstdlib>


using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    fstream plik;
    plik.open("wizytowka.txt",ios::in | ios::app); //ios::out zapisywanie, ios::in odczytywanie

    if(plik.good()==false)
    {
        cout<<"plik nie istnieje";
        exit(0);
    }

    string linia;
    int nr_linii=1;
    while(getline(plik,linia))
    {
        switch(nr_linii)
        {
            case 1: imie=linia;break;
            case 2: nazwisko=linia;break;
            case 3: nr_tel=atoi(linia.c_str()); break;
        }
        nr_linii++;
    }

    cout<<imie<<endl;
    cout<<nazwisko<<endl;
    cout<<nr_tel<<endl;

    plik.close();


    return 0;
}
