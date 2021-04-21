#include<stdio.h>
#include<iostream>
using namespace std;


class Mebel{
  public:
    int wysokosc=0;
    int szerokosc=0;

    void wypisz(){
      cout<<"Wysokosc: "<<wysokosc<<endl;
      cout<<"Szerokosc: "<<wysokosc<<endl;
      cout<<"Powloka: "<<wysokosc<<endl;
      cout<<"Gatunek: "<<wysokosc<<endl;
    }

  protected:
    int powloka=1;

  private:
    int gatunek=1;
};





int main(){

  Mebel krzeslo;
  cout<<krzeslo.wysokosc<<endl;


  Mebel *stolik = new Mebel();
  cout<<stolik->szerokosc<<endl;

  stolik->wypisz();



  return 0;
}
