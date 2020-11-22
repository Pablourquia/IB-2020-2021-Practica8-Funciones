#include <iostream>
#include <vector>
#include <cstring>
#include <math.h>
#include "difference_of_squares_funciones.h"
using namespace std;


//Funcion que muestra en pantalla el mensaje de ayuda
void usage (int argc, char *argv[]){
  if (argc == 2 && strcmp(argv[1], "--help") == 0){
    cout << "Este programa necesita que al compilarlo introduzca un numero para calcular la diferencia del cuadrado de la suma de los n primeros numeros y la suma de los cuadrados de los n primero numeros" << endl;
    exit (EXIT_SUCCESS);
  }
  if (argc == 1){
    cout << "Pruebe 'ejecutable -- help' para mas informacion " << endl;
    exit(EXIT_SUCCESS);
  }
  }


// La funcion SumSquares realiza el cuadrado de la suma de los n primeros numeros naturales
int SumSquares (int parameter){
  int sum = 0;
  for (int i = 0; i<= parameter; i++){
    sum += i;
  }
  int total = pow(sum,2);
  return total;
}

// La funcion SumOfSquares realiza la suma de los cuadrados de los n primeros numeros naturales
int SumOfSquares (int parameter){
  int sum  = 0;
  int square = 0;
  for (int i = 0; i<= parameter; i++){
    square = pow(i,2);
    sum += square;
  }
  return sum;
}