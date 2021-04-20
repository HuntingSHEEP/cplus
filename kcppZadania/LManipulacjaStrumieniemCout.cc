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
  cout<<"POBRANIE ZMIENNEJ INT"<<endl;
  scanf(" %d", &dd);
  cout<<"dd: "<<dd<<endl;
  cin>> dd;
  cout<<"dd: "<<dd<<endl;


  double z;
  cout<<"POBRANIE ZMIENNEJ DOUBLE"<<endl;
  scanf(" %lf", &z);
  cout<<"z: "<<z<<endl;
  cin>> z ;
  cout<<"z: "<<z<<endl;





}

void zadanie(){
  double r = 3.14156351;
  int m = 23;

  cout<<"SETW(5)"<<setw(5)<<endl;
  cout<<"dwa"<<endl;

  cout<<setprecision(1)<<r<<endl;
  cout<<setprecision(2)<<r<<endl;
  cout<<setprecision(5)<<r<<endl;

  cout<<setfill('P')<<r<<endl;
  cout<<setw(9)<<setfill('P')<<r<<endl;

  cout<<"\nFIXED"<<fixed<<endl;
  cout<<r<<endl;

  cout<<"\nSCIENTIFIC"<<scientific<<endl;
  cout<<r<<endl;

  cout<<"\nDEC"<<dec<<endl;
  cout<<r<<", "<<m<<endl;

  cout<<"\nHEX"<<hex<<endl;
  cout<<r<<", "<<m<<endl;

  cout<<"\nHEXFLOAT"<<hexfloat<<endl;
  cout<<r<<", "<<m<<endl;

  cout<<"\nOCT"<<oct<<endl;
  cout<<r<<", "<<m<<endl;

}


int main(){

  CC();

  return 0;
}
