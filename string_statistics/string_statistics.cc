// Universidad de La Laguna
// Escuela Superior de Ingerniería y Tecnología
// Grado en Ingerniería Informática
// Curso; 1º
// String statistics Practica08 - Funciones
// Autor: Pablo Urquia Adrian <alu0101398327@ull.edu.es>

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "string_statistics_funciones.h"
using namespace std;



int main (){
  vector <string> random_words = {"enero", "febrero", "marzo", "abril", "abracadabra", "mayo", "junio", "julio", "agosto", "octubre"};
  StringCharacteristics (random_words);
}