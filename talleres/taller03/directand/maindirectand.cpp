#include <iostream>
#include "directand.h"

using namespace std;

int main(void) {
  int a = 10000;
  int b = 20000;
  int c, d, e;

  cin >> c >> d>> e;

  if(directand((a=c-d)>0, (b=d-e)>0)) {
    cout << "a y b son mayores que cero" << endl;
  }

  cout << "a: " << a
       << " b: " << b
       << endl;

  return 0;
}
