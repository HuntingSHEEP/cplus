#include<stdio.h>
#include<iostream>
using namespace std;

#define PI 3
#define mul(a, b) (a*b)

#define sklejam(Q, W)\
  int raz##Q 21;





int main(){
  cout<<PI<<endl;
  cout<<mul(2,3)<<endl;

  #ifndef PI
    cout<<"większe od 3"<<endl;
  #elif PI == 3
    cout<<"równe 3"<<endl;
  #else
    cout<<"mniejsze od 3"<<endl;
  #endif



  return 0;
}
