#include <iostream>
#include <fstream>
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
#include <vector>
#include <string>
#include <algorithm>
#include  <sstream>
#include "OdczytBazy.h"
#include "logowanie.h"

using namespace std;

string logowanie::zaloguj() {
    czytaBazeUzytkownikow::wczytaj();
    i=0;
    d=0;
    cout<< "Podaj nazwe uzytkownika: ";
    cin>>nazwa;
    while(i<uzytkownik.size()) {
        d++;
        if(uzytkownik[i].login == nazwa) {
            for(int q=0; q<3; q++) {
                cout<< "Podaj haslo. Pozostalo "<<3-q<< " prob"<<": ";
                cin>>haslo;
                if(uzytkownik[i].h==haslo) {
                        cout<< "Poprawnie sie zalogowales !!!";
                        Sleep(3000);
                    return uzytkownik[i].id;
                    cout<< "Udalo sie zalogowac!!!";
                        Sleep(3000);
                }
            }
            cout<< "Login lub haslo nieprawidlowe, CWICZ PAMIEC";
                Sleep(3000);
                            break;
        }
        i++;
    }
    if(d==(uzytkownik.size())) {
            cout<< "Login lub haslo nieprawidlowe, CWICZ PAMIEC";
                Sleep(3000);
    }
}
