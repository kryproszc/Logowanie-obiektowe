#include <iostream>
#include <fstream>
#include <windows.h>
#include  <sstream>
#include "OdczytBazy.h"
#include "rejestracja.h"
using namespace std;

string konwersja_String(int liczba) {
    ostringstream ss;
    ss << liczba;
    string str = ss.str();
    return str;
}

void rejestracja::zapisz() {
            czytaBazeUzytkownikow::wczytaj();

    cout<< "Podaj nazwe uzytkwnika: ";
    cin>>nazwa;
    int i=0;
    while( i<uzytkownik.size()) {
        if(uzytkownik[i].login==nazwa) {
            cout<<"Uzytkowniek o nazwie: "<<uzytkownik[i].login<<" juZ istnieje. Wpisz inna nazwe uzytkwnika: ";
            cin>>nazwa;
            i=0;
        } else {
            i++;
        }
    }
    cout<< "Podaj haslo: ";
    cin>>haslo;
    //iloscUzytkownikow=uzytkownik.size();
    id_int=uzytkownik.size();
    id_string=konwersja_String(id_int);
    fstream plik;
    plik.open("Uzytkownicy.txt",ios::out|ios::app);
    if (plik.good() == false) {
        plik.open("Uzytkownicy.txt",std::ios::out);
    }
    plik<<id_string<<"|"<<nazwa<<"|"<<haslo<<"|"<<endl;
    plik.close();
    cout<< "Konto zalozone!"<<endl;
    Sleep(1000);
}
