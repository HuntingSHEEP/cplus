#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;


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

void output(){
  cout<<"\n========================"<<endl;

  int a = 3;
  double d = 3.1415;

  double wynik = a*d;


  cout<<"Wynik naszego działania: "<<setprecision(6)<<wynik<<" jest niepoprawny ale:"<<endl;
  wynik *= 2;
  cout<<"output:"<<setw(10)<<setprecision(6)<<wynik<<setw(7)<<"T:"<<setw(10)<<wynik<<endl;
  wynik *= 3;
  cout<<"output1:"<<setw(9)<<setprecision(4)<<wynik<<setw(7)<<"T:"<<setw(10)<<wynik<<endl;
  wynik *= 2;
  cout<<"output2:"<<setw(9)<<setprecision(4)<<wynik<<setw(7)<<"T:"<<setw(10)<<wynik<<endl;
  wynik /= 2.3;
  cout<<"output2:"<<setw(9)<<setprecision(4)<<wynik<<setw(7)<<"T:"<<setw(10)<<wynik<<endl;


  cout<<"\n========================"<<endl;
}

int main(){

  //zadanie();
  output();

  return 0;
}
