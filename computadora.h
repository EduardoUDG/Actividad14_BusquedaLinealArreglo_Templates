#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;

class Computadora{
private:
    string so;
    string nomuser;
    string almacenamiento;
    int ram;
public:
    Computadora();
    Computadora(const string &so, 
              const string &nomuser,
              const string &almacenamiento,
              int ram);
    void setSo(const string &v);
    string getSo();
    void setNomuser(const string &v);
    string getNomuser();
    void setAlmacenamiento(const string &fuerza);
    string getAlmacenamiento();
    void setRam(int v);
    int getRam();

    /* Primera carga de operador */
    friend ostream& operator<<(ostream &out, const Computadora &p)
    {
        out << left;
        out << setw(20) << p.so;
        out << setw(20) << p.nomuser;
        out << setw(20) << p.almacenamiento;
        out << setw(15) << p.ram;
        out << endl;
        return out;
    }

    /* Segunda carga de extraccion */
    friend istream& operator>>(istream &in, Computadora &p)
    {
        // string temp;
        // float fuerza;
        // int salud; 

        cout << "Sistema Operativo: ";
        getline(cin, p.so);
        
        cout << "Nombre usuario: ";
        getline(cin, p.nomuser);
        
        cout << "Almacenamiento: ";
        getline(cin, p.almacenamiento);
        
        cout << "RAM: ";
        cin >> p.ram;



        return in;
    } 

    bool operator==(const Computadora& c){
        return nomuser == c.nomuser;
    }
    
    bool operator==(const Computadora& c) const{
        return nomuser == c.nomuser;
    }

};

#endif