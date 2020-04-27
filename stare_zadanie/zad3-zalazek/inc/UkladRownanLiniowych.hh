#ifndef UKLADROWNANLINIOWYCH_HH
#define UKLADROWNANLINIOWYCH_HH

#include <iostream>
#include "Macierz.hh"

template <class TYP, int ROZMIAR>
class UkladRownanLiniowych {
  Macierz<TYP,ROZMIAR> A;
  Wektor<TYP,ROZMIAR> B;
public:
  UkladRownanLiniowych(){};
  UkladRownanLiniowych(Macierz<TYP,ROZMIAR> AA, Wektor<TYP,ROZMIAR> BB) : A(AA), B(BB) {} ;
  
  Wektor<TYP,ROZMIAR> Oblicz() const; //Oblicz Metoda Cramera
  
  void zmien_macierz( const Macierz<TYP,ROZMIAR> & AA);
  const Macierz<TYP,ROZMIAR> & wez_macierz() const;
  void zmien_wektor(const Wektor<TYP,ROZMIAR> & BB);
  const Wektor<TYP,ROZMIAR> & wez_wektor()const; 
};

template <class TYP, int ROZMIAR>
std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych<TYP,ROZMIAR> &UklRown);

template <class TYP, int ROZMIAR>
std::ostream& operator << (std::ostream &Strm, const UkladRownanLiniowych<TYP,ROZMIAR> &UklRown);

#endif
