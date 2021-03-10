#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char a[] = "Wiem wszytko";
  char b[] = "Nic nie wiem";
  char c[100];

  strcpy(c, a);
  strcat(c, " i basta.");
  cout<<c<<endl;

  strcpy(c, a);
  strcat(c, " albo ");
  strcat(c, b);
  cout<<c<<endl;


  return 0;
}
