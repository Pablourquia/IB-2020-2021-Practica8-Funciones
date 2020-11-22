// Universidad de La Laguna
// Escuela Superior de Ingerniería y Tecnología
// Grado en Ingerniería Informática
// Curso; 1º
// Vector statistics Practica08 - Funciones
// Autor: Pablo Urquia Adrian <alu0101398327@ull.edu.es>

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <math.h>
#include "difference_of_squares_funciones.h"
using namespace std;


int main(int argc, char*argv[]){
  usage (argc, argv);
  int parameter = atoi (argv[1]);
  cout << SumSquares(parameter) - SumOfSquares(parameter) << endl;
  return 0;
}