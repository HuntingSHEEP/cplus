#include<iostream>
using namespace std;

void swapWskaznik(int*a, int*b){
  int t = *a;
  *a=*b;
  *b=t;
}

int main(){
  int *A = (int*) malloc(sizeof(int));
  int *B = (int*) malloc(sizeof(int));
  *A = 1;
  *B = 2;

  cout<<"Wartości przed (sW): [A,B] >>"<<*A<<", "<<*B<<endl;
  swapWskaznik(A, B);
  cout<<"Wartości PO (sW): [A,B] >>"<<*A<<", "<<*B<<endl;



  return 0;
}
