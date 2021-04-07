#include<stdio.h>
#include<iostream>
using namespace std;

void fun1(int a){
  cout<<"FUNKCJA1"<<endl;
  if(a%2 == 1){
    cout<<"jest Nieparzysta"<<endl;
  }else{
    cout<<"Parzysta"<<endl;
  }
}

void fun2(int a){
  cout<<"FUNKCJA2"<<endl;
  const char* b = (a%2 == 0) ? "Parzysta" : "Nieparzysta";
  cout<< ((a%2 == 0) ? "Parzysta" : "Nieparzysta") <<endl;
}

int main(){

  int a;
  cout<<"Podaj liczbe"<<endl;
  scanf(" %d", &a);

  int f;
  cout<<"wybierz funkcję [0|1]"<<endl;
  scanf(" %d", &f);

  switch (f){
    case 0:
      fun1(a);
      break;
    case 1:
      fun2(a);
  }


  return 0;
}
