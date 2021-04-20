#include<stdio.h>
#include<iostream>
using namespace std;

int rozmiarPetli=3;

void a(){
  int a=0;
  cout<<"while postinkrementacja"<<endl;
  while(a<rozmiarPetli){
    cout<<a++<<endl;
  }

  a=0;
  cout<<"\nwhile preinkrementacja"<<endl;
  while(a<rozmiarPetli){
    cout<<++a<<endl;
  }
}


void b(){
  int a=0;
  cout<<"\ndo-while postinkrementacja"<<endl;
  do{
    cout<<a++<<endl;
  }while(a<rozmiarPetli);

  a=0;
  cout<<"\ndo-while preinkrementacja"<<endl;
  do{
    cout<<++a<<endl;
  }while(a<rozmiarPetli);
}

int c(){
  cout<<"\nFOR: continue"<<endl;
  for(int i=0; i<rozmiarPetli; i++){
    if(i==1)
      continue;
    cout<<i<<endl;
  }

  cout<<"\nFOR: break"<<endl;
  for(int i=0; i<rozmiarPetli; i++){
    if(i==1)
      break;
    cout<<i<<endl;
  }

  cout<<"\nFOR: return"<<endl;
  for(int i=0; i<rozmiarPetli; i++){
    if(i==1)
      return i;
    cout<<i<<endl;
  }



}

int main(){
  a();
  b();
  c();


  return 0;
}
