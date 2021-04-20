#include<stdio.h>
#include<iostream>
using namespace std;

void getTable0(int *tablePointer, int tableSize){
  for(int i=0; i<tableSize; i++)
    cout<<" i "<<i<<": "<<*(tablePointer+i)<<endl;
}

int main(){

  //to działa dobrze
  int mojaTablica[] = {0,1,2,3,4,5};
  cout<<sizeof(mojaTablica)/sizeof(mojaTablica[0])<<endl;

  getTable0(mojaTablica,sizeof(mojaTablica)/sizeof(mojaTablica[0]));

  return 0;
}
