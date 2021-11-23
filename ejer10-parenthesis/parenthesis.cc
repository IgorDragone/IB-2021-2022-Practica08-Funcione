/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file parenthesis.cc
  * @author Igor Dragone alu0101469652@ull.edu.es
  * @date Nov 21 2021
  * @brief The program, given a sequence made up of only ‘(’ and ‘)’, tell if the parentheses close correctly.
  * @bug There are no known bugs */

#include <iostream>

void EvaluarParentesis(std::string& parentesis) {
  int parentesis_abierto = 0;
  int parentesis_cerrado = 0;
  if (parentesis.back() == '(' || parentesis.front() == ')') {
    std::cout << "no";
  }
  else {
    for (char character: parentesis) {
      if (character == '(') {
        ++ parentesis_abierto;
      }
      if (character == ')') {
        ++ parentesis_cerrado;
      }
      if (parentesis_cerrado > parentesis_abierto) {
        std::cout << "no" << std::endl;
        exit(EXIT_SUCCESS);
      }
    }
    if (parentesis_cerrado == parentesis_abierto) {
      std::cout << "yes";
    }
    else {
      std::cout << "no";
    }
  }
}



int main() {
  std::string parentesis_insertados;
  //std::cin >> parentesis_insertados;
  std::getline(std::cin, parentesis_insertados);
  EvaluarParentesis(parentesis_insertados);
  std::cout << std::endl;
}