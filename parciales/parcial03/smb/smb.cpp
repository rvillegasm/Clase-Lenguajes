#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>

using namespace std;

int main(void) {

  int i, j, local, visitante;
  
  while(cin >> i >> j) {
    cin >> visitante >> local;
    i += visitante;
    j += local;
  }

  if(i > j) {
    cout << "ganó visitante" << endl;
  }
  else if(j > i) {
    cout << "ganó local"<< endl;;
  }
  else{
    cout << "Hubo un empate" << endl;
  }

  return 0;
}
