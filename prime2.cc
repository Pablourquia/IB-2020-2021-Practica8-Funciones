#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;


void usage(int argc, char *argv[]) {
    string kHelpText {"Este programa le pide que al ejecutar el programa introduzca un digito y te dira cual es el numero primo en su posicion"};
    if (argc !=2){
        cout << argv[0] << " : Falta un numero natural como parametro" << endl;
        cout << "Pruebe " << argv[0] << " --help para mas informacion" << endl;
        exit (EXIT_SUCCESS);
    }
    string parameter = {argv[1]};
    if (parameter == "--help"){
        cout << kHelpText << endl;
        exit (EXIT_SUCCESS);
    }
}


int Primes (int parameter){
    vector <int> primes;
    do {
        int dividers = 0;
        for(int i = 2; i < 1000; i++){
            for(int j = 1 ; j <= i; j++){
                if(i % j == 0){
                    dividers += 1;
                }
            }
                if(dividers == 2){
                    primes.push_back(i);
                }
        }
    } while (primes [parameter] != 0);
    
}

int main(int argc,char *argv[]){

    int parameter = atoi (argv[1]);
    cout << Primes (parameter) << endl;
    return 0;
}