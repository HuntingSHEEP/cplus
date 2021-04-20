#include<stdio.h>
#include<iostream>
using namespace std;

int pwr(int a, int n){
  int wynik = 1;
  while(n>0){
    wynik *= a;
    n--;
  }
  return wynik;
}

int main(){
  string binary = "0100";

  int wynik=0;
  for(int i=0; i<binary.length(); i++){
      wynik+= ((int) binary[i] - 48) * pwr(2, binary.length()-1-i);
  }


  cout <<wynik;
  return 0;
}
