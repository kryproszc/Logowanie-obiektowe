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
using namespace std;

void  czytaBazeUzytkownikow::wczytaj(){
    //iloscOsobWplku=0
    fstream plik;
    plik.open("Uzytkownicy.txt",ios::in);
    do {
        iloscOsobWplku++;
        getline(plik,uzytk.id,'|');
        getline(plik,uzytk.login,'|');
        getline(plik,uzytk.h,'|');
        uzytkownik.push_back(uzytk);
    } while(getline(plik,uzytk.id));
    plik.close();

}
