#include <iostream>

using namespace std;

extern "C" void owca1(){
  printf("\njestem owcą\n");
}

extern "C" void owca2(){
  printf("\nnie jestem owcą, tylko baranem\n");
}

void xDGen(){
  printf("Podaj liczbę całkowitą:");
  int r;
  scanf("%d", &r);
  for(int i=0; i<r; i++)
    cout<<"XD"<<endl;
}

void dodaj(){
  printf("Podaj proszę pierwszą liczbę: ");
  double x;
  scanf(" %lf", &x);

  printf("Podaj proszę drugą liczbę: ");
  double d;
  scanf(" %lf", &d);
  printf("wynik dodawania %lf", x+d);
}

void tree(){
  printf("Podaj proszę liczbę całkowitą: ");
  int t;
  scanf("%d", &t);
  for(int i=0; i<t; i++){
    for(int a=0; a< t-i; a++)
      printf(" ");

    for(int b=0; b<i+1; b++)
      printf("* ");

    printf("\n");
  }
}



int main(int argc, char* argv[]){
  cout<<"ilość argumentów: "<<argc<<endl;
  for(int i=0; i<argc; i++){
    cout<<"argument: "<<*(argv + i)<<endl;
  }


  for(int i=0; i<argc; i++){
    string argument = (*(argv + i));

    if(argument.compare("owca1") == 0)
      owca1();
    else if(argument.compare("owca2") == 0)
      owca2();
    else if(argument.compare("XD") == 0)
      xDGen();
    else if(argument.compare("plus") == 0)
      dodaj();
    else if(argument.compare("tree") == 0)
      tree();
  }





  return 0;
}
