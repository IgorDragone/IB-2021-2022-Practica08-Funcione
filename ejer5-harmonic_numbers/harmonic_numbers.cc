/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic_numbers.cc
  * @author Igor Dragone alu0101469652@ull.edu.es
  * @date Nov 21 2021
  * @brief The program reads a number n and prints the n-th harmonic number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
  * @bug There are no known bugs */

#include <iostream>
#include <iomanip>

double SumaDeNumerosArmonicos(double numero_insertado) {
  std::cout << std::fixed;
  std::cout << std::setprecision(4);
  double suma = 0.0000;
  double numero = 0.0000;
  for (numero_insertado; numero_insertado > 0 ; --numero_insertado) {
    numero = 1 / numero_insertado;
    suma = suma + numero;
  }
  return suma;
}


int main() {
  double numero_insertado;
  std::cin >> numero_insertado;
  std::cout << SumaDeNumerosArmonicos(numero_insertado) << std::endl;
}