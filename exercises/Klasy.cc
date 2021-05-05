#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;


class Prostokat{
public:
  int a,b;
  double pole;


  Prostokat(){
    a = 1;
    b = 1;
    sprawdzCzyKwadrat();
  }

  Prostokat(int a, int b){
    this->a = a;
    this->b = b;
    sprawdzCzyKwadrat();
  }

  bool sprawdzCzyKwadrat(){
    if(a == b){
      czyKwadrat = true;
    }else{
      czyKwadrat = false;
    }

    return czyKwadrat;
  }

private:
    bool czyKwadrat;
};

int main(){

  Prostokat kwadracik = Prostokat();

  return 0;
}
