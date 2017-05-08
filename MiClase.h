#include <iostream>

#ifndef MICLASE_H
#define MICLASE_H

class MiClase{
  private:
    int*pointer;
    int size;

  public:
    MiClase();//Constructor por defecto
    MiClase(int);//Constructor recibe un size

    int get(int);//Retorna el valor de una casilla
    void set (int,int);//Establece el valor indicado en la casilla indicada

    ~MiClase();


};

#endif
