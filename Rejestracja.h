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

class rejestracja :public czytaBazeUzytkownikow {
    string nazwa, haslo;
    int id_int;
    string id_string;

    public:
void zapisz();
};
