#include<stdio.h>
#include<iostream>
using namespace std;


int main(){
  int a = 6;
  int binary[a];
  int i=0;

  int modulo;

  do{
    modulo = a%2;
    binary[i]=modulo;
    //cout<<binary[i];
    a /= 2;
    i++;
  }while(a>0);

  for(int a=i-1; a>=0; a--)
    cout<<binary[a];




  return 0;
}
