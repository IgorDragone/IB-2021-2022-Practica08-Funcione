/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file letra_a.cc
  * @author Igor Dragone alu0101469652@ull.edu.es
  * @date Nov 21 2021
  * @brief The program reads a sequence of characters ended in a dot and tells if the sequence has any lowercase ‘a’ or not.
  * @bug There are no known bugs */

#include <iostream>
#include <string>

void ContarLetraA(std::string& palabra_insertada) {
bool letra_a = 0;
for (char character: palabra_insertada) {
  if (character == 'a') {
    letra_a = 1;
    break;
  }
  }
  if (letra_a == 1) {
    std::cout << "yes";
  }
  else {
    std::cout << "no";
  }
}

int main() {
  std::string palabra_insertada;
  std::getline(std::cin, palabra_insertada);
  ContarLetraA(palabra_insertada);
  std::cout << std::endl;
}
