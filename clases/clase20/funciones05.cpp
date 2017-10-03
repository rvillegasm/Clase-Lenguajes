/*
 * fichero: funciones05.cpp
 * ficheros adjuntos: funciones05.mk
 * compilar:
 *           $ g++ -o funciones05 funciones05.cpp
 *          
 *           $ make funciones05
 *
 *           $ make -k -f funciones05.mk 
 *
 * ejecutar: $ ./funciones05
 *
 * proposito: Mostrar el comportamiento de la pila en la ejecución
 *            de la funciones.
 */
#include <iostream>
#include <cstdlib>
#include "funciones03.h"

using namespace std;

int fUno(int,int);
int fDos(int,int);
int fTres(int,int);
void imprimirEntero(const char*, int);

int
main(void) {

  int v1, v2;

  cout << "Entre dos números separados por espacio: ";
  cout.flush();
  cin >> v1 >> v2;

  imprimirEntero("Resultado: ", fUno(v1, v2));

  return EXIT_SUCCESS;
}

int
fUno(int a, int b) {
  int c = b;
  int d = a;
  int e = fDos(c,d);
  
  return e;
}

int
fDos(int a, int b) {
  int c = -a;
  int d = -b;
  int e = fTres(c,d);

  return e;
}

int
fTres(int a, int b) {

  return -a + -b;
}

void
imprimirEntero(const char* msg, int valor) {

  cout << msg << valor << endl;
  return;
}
