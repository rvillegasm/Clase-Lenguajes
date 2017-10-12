/*
 * fichero: entradasalida07.cpp
 *
 * proposito: Mostrar el formato de entrada y salida en C++. Observando
 *            que pasa cuando un flujo falla.
 *
 * compile: $ g++ -o entradasalida07 entradasalida07.cpp
 *          $ make entradasalida07
 */
#include <iostream>
#include <cstdlib>

using namespace std;

int
main(void) {
  int i;
  float f;
  
  do {
    cout << "Entre un entero y un flotante separado con espacios: ";
    cout.flush();
    cin >> i >> f;

    if (cin) break;

    cerr << "Digite correctamente los datos" << endl;

    cin.clear();
    
    while(cin.get() != '\n');
    
    cin.get();
      
  } while (true);

  i += 2;
  f += 2.02f;

  cout << i << " " << f << endl;;

  return EXIT_SUCCESS;
}
