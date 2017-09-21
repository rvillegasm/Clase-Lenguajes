#include <iostream>

using namespace std;

#define MAX(x,y) (x >= y ? x : y)

int main(void) {
  int a, b;

  while(cin >> a >> b) {
    cout << MAX(a,b) << endl;
  }

  return EXIT_SUCCESS;
}
