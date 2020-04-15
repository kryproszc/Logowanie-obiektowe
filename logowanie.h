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


class logowanie :public czytaBazeUzytkownikow{
string nazwa;
    string haslo;
    int i;
    int d;
        public:

   string zaloguj();
};


