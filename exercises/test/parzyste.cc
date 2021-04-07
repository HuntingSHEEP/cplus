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

  return 0;
}
