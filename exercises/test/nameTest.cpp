#include <stdio.h>
#include <iostream>

namespace itsMySafeSpace {
  double fi = 5;
  double r = 2;

  double myFunction(double a, double b){
    return fi*r;
  }
}

using namespace std;
using namespace itsMySafeSpace;

int main(){

  cout << "hallo, its fi: " << fi << ", r: "<< r <<endl;
  cout << "now the function: " << myFunction(fi, r) << endl;
  return 0;
}
