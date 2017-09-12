/*
 * proposito: Mostrar la inicializacion de arreglos y la 
 *            forma de calcular su tamano desde tiempo de compilacion
 *            a traves de las operaciones sizeof()
 * 
 * fichero: Array-Init-07.C
 * compilar: $ g++ -o Array-Init-07 Array-Init-07.C
 * ejecutar (cygwin): $ Array-Init-07
 *          (linux):  $ ./Array-Init-07
 */
#include <iostream>

using namespace std;

int
main() {

  char a4[] = { 'a', 'b', 'c', '\0' , 'd', 'e', 'f' };

  cout << a4 << endl;

  for (int i = 0; i < sizeof(a4) / sizeof(char); i++) {
    cout << a4[i];
    
  }
  cout << endl;

  return 0;
}
