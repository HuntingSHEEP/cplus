#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;

void CC(){
  int *a = (int*) malloc(sizeof(int));
  cout<<"WYPISANIE WSKAŹNIKA"<<endl;
  printf("%p\n", a);
  cout<<a<<endl;

  cout<<"\nWYPISANIE ZAWARTOŚCI WSKAŹNIKA"<<endl;
  printf("%d\n", *a);
  cout<<*a<<endl;

  double d = 2.451;
  cout<<"\nWYPISANIE DOUBLE"<<endl;
  printf("%lf\n", d);
  cout<<d<<endl;

  int dd;
  cout<<"POBRANIE ZMIENNEJ INT (Podaj proszę liczbę całkowitą)"<<endl;
  scanf(" %d", &dd);
  cout<<"dd: "<<dd<<"\nPonownie podaj liczbę całkowitą"<<endl;
  cin>> dd;
  cout<<"dd: "<<dd<<endl;


  double z;
  cout<<"POBRANIE ZMIENNEJ DOUBLE (Proszę podać)"<<endl;
  scanf(" %lf", &z);
  cout<<"z: "<<z<<"\nProszę podać drugą liczbę zmiennoprzecinkową"<<endl;
  cin>> z ;
  cout<<"z: "<<z<<endl;
}


int main(){
  CC();
  return 0;
}
