/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic_numbers2.cc
  * @author Igor Dragone alu0101469652@ull.edu.es
  * @date Nov 21 2021
  * @brief The program reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.
  * @bug There are no known bugs */

#include <iostream>
#include <iomanip>

double NumeroArmonico1(double numero_insertado) {
  std::cout << std::fixed;
  std::cout << std::setprecision(10);
  double suma = 0.0000;
  double numero = 0.0000;
  for (numero_insertado; numero_insertado > 0 ; --numero_insertado) {
    numero = 1 / numero_insertado;
    suma = suma + numero;
  }
  return suma;
}

double NumeroArmonico2(double numero_insertado) {
  std::cout << std::fixed;
  std::cout << std::setprecision(10);
  double suma = 0.0000;
  double numero = 0.0000;
  for (numero_insertado; numero_insertado > 0 ; --numero_insertado) {
    numero = 1 / numero_insertado;
    suma = suma + numero;
  }
  return suma;
}

int main() {
  bool condicion_bucle = 0;
  while (condicion_bucle == 0) {
    double numero_insertado_1, numero_insertado_2;
    std::cin >> numero_insertado_1 >> numero_insertado_2;
      if (!std::cin) {
        break;
      }
      else {
        std::cout << NumeroArmonico1(numero_insertado_1) - NumeroArmonico2(numero_insertado_2) << std::endl;
    }
  }
}