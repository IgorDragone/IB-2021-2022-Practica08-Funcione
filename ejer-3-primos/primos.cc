/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file primos.cc
  * @author Igor Dragone alu0101469652@ull.edu.es
  * @date Nov 20 2021
  * @brief The program reads a sequence of natural numbers and, for each one, tells if it is a prime number or not.
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>

void EsPrimo(int numero_introducido) {
  double raiz_del_numero = sqrt(numero_introducido);
  if (numero_introducido > 1) {
    bool primo = 1;
    for (int i= 2; i < (raiz_del_numero); ++i) {
      if (numero_introducido % i == 0) {
       primo = 0;
      }
    }
    if (primo == 0) {
      std::cout << numero_introducido << " is not prime";
    }
    else {
      std::cout << numero_introducido << " is prime";
    }
   /** else {     
      for (int raiz_del_numero = sqrt(numero_introducido); raiz_del_numero > 1; --raiz_del_numero) {
        if (numero_introducido % raiz_del_numero == 0) {
          primo = 0;
        }
      }
      if (primo == 0) {
        std::cout << numero_introducido << " is not prime";      
      }
      else {
        std::cout << numero_introducido << " is prime";
      }
    } */
  }
  else {
    std::cout << numero_introducido << " is not prime";
  } 
} 

int main() {
  int numero_de_evaluaciones;
  std::cin >> numero_de_evaluaciones;
  for (int numero_de_iteraciones = 0; numero_de_iteraciones < numero_de_evaluaciones; ++numero_de_iteraciones) {
    int numero_introducido;
    std::cin >> numero_introducido;
    EsPrimo(numero_introducido);
    std::cout << std::endl;
  }   
}