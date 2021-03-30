#include <stdio.h>
#include <iostream>
using namespace std;

void funkcja1(){
  cout<<"FUNKCJA1"<<endl;
}

void funkcja2(){
  cout<<"FUNKCJA2"<<endl;
}


int main(int argc, char **argv){
  //dwa inne sposoby wyboru wywolywania funkcji

  // 3 sposób (numer funkcji zamiast nazwy)
  
  int a;
  cout<<"(3) Proszę wybrać funkcję: funkcja1() [1] lub funkcja2() [2]"<<endl;
  cin >> a;

  if (a == 1)
   funkcja1();
  else if (a == 2)
   funkcja2();

  // 4 sposób (switch)
  cout<<"(4) Proszę wybrać funkcję: funkcja1() [1] lub funkcja2() [2]"<<endl;
  cin >> a;

  switch (a){
    case 1:
      funkcja1();
      break;
    case 2:
      funkcja2();
  }



  return 0;
}
