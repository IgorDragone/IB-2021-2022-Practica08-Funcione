/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file first_position.cc
  * @author Igor Dragone alu0101469652@ull.edu.es
  * @date Nov 21 2021
  * @brief The program reads a sequence of natural numbers and prints the position of the first even number.
  * @bug There are no known bugs */

#include <iostream>

int PrimerNumeroPar() {
  int position = 0;
  int numero = 1;
  while ((numero % 2) != 0) {
    std::cin >> numero;
    ++position;
  }
  return position;
}

int main() {
  std::cout << PrimerNumeroPar() << std::endl;
  return 0;
}
