/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file words.cc
  * @author Igor Dragone alu0101469652@ull.edu.es
  * @date Nov 20 2021
  * @brief The program reads three words a, b and c, and prints a line with c, b and a in this order.
  * @bug There are no known bugs
  */

#include <iostream>
#include <string>

void CambiarOrdenPalabras(std::string& palabra_1, std::string& palabra_2, std::string& palabra_3) {
    std::cout << palabra_3 << " " << palabra_2 << " " << palabra_1;
}

int main() {
  // std::cout << "Este programa imprime tres palabras introducidas en orden contrario." << std::endl;
  std::string palabra_introducida_1, palabra_introducida_2, palabra_introducida_3;
  std::cin >> palabra_introducida_1 >> palabra_introducida_2 >> palabra_introducida_3;
  CambiarOrdenPalabras(palabra_introducida_1, palabra_introducida_2, palabra_introducida_3);
  std::cout << std::endl;
}