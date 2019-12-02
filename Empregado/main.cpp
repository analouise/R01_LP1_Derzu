#include <iostream>
#include "Empregado.h"

using namespace std;

int main()
{
    Empregado empregado1 = Empregado("joao","cosmo",5000);


    cout<<"Empregado: "<<empregado1.getNome() <<" "<<empregado1.getSobrenome()<<"\nSalario anual: "<<empregado1.getSalario() * 12 <<endl;

    empregado1.setSalario(empregado1.getSalario()*1.1);
    cout<<"Aumento: "<<empregado1.getSalario() *12 <<endl;
    return 0;
}
