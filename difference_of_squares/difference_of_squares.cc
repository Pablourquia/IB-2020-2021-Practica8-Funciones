// Universidad de La Laguna
// Escuela Superior de Ingerniería y Tecnología
// Grado en Ingerniería Informática
// Curso; 1º
// Difference_of_squares Practica08 - Funciones
// Autor: Pablo Urquia Adrian <alu0101398327@ull.edu.es>

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <math.h>
using namespace std;

void usage (int argc, char *argv[]){
  string kHelpText {"Este programa necesita que al compilarlo introduzca un numero natural y el le devuelve la diferencia de el cuadrado de los n primero numeros y la suma de los cuadrados"};
  if (argc !=2){
    cout << argv[0] << " :Introduce un numero natural como parametro" << endl;
    cout << "Pruebe " << argv[0] << " --help para mas informacion" << endl;
    exit (EXIT_SUCCESS);
  }
  string text_help = {argv[1]};
  if (text_help == " --help"){
    cout << kHelpText << endl;
    exit (EXIT_SUCCESS);
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

int main(int argc, char*argv[]){
  int parameter = atoi (argv[1]);
  cout << SumSquares(parameter) - SumOfSquares(parameter) << endl;
  return 0;
}