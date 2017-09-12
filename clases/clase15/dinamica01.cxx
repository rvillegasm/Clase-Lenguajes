#include <iostream>

int x;

// funcion principal
int main(void) {
  bool t = true;
  const signed short int Y = 1000;
  
  int* pX = NULL; // = &x;
  bool* pT = &t;
  const signed short int* pY = &Y;

  std::cout << "pX: " << std::hex << pX
            << " pT: " << std::hex << pT
            << " pY: " << std::dec << pY
            << std::endl;

  std::cout << "*pX: " << *pX
            << " *pT: " << *pT
            << " *pY: " << *pY
            << std::endl;

  return 0;
}
  
