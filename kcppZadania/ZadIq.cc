#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
  int i = 1;
  int tablica[] =  {1,2,4,5};
  int *q = tablica;

  cout<<"Normalne dostawanie się do zawartości tablicy:"<<endl;
  cout<<q[1]<<endl;
  cout<<*(q+1)<<endl;

  cout<<"\nPrzykład poddany rozwadze: i[q]    ->  "<<i[q]<<endl;;
  cout<<"Równoważny zapis:          *(i+q)  ->  "<<*(i+q)<<endl;
  cout<<"(Przemienność):            *(q+i)  ->  "<<*(q+i)<<endl;
  cout<<"A więc:                    q[i]    ->  "<<*(q+i)<<endl;
  cout<<"Można zaryzykować stwierdzenie, że jeśli int i oraz *q -> {1,2,3}\nto i[q] == q[i]"<<endl;

  /*
  przydkład zastosowania:
   1) Na pewno nadaje się to na zagadkę programistyczną,
   2) gbyby iterować po tablicy wskaźników na tablicę, to możnaby z poziomu pętli dostawać się
      do tego samego indeksu różnych tablic. Wiem, trochę to ograniczone rozwiązanie ale przynajmniej
      można wyciągać wskaźniki w pętli i odczytywać z nich dane. W sumie pod górę i bez sensu bo da się
      to zrobić znacznie prościej i elastyczniej.
  */


  return 0;
}
