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
#pragma once

using namespace std;
class  czytaBazeUzytkownikow {
    struct Uzytkownicy {
        string  id;
        string login,h;
    };
    public:
    int iloscOsobWplku;
    Uzytkownicy uzytk;
    vector <Uzytkownicy> uzytkownik;
  void wczytaj();
};
