/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file approximation_of_a.cc
  * @author Igor Dragone alu0101469652@ull.edu.es
  * @date Nov 21 2021
  * @brief The program, for every given natural number n, prints the approximation of e that we get by adding the n first terms of the series above.
  * @bug There are no known bugs */

#include <iostream>
#include <iomanip>

double AproximacionAE(int numero) {
  std::cout << std::fixed;
  std::cout << std::setprecision(10);
  double resultado = 1;
  double sumatorio = 1;
  double suma = 0;
  if (numero == 0) {
    resultado = 0;
  }
  else {
    for (int i = 1; i < numero; ++i) {
      sumatorio = sumatorio * i;
      suma = (1)/(sumatorio);
      resultado = resultado + suma;
    }
  }
    return resultado;
  }

int main() {
  int numero_introducido;
  while(true) {
    std::cin >> numero_introducido;
    if(!std::cin) {
      return 1;
    }
    else {
      std::cout << "With " << numero_introducido << " term(s) we get " << AproximacionAE(numero_introducido) << "." << std::endl;
    }
  }
}