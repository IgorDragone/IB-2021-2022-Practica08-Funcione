/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file i_th.cc
  * @author Igor Dragone alu0101469652@ull.edu.es
  * @date Nov 21 2021
  * @brief The program, given an integer number i and a sequence of natural numbers x1, …, xn, prints xi.
  * @bug There are no known bugs */

#include <iostream>
#include <vector>

void EvaluacionNumeroEnPosicionN(std::vector<int>& mi_vector, int numero_de_secuencia) {
    std::cout << "At the position " << numero_de_secuencia << " there is a(n) " << mi_vector[numero_de_secuencia - 1] << ".";
}

int main() {
  std::vector<int> mi_vector;
  int numero_de_secuencia, numero_introducido;
  std::cin >> numero_de_secuencia;
  while (true) {
    std::cin >> numero_introducido;
    if (numero_introducido == -1) {
      mi_vector.push_back(numero_introducido);
      break;
    }
    else {
      mi_vector.push_back(numero_introducido);
    }
  }
  EvaluacionNumeroEnPosicionN(mi_vector, numero_de_secuencia);
  std::cout << std::endl;
}