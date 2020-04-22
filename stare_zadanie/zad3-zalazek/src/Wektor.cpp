#include "Wektor.hh"
#include <cmath>

template <class TYP, int ROZMIAR>
std::istream& operator >> (std::istream &Strm, Wektor<TYP,ROZMIAR> &Wek)
{
  for(int i=0;i<ROZMIAR;++i)
    {
      Strm>>Wek[i];
    }
  return Strm;
}

template <class TYP, int ROZMIAR>
std::ostream& operator << (std::ostream &Strm, const Wektor<TYP,ROZMIAR> &Wek)
{
  for(int i=0;i<ROZMIAR;++i)
    {
      Strm<<Wek[i]<<" ";
    }
  return Strm;
}

/*double Wektor:: dlugosc() const
{
  double wyn=0;
  for (int i=0;i<ROZMIAR;++i)
    {
      wyn += tab[i] * tab[i]; 
    }
  return sqrt(wyn);
}*/

template <class TYP, int ROZMIAR>
TYP Wektor<TYP,ROZMIAR>::operator * (const Wektor<TYP,ROZMIAR> & W2) const /*mnozenie wektorow iloczyn skalarny */
{
  TYP wyn;
  for (int i=0;i<ROZMIAR;++i) {
    // wyn = wyn + tab[i] * W2.tab[i];
    wyn += tab[i] * W2.tab[i]; //Obie ok
  }
  return wyn;
}

template <class TYP, int ROZMIAR>
Wektor<TYP,ROZMIAR> Wektor<TYP,ROZMIAR>::operator * (TYP skalar) const /*mnozeniewektoraprzezliczbe*/
{//W*2
  Wektor<TYP,ROZMIAR> wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      wyn[i]=tab[i]*skalar;
    }
  return wyn;
}
template <class TYP, int ROZMIAR>
Wektor<TYP,ROZMIAR> Wektor<TYP,ROZMIAR>::operator / (TYP skalar) const
{// W/2
  Wektor<TYP,ROZMIAR> wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      wyn[i]=tab[i]/skalar;
    }
  return wyn;
}

template <class TYP, int ROZMIAR>
Wektor<TYP,ROZMIAR> operator * (TYP skalar, const Wektor<TYP,ROZMIAR> & W2) /*mnozenie liczby przez wektor */
{//2*W
  Wektor<TYP,ROZMIAR> wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      wyn[i]=skalar*W2[i];
    }
  return wyn;
}

template <class TYP, int ROZMIAR>
Wektor<TYP,ROZMIAR>  Wektor<TYP,ROZMIAR>::operator + (const Wektor<TYP,ROZMIAR> & W2) const /*dodawaniewektorow */
{//dziala bez &
  Wektor<TYP,ROZMIAR> wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      wyn[i]=tab[i]+W2[i];
    }
  return wyn;
}

template <class TYP, int ROZMIAR>
Wektor<TYP,ROZMIAR>  Wektor<TYP,ROZMIAR>::operator - (const Wektor<TYP,ROZMIAR> & W2) const /*odejmowaniewektoro*/
{
  Wektor<TYP,ROZMIAR> wyn;
  for(int i=0;i<ROZMIAR;++i)
    {
      wyn[i]=tab[i]-W2[i];
    }
  return wyn;
}

/*Wektor iloczyn_wektorowy (Wektor & W1,Wektor & W2) tylko wektory o rozmiarz 3 
{
  Wektor wyn;
  wyn[0]=W1[1]*W2[2]-W1[2]*W2[1];
  wyn[1]=-W1[0]*W2[2]+W1[2]*W2[0];
  wyn[2]=W1[0]*W2[1]-W1[1]*W2[0];
  return wyn;
  }*/


