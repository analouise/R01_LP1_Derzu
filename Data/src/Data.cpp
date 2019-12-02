#include "Data.h"

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 2001;

}
Data::Data(int dia, int mes, int ano)
{
    dia = (dia >= 1) && (dia <= 31) ? dia : 1;
    mes = (mes >= 1) && (mes <= 12) ? mes : 1;
}
int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

void Data::setDia(int dia){
    this->dia = dia;
}
void Data::setMes(int mes){
    this->mes = mes;
}
void Data::setAno(int ano){
    this->ano = ano;
}

void Data::avancarDia(){
    dia++;
        if(dia>31){
            dia = 1;
            mes++;

            if(mes>12){
            mes = 1;
            ano++;

            }
        }
}
Data::~Data()
{
    //dtor
}
