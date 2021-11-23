/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file divisors.cc
  * @author Igor Dragone alu0101469652@ull.edu.es
  * @date Nov 20 2021
  * @brief The program prints in order all the divisors of a given number.
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>

void ImprimirDivisores(int numero_insertado) {
  std::cout << "divisors of " << numero_insertado << ":"; 
  double raiz_del_numero = sqrt(numero_insertado);
  for (int i= 1; i < (raiz_del_numero); ++i) {
    if (numero_insertado % i == 0) {
      std::cout << " " << i;
    }
  } 
  for (int raiz_del_numero = sqrt(numero_insertado); raiz_del_numero > 0; --raiz_del_numero) {
    if (numero_insertado % raiz_del_numero == 0) {
      std::cout << " " <<  numero_insertado / raiz_del_numero;
    }
  } 
}

int main() {
//  std::cout << "Este programa imprime todos los divisores de números dados." << std::endl;
  bool condicion_bucle = 0;
  while (condicion_bucle == 0) {
    int numero_insertado;
    std::cin >> numero_insertado;
    if (!std::cin) {
      break;
    }
    else {
      ImprimirDivisores(numero_insertado);
      std::cout << std::endl;
    }
  }
}