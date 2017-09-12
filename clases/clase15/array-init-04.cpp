/*
 * proposito: Mostrar la inicialización de un arreglo en C++
 *            y mostrar el tamaño definido por el sistema.
 * fichero: Array-Init-04.C
 * compilar: g++ -o Array-Init-04 Array-Init-04.C
 * ejecutar: ./Array-Init-04
 */
#include <iostream>

using namespace std;

int
main(int argc, char *argv[]) {
  char a4[] = {'a', 'b', '\0', 'c', 'd'};

  cout << a4 << endl;

  for (int i = 0; i < sizeof(a4) / sizeof(char); i++) {
    cout << "a4[" << i << "]=" << a4[i] << endl;
  }

  return 0;
}
