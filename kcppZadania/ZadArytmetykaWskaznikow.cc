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

void funkcja1_1(){
  cout<<"TABLICA"<<endl;
  int a[] = {1,2,3,4,5,6,7};
  int *p = a; //inicjalizacja zmiennej
  cout<<"  *p: "<<*p<<endl;

  cout<<"w trakcie p++: "<<p++<<endl;
  cout<<"zaraz po  p++: "<<p<<endl;

  cout<<"w trakcie ++p: "<<++p<<endl;
  cout<<"zaraz po  ++p: "<<p<<endl;

  //cout<<"w trakcie ++*p: "<<++*p<<endl;  zrzut pamięci
  //cout<<"zaraz po  ++*p: "<<*p<<endl;


  cout<<"w trakcie ++(*p): "<<++(*p)<<endl;
  cout<<"zaraz po  ++(*p) (*p): "<<*p<<endl;
  cout<<"zaraz po  ++(*p) (samo p): "<<p<<endl;



  cout<<"w trakcie ++*(p): "<<++*(p)<<endl;
  cout<<"zaraz po  ++*(p) (*p): "<<*p<<endl;
  cout<<"zaraz po  ++*(p) (samo p): "<<p<<endl;


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

void funkcja2(){
  cout<<"Funkcja2"<<endl;
  int a = 0;
  int b = 0;
  int c = 0;

  cout<<"adresy"<<endl;
  cout<<&a<<endl;
  cout<<&b<<endl;
  cout<<&c<<endl;

  cout<<&b - &a<<endl;

  cout<<"\n1. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

  b=10;
  cout<<"2. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

  *(&b + 1) = b+10;
  cout<<"3. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

  b+=*(&b + 1);
  cout<<"4. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

  *(&b - 1) = 2 * *(&b + 1);
  cout<<"5. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

  b += * (&b + 1);
  cout<<"6. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

  *(&b + 1) += *(&b - 1);
  cout<<"7. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

  b+=20;
  cout<<"8. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

  *(&b - 1) *= 2;
  cout<<"9. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

  b += *(&b - 1)/4;
  cout<<"10. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;

  //cout<<"4. A, B, C: "<<a<<"\t"<<b<<"\t"<<c<<endl;


}
int main(){
  //funkcja1();
  //funkcja1_1();
  funkcja2();

  return 0;
}
