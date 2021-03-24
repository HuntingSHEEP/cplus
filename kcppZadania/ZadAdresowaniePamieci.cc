#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
  /*
  Sprawdzenie kolejności adresowania zmiennych w pamięci.
  Na podstawie zmiennej typu int.
  W moim przypadku adresowanie było rosnące.
  gcc version 9.2.1 20191008 (Ubuntu 9.2.1-9ubuntu2)

  */


  int a = 1;
  int b = 2;
  int c = 3;

  cout <<"Adres a: "<<&a<<endl;
  cout <<"Adres b: "<<&b<<endl;
  cout <<"Adres c: "<<&c<<endl;

  if(&a < &b){
    cout<<"Adresowanie INT jest rosnące!"<<endl;
  }else if(&b < &a){
    cout<<"Adresowanie INT jest malejące!"<<endl;
  }


  return 0;
}
