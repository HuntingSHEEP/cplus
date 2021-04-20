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

void bitowo(int q){
  unsigned char a = q, b = 1;

    // The result is 00000001
    printf("a = %d, b = %d\n", a, b);

    if((a&b) == 0)
      cout<<"Parzyste"<<endl;
    else if((a&b) == 1)
      cout<<"Nieparzyste"<<endl;


}

int main(){

  int a;
  cout<<"Podaj liczbe"<<endl;
  scanf(" %d", &a);

  int f;
  cout<<"wybierz funkcję [0|1|2]"<<endl;
  scanf(" %d", &f);

  switch (f){
    case 0:
      fun1(a);
      break;
    case 1:
      fun2(a);
      break;
    case 2:
      bitowo(a);
  }


  return 0;
}
