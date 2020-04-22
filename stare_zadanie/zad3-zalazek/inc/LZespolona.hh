#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH
#include <iostream>

struct  LZespolona {
  double   re;    
  double   im;
  LZespolona operator = (double  Liczba); //Tutaj? Dziala
  LZespolona operator +=(LZespolona Skl);
};

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona operator /(LZespolona Skl, double rz);
LZespolona utworz (double re, double im);
LZespolona sprzezenie (LZespolona  Skl);
double modul (LZespolona Skl);
bool operator == (LZespolona  Skl1,  LZespolona  Skl2);
bool operator != (LZespolona  Skl1,  LZespolona  Skl2);
std::istream & operator >>(std::istream & str,LZespolona &Skl);
std::ostream & operator <<(std::ostream & str, LZespolona SKl);

//LZespolona operator = (LZespolona Skl1,LZespolona Skl2);//Tutaj ? Nie dziala
//LZespolona operator += (LZespolona Skl1,LZespolona Skl2);
#endif
