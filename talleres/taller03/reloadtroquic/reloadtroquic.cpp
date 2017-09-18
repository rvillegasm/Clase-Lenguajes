#include <iostream>

using namespace std;

int main() {
  char baldosas[] = "aBnJoQlMzHoPaVvNDFaB";

  for(int i=0; i<(sizeof(baldosas)/sizeof(char)); i++) {
    if(i == 0) {
      i++;
    }
    else if((baldosas[i]<=90 && baldosas[i+1]<=90 && baldosas[i-1]<= 90)
	    || baldosas[i]>=97 && baldosas[i+1]>=97 && baldosas[i-1]>=97) {

      int error = (i/2)+1;
      cout << "hay una baldosa mala en "
	   << error
	   << endl;
      
    }
  }
  return 0;
}
