#include<stdio.h>
#include<iostream>

using namespace std;
class A;

class B
{
public:
  B(){
    this->b=3;
  }

  int getA(A &obj){return obj.a;}

private:
  int b;
  friend class A;

};

class A
{
public:
  A(){
    this->a=3;
  }

  int getB(B &obj){return obj.b;}

private:
  int a;
//  friend class B;

};






int main(){

  A objA = A();
  B objB = B();


  return 0;
}
