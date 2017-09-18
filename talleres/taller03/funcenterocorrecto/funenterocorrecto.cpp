#include <iostream>
#include <limits>

using namespace std;

int leerEnteroCorrecto(int a);

int main(void) {

  int a;

  cout << "leer a" << endl;

  a = leerEnteroCorrecto(a);

  int b;

  cout << "leer b" << endl;

  b = leerEnteroCorrecto(b);

  cout << "a: " << a
       << " b: " << b
       << endl;

  return 0;
}

int leerEnteroCorrecto(int entero) {

  cin >> entero;

  while(cin.fail()) {
    cin.clear();
    cin.ignore(numeric_limits< streamsize >::max(), '\n');
    cout << "entre un numero valido" << endl;
    cin >> entero;
  }

  return entero;
}
