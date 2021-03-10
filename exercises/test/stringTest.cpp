#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char a[5] = "ala";
  char b[10] = "kot";

  cout <<"ala: " << a << endl;
  cout <<"strcpy(b, a): " << strcpy(b, a) << endl;
  strcpy(b, "kot");
  cout <<"strcat(b, a): " <<strcat(b, a) << endl;
  strcpy(b, "kot");
  cout <<"strcat(a, b): " <<strcat(a, b) << endl;

  cout << "\na: "<<a<<", b: "<<b<<endl;
  cout <<"len(a):"<<strlen(a)<<", len(b):" << strlen(b)<<endl;

  cout<<"strcmp(a,b): "<<strcmp(a,b)<<endl;


  return 0;
}
