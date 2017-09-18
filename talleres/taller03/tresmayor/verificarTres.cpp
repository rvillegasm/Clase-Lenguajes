#include <iostream>
#include "tresMayor.h"

using namespace std;

int main() {

  int a, b, c;

  for(int i=0; i<4; i++) {
    
    cout << "primer numero" << endl;
    cin >> a;
    cout << "segundo numero" << endl;
    cin >> b;
    cout << "tercer numero" << endl;
    cin >> c;

    int mayor = tresMayor(a, b, c);

    cout << "el mayor es: "
	 << mayor << endl;
  }

  return 0;
}
