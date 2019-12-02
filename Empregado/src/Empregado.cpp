#include "Empregado.h"

Empregado::Empregado()
{
    nome = "";
    sobrenome = "";
    salario = 0;
}

Empregado::Empregado(std::string nome,std::string sobrenome, float salario)
{
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

std::string Empregado::getNome(){
    return nome;
}

std::string Empregado::getSobrenome(){
    return sobrenome;
}

float Empregado::getSalario(){
    return salario;
}

void Empregado::setNome(std::string nome){
    this->nome = nome;
}

void Empregado::setSobrenome(std::string sobrenome){
    this->sobrenome = sobrenome;
}

void Empregado::setSalario(float salario){
    if(salario < 0){
        this->salario = 0;
    }else{
        this->salario = salario;
    }

}

Empregado::~Empregado()
{
    //dtor
}
