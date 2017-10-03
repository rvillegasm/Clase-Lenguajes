/*
 * fichero: funciones04.cpp
 * ficheros adjuntos: funciones04.mk
 * compilar:
 *           $ g++ -o funciones04 funciones04.cpp
 *          
 *           $ make funciones04
 *
 *           $ make -k -f funciones04.mk 
 *
 * ejecutar: $ ./funciones04
 *
 * proposito: Mostrar el comportamiento de la pila en la ejecución
 *            de la funciones.
 */
#include <iostream>
#include <cstdlib>

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
fDos(int f, int g) {
  int h = -f;
  int i = -g;
  int j = fTres(h,i);

  return j;
}

int
fTres(int k, int l) {

  return -k + -l;
}

void
imprimirEntero(const char* msg, int valor) {

  cout << msg << valor << endl;
  return;
}
