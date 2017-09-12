/*
 * proposito: Mostrar la inicializacion de un arreglo y la
 *            relacion con su tamano.
 *
 * fichero: Array-Init-06.C
 * compilar: $ g++ -o Array-Init-06 Array-Init-06.C
 * ejecutar (cygwin): $ Array-Init-06
 *          (linux):  $ ./Array-Init-06
 */
#include <iostream>

using namespace std;

int
main() {
  int a6[8] = { 1, 2, 3, 4 };

  for (int i = 0; i < sizeof(a6) / sizeof(int); i++) {
    cout << "a6[" << i << "]=" << a6[i] << endl;
  }

  return 0;
}
