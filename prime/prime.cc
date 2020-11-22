// Universidad de La Laguna
// Escuela Superior de Ingerniería y Tecnología
// Grado en Ingerniería Informática
// Curso; 1º
// Vector statistics Practica08 - Funciones
// Autor: Pablo Urquia Adrian <alu0101398327@ull.edu.es>
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include "prime_funciones.h"
using namespace std;


int main(int argc,char *argv[]){
  usage (argc, argv);
  string parameter {argv[1]};
  int position = stoi(parameter);
  int prime_number;
  int current_number{0};

  // Bucle que te saca el numero primo que te interesa
  for (int i = 0; i<position;i ++){
    do{
      ++current_number;
    }
    while(!IsPrime(current_number));
    if (IsPrime(current_number)){
      prime_number = current_number;
      ++ current_number;
    }
  }
  cout << prime_number << endl;
  return 0;

  }
