#include <iostream>

using namespace std;

int main() {

  int a, b, control;
  
  while(cin){
    cin >> a;
    cin >> b;

    if(a==-1){
      if((control%2==0)&&(b==1)){
        cout << "digito de control correcto" << endl;
	break;
      }
      else if((control%2==0)&&(b==0)){
        cout << "digito de control incorrecto" << endl;
	break;
      }
      else if((control%2!=0)&&(b==1)){
        cout << "digito de control incorrecto" << endl;
	break;
      }
      else if((control%2!=0)&&(b==0)){
	cout << "digito de control correcto" << endl;
	break;
      }
    }
    
    if((a%2==0)&&(b==0)){
      cout << "bien" << endl;
    }
    else if((a%2!=0)&&(b==0)){
      cout << "fallo" << endl;
    }
    else if((a%2==0)&&(b!=0)){
      cout << "fallo" << endl;
      control = control + 1;
    }
    else if((a%2!=0)&&(b!=0)){
      cout << "bien" << endl;
      control = control + 1;
    }
  }
}
