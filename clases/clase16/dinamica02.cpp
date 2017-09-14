#include <iostream>

// funcion principal
int main(void) {
  bool t = true;
  const signed short int Y = 1000;
  
  int* pI = new int;
  bool* pB = new bool;
  double* pD = new double;

  std::cout << "pI: " << std::hex << pI
            << " pB: " << std::hex << pB
            << " pD: " << std::hex << pD
            << std::endl;

  std::cout << "*pI: " << *pI
            << " *pB: " << *pB
            << " *pD: " << *pD
            << std::endl;

  return 0;
}
  
