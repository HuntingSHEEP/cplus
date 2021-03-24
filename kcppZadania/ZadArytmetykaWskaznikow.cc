#include <stdio.h>
#include <iostream>
using namespace std;

void funkcja1(){
  int a =1;
  int *p = &a; //inicjalizacja zmiennej
  cout<<"  *p: "<<*p<<endl;

  cout<<"w trakcie p++: "<<p++<<endl;
  cout<<"zaraz po  p++: "<<p<<endl;

  cout<<"w trakcie ++p: "<<++p<<endl;
  cout<<"zaraz po  ++p: "<<p<<endl;

  //cout<<"w trakcie ++*p: "<<++*p<<endl;  zrzut pamięci
  //cout<<"zaraz po  ++*p: "<<*p<<endl;

  /* też zrzuty pamięci
  cout<<"w trakcie ++(*p): "<<++(*p)<<endl;
  cout<<"zaraz po  ++(*p) (*p): "<<*p<<endl;
  cout<<"zaraz po  ++(*p) (samo p): "<<p<<endl;
  */

  /*zrzut pamięci
  cout<<"w trakcie ++*(p): "<<++*(p)<<endl;
  cout<<"zaraz po  ++*(p) (*p): "<<*p<<endl;
  cout<<"zaraz po  ++*(p) (samo p): "<<p<<endl;
  */

  cout<<"w trakcie *p++: "<<*p++<<endl;
  cout<<"zaraz po *p++: (*p): "<<*p<<endl;
  cout<<"zaraz po *p++: (samo p): "<<p<<endl;

/* stack smashing
  cout<<"w trakcie (*p)++: "<<(*p)++<<endl;
  cout<<"zaraz po (*p)++: (*p): "<<*p<<endl;
  cout<<"zaraz po (*p)++: (samo p): "<<p<<endl;
  */


  cout<<"w trakcie *(p)++: "<<*(p)++<<endl;
  cout<<"zaraz po *(p)++: (*p): "<<*p<<endl;
  cout<<"zaraz po *(p)++: (samo p): "<<p<<endl;

  cout<<"w trakcie *++p: "<<*++p<<endl;
  cout<<"zaraz po *++p: (*p): "<<*p<<endl;
  cout<<"zaraz po *++p: (samo p): "<<p<<endl;

  cout<<"w trakcie *(++p): "<<*(++p)<<endl;
  cout<<"zaraz po *(++p): (*p): "<<*p<<endl;
  cout<<"zaraz po *(++p): (samo p): "<<p<<endl;
}

int main(){
  funkcja1();


  return 0;
}
