#include<iostream>
#include<conio.h>
#include<cstdlib>

#include "arreglo_dinamico.h"
#include "computadora.h"
using namespace std;

int main(){
    ArregloDinamico<Computadora> computadoras;

    Computadora c01("Windows", "Luis", "1TB", 8);
    Computadora c02("MacOS", "Lalo", "1TB", 8);
    Computadora c03("MacOS", "Diego", "2TB", 8);
    Computadora c04("MacOS", "Diego", "1TB", 8);
    Computadora c05("Windows", "Diego", "3TB", 8);
    computadoras << c01 << c02 << c03 << c04 << c05;
    Computadora c06;


    /* Si existe computadora */
    Computadora *ptr = computadoras.buscar(c05);
    cout << "En existencia" << endl;
    if (ptr != nullptr){
        cout << "Computadora:" << endl;
        cout << *ptr << endl;
    } else {
        cout << "No existe" << endl;
    }

    /* NO existe computadora */
    Computadora *ptr2 = computadoras.buscar(c06);
    cout << "Status computadora c06" << endl;
    if (ptr2 != nullptr){
        cout << *ptr2 << endl;
    } else {
        cout << "No existe" << endl << endl;
    }



    // Aqui ↓ se guardaran todos los resultados
    computadoras << c02 << c02;
    cout << "Concidencias de nombre Computadora 04" << endl;
    ArregloDinamico<Computadora*> ptrs = computadoras.buscar_todos(c04);
    if (ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++){
            Computadora *c = ptrs[i];
            cout << *c << endl;
        }
    } else {
        cout << "No existen coincidencias" << endl;
    }
    


    getch();
    return 0;
}
