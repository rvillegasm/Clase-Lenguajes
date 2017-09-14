/*
 * fichero: Array-Init-02.C
 * compilar: $ g++ -o Array-Init-02 Array-Init-02.C
 * ejecutar (cygwin): Array-Init-02
 *          (linux):  ./Array-Init-02
 */
#include <iostream>

using namespace std;

int
main() {

  char a3[] = { 'a', 'b', 'c', '\0' };
  char a4[] = { 'd', 'e', 'f', '\0' };

  for (int i = 0; i < sizeof(a3)/sizeof(char); ++i) {
    cout << "a3[" << i << "]=" << a3[i] << endl;
  }
  
  cout << a3 << endl;

  return 0;
}
