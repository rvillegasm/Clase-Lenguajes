/*
 * fichero: intercambio-01.cpp
 * ficheros adjuntos: intercambio-01.mk
 * compilar:
 *           $ g++ -o intercambio-01 intercambio-01.cpp
 *          
 *           $ make intercambio-01
 *
 *           $ make -k -f intercambio-01.mk 
 *
 * ejecutar: $ ./intercambio-01
 *
 * proposito: Primer intento de hacer el intercambio de valores a través
 *            de un procedimiento que falla.
 */
#include <iostream>
#include <cstdlib>

using namespace std;

void intercambiar(int a, int b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int
main(void) {
  int k = 10, j = 20;

  cout << "k: " << k << " j: " << j << endl;

  intercambiar(k,j);

  cout << "k: " << k << " j: " << j << endl;

  return EXIT_SUCCESS;
}
  
