#include<iostream>
#include <vector>

using namespace std;

int main(){
//Ejemplo de inicializacion
  vector <int> vectorEnteros(10);

  vectorEnteros[0]=10;

  cout<<"Valor de la primera casilla: "
    <<vectorEnteros[0]<<endl;
  cout<<"El tamaño del vector es: "
      <<vectorEnteros.size()<<endl
      <<"La capacidad del vector es: "
      <<vectorEnteros.capacity()<<endl
      <<"La capacidad maxima es: "
      <<vectorEnteros.max_size()<<endl;
//Ejemplo de pushback

  vector<int>vectorEnteros2;

  vectorEnteros2.push_back(15);

  cout<<"Valor de la primera casilla vect2: "
    <<vectorEnteros2[0]<<endl;

    cout<<"El tamaño del vector 2 es: "
        <<vectorEnteros2.size()<<endl
        <<"La capacidad del vector 2 es: "
        <<vectorEnteros2.capacity()<<endl
        <<"La capacidad maxima es: "
        <<vectorEnteros2.max_size()<<endl;

  return 0;
}
