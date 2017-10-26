/*
 * fichero: lineacomandos02.cpp
 * compile: $ g++ -o lineacomandos02 lineacomandos02.cpp
 * ejecutar: $ ./lineacomandos02
 */
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int
main(int argc, char *argv[]) {

  if (argc != 2) {
    cerr << "uso: " << argv[0]
	 << " fichero" << endl;
    return 1;
  }

  ifstream input(argv[1]);

  if (!input) {
    cerr << "uso: " << argv[0]
	 << " " << argv[1]
	 << " problemas al abrirlo"
	 << endl;
    return 1;
  }

  int c;

    while ((c = input.get()) != EOF) {
      cout << (char) c;
    }
  
  return 0;
}
