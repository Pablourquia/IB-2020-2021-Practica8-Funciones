#include <iostream>
#include "prime_funciones.h"
#include <cstring>
using namespace std;

//Funcion para que te muestre en pantalla el mensaje de ayuda
void usage (int argc, char *argv[]){
  if (argc == 2 && strcmp(argv[1], "--help") == 0){
    cout << "Este programa necesita que al compilarlo introduzca tres numeros, el primero el tamaño del vector y los otros dos son los limites en la generacion aleatoria de numeros" << endl;
    exit (EXIT_SUCCESS);
  }
}

//Funcion para ver si un numero es primo o no 
bool IsPrime(int number) {
  if (number == 0|| number == 1 || number == 4){
    return false;
  }
  for (int i = 2; i< number ; i++){
    if (number%i== 0){
      return false;
    }
    return true;
  }
}