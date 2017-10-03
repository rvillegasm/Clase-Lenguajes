/*
 * fichero: intercambio-02.cpp
 * ficheros adjuntos: intercambio-02.mk
 * compilar:
 *           $ g++ -o intercambio-02 intercambio-02.cpp
 *          
 *           $ make intercambio-02
 *
 *           $ make -k -f intercambio-02.mk 
 *
 * ejecutar: $ ./intercambio-02
 *
 * proposito: Primer intento de hacer el intercambio de valores a través
 *            de copia (Direcciones)
 */
#include <iostream>
#include <cstdlib>

using namespace std;

void intercambiar(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int
main(void) {
  int k = 10, j = 20;

  cout << "k: " << k << " j: " << j << endl;

  intercambiar(&k,&j);

  cout << "k: " << k << " j: " << j << endl;

  return EXIT_SUCCESS;
}
  
