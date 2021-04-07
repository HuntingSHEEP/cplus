#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

  int a;
  cout<<"Podaj liczbe"<<endl;
  scanf(" %d", &a);

  if(a%2 == 1){
    cout<<"jest Nieparzysta"<<endl;
  }else{
    cout<<"Parzysta"<<endl;
  }

  const char* b = (a%2 == 0) ? "Parzysta" : "Nieparzysta";
  cout<< ((a%2 == 0) ? "Parzysta" : "Nieparzysta") <<endl;

  return 0;
}
