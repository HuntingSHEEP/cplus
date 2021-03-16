#include<iostream>

using namespace std;

int fWartosc(){
  return 2;
}

void fReferencja(int *x){
  int na = 55;
  (*x) = na;
}

int *fWskaznik(){
  int *q = (int*) malloc(sizeof (int));
  (*q) = 112;
  return q;
}

int *fTablica(){
  int rozmiar = 10;
  int *tablica = (int*) malloc(sizeof (int)*rozmiar);
  for(int i=0; i<rozmiar; i++)
    (*(tablica + i)) = i+3;
  return tablica;
}


int main(){

  int a = fWartosc();
  int b;
  fReferencja(&b);

  int *c = fWskaznik();
  int *mojaNowaTablica = fTablica();

  cout<<"Pierwsza funkcja: "<<a<<endl;
  cout<<"Druga funkcja: "<<b<<", adres zmiennej: "<<&b<<endl;
  cout<<"Trzecia funkcja: "<<*c<<", adres zmiennej: "<<c<<endl;

  for(int i=0; i<10; i++)
    cout<<"Czwarta funkcja:("<<i<<") :"<<*(mojaNowaTablica+i)<<endl;

  return 0;
}
