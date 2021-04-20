#include<stdio.h>
#include<iostream>
using namespace std;

void operatoryArytmetyczne(){
  int a = 1;
  int b = 2;
  int wynik;

  wynik = a+b;
  wynik = a*a + b*a + 2*b;
  wynik = wynik/2;
  wynik *= 3;
  wynik += 1;
  wynik %= 7;
  wynik /= 2;
}

void operatoryPrzypisania(){
  int a = 1;
  int b = a;
  int tablica[] = {3,1,4,1,5};
  a = tablica[1];
  tablica[a] = b*2;

  (*(tablica+3)) = 7;
}


int main(){
  operatoryArytmetyczne();
  operatoryPrzypisania();


  return 0;
}
