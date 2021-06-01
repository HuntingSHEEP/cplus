#include <iostream>
using namespace std;

class Point{
public:
  double x, y;

  Point (){
    this->x = 0;
    this->y = 0;
  }

  Point(double x, double y){
    this->x = x;
    this->y = y;
  }

  double odleglosc(Point p){
    return (x-p.x)*(x-p.x) + (y-p.y)*(y-p.y);
  }
};

class Figura{
public:
  Point srodek;
  virtual double Pole() = 0;
  virtual void wypiszWymaluj() = 0;
};


class Kwadrat : public Figura{
public:
  double a, b;

  Kwadrat(double a, double b, Point p){
    this->a = a;
    this->b = b;
    this->srodek = p;
  }

  double Pole(){
    return a*b;
  }

  void wypiszWymaluj(){
    cout<<"Kwadrat o polu: "<<Pole()<<endl;
  }

  double dystans(Figura* f){
    cout<<f->srodek.x<<" <X"<<endl;
    cout<<f->srodek.y<<" <Y"<<endl;
    return 1;
  }
};


/*
class Kolo : public Figura{
public:
  double r;
  double pi;

  Kolo(double r, Point p){
    this->r = r;
    this->pi = 3.1415;
    this->srodek = p;
  }

  double Pole(){
    return pi*r*r;
  }

  void wypiszWymaluj(){
    cout<<"Koło o polu: "<<Pole()<<endl;
  }


};
*/




int main(){


  Kwadrat k = Kwadrat(2, 2, Point(0,0));
  Kwadrat k2 = Kwadrat(2, 2, Point(3, 4));
  //Kolo kolo = Kolo(2, Point(0,0));

  k.wypiszWymaluj();
  cout<<"DYSTANS: "<<k.dystans(&k2)<<endl;
  //kolo.wypiszWymaluj();

  return 0;

}
