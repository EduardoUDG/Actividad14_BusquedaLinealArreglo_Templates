#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &so, const string &nomuser, const string &almacenamiento, int ram)
{
    this->so = so;
    this->nomuser = nomuser;
    this->almacenamiento = almacenamiento;
    this->ram = ram;
}
void Computadora::setSo(const string &v){
    so = v;
}
string Computadora::getSo(){
    return so;
}
void Computadora::setNomuser(const string &v){
    nomuser = v;
}
string Computadora::getNomuser(){
    return nomuser;
}
void Computadora::setAlmacenamiento(const string &v){
    almacenamiento = v;
}
string Computadora::getAlmacenamiento(){
    return almacenamiento;
}
void Computadora::setRam(int v){
    ram = v;
}
int Computadora::getRam(){
    return ram;
}