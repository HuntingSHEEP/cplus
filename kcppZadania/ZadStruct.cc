#include<stdio.h>
#include<iostream>

using namespace std;


struct szafa{
  string rodzaj;
  string material;
  int wysokosc;
  int szerokosc;
};

int main(){

  szafa regal = {"wisząca", "sosna", 200, 60};

  cout<<regal.rodzaj<<endl;

  return 0;
}
