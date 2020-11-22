#include <iostream>
#include <string>
#include <vector>
#include "string_statistics_funciones.h"
using namespace std;

//Funcion que te muestra en pantalla todos los datos
void StringCharacteristics (vector <string> random_words){
  int count = {1};
  for (auto word: random_words){
    cout << "Cadena " << count << ". La longitud de la cadena es : " << word.size() << endl;
    cout << "El primer caracter es : " << word.front() << endl;
    cout << "El ultimo caracter es : " << word.back() << endl;
    if (word.find("abracadabra") != string::npos){
      cout << "Contiene abracadabra" << endl;
    }
    else{
      cout << "no contiene abracadabra" << endl;
    }
    count ++;
  }
}