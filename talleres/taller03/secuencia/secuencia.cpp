#include <iostream>

using namespace std;

int main() {

  float prom;
  float factor;
  float valor[5];
  cout << "entre un factor de crecimiento" << endl;
  cin >> factor;
  
  for(int i=0; i<5; i++) {
    cout << "entre un valor" << endl;
    cin >> valor[i];
    prom += valor[i];
  }

  prom = prom/5;
  
  for(int i=0; i<5; i++) {
    if(valor[i] > prom) {
      prom = prom + valor[i] / factor;
    }
    else {
      prom = prom + valor[i] * factor;
    }
    cout << "el promedio es: " << prom << endl;
  }
}
