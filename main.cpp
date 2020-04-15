#include <iostream>
#include "rejestracja.h"
#include "OdczytBazy.h"
#include "logowanie.h"
using namespace std;


int main() {
    char wybor;
    while(true){
    system("cls");
    cout<< "Ksiazka adresowa"<<endl;
    cout<<"------------------"<<endl;
    cout<< "1.Rejestracja"<<endl;
    cout<< "2.Logowanie"<<endl;
    cout<< "3.Zamknij program"<<endl;
    cin>>wybor;
    if(wybor=='1') {
        system("cls");
        rejestracja y;
        y.zapisz();
    } else if(wybor=='2') {
            system("cls");
        logowanie p;
        p.zaloguj();
    }
    else if(wybor=='3') {
                exit(0);
            }
    }
    return 0;
}
