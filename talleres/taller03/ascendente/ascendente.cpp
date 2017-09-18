#include <iostream>

using namespace std;

int main() {

  int a;
  int b = 0;
  
  for(int i=0; i<5; i++) {
    cin >> a;
    if(a >= b) {
      cout << "+" << endl;
      b = a;
    }
    else {
      cout << "-" << endl;
      b = a;
    }
  }
  return 0;
}
