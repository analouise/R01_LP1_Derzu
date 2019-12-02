#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
     Data data1 = Data();

     data1.setDia(2);
     data1.setMes(4);
     data1.setAno(2018);

     cout<<"Data: "<<data1.getDia()<<"/"<<data1.getMes()<<"/"<<data1.getAno()<<endl;
     data1.avancarDia();
     cout<<"Data: "<<data1.getDia()<<"/"<<data1.getMes()<<"/"<<data1.getAno()<<endl;

    return 0;
}
