#include <iostream>

// funcion principal
int main(void) {
  bool t = true;
  const signed short int Y = 1000;
  
  int* pI = new int;
  bool* pB = new bool;
  double* pD = new double;

  *pI = 0;
  *pB = false;
  *pD = 0.0;

  std::cout << "pI: " << std::hex << pI
            << " pB: " << std::hex << pB
            << " pD: " << std::hex << pD
            << std::endl;

  *pI = *pI + 1;
  *pB = true;
  *pD = *pD + 10.01; 
  

   std::cout << "*pI: " << std::dec << *pI
            << " *pB: " << *pB
            << " *pD: " << *pD
            << std::endl;

   delete pI;
   delete pB;
   delete pD;

   std::cout << "*pI: " << std::dec << *pI
            << " *pB: " << *pB
            << " *pD: " << *pD
            << std::endl;
  

  return 0;
}
  
