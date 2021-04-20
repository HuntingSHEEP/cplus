#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;

string plik = "plikCC.txt";

void zapis(){
  cout<<"Zapis do pliku"<<endl;
  ofstream zapisDoPliku(plik);
  zapisDoPliku<<"no dzień dobry, "<<55<<" do widzenia państwu";
  zapisDoPliku.close();
}

void odczyt(){
  cout<<"Odczyt z pliku"<<endl;
  ifstream odczytanie(plik);

  string dane;
  cout<<"z pliku:";

  while(odczytanie>>dane)
    cout<<dane<<" ";

  odczytanie.close();
}

int main(){
  zapis();
  odczyt();
  return 0;
}
