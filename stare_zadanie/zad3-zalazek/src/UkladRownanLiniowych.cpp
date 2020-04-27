#include "UkladRownanLiniowych.hh"

template <class TYP, int ROZMIAR>
std::istream& operator >> (std::istream &Strm, UkladRownanLiniowych<TYP,ROZMIAR> &UklRown)/*wczytanie ukladu*/
{
   Macierz<TYP,ROZMIAR> tmpA;
   Wektor<TYP,ROZMIAR> tmpB;
   Strm>>tmpA>>tmpB;
   UklRown.zmien_macierz(tmpA);
   UklRown.zmien_wektor(tmpB);
   return Strm;
}

template <class TYP, int ROZMIAR>
std::ostream& operator << (std::ostream &Strm, const UkladRownanLiniowych<TYP,ROZMIAR> &UklRown)/*wyswietlenie*/
{
  Strm<<"Macierz A:"<<std::endl<<UklRown.wez_macierz()<<std::endl;
  Strm<<"Wektor B:"<<std::endl<<UklRown.wez_wektor()<<std::endl;
  return Strm;
}

template <class TYP, int ROZMIAR>
Wektor<TYP,ROZMIAR> UkladRownanLiniowych<TYP,ROZMIAR>::Oblicz() const
{
  Wektor<TYP,ROZMIAR> wyn;
  TYP wyznacznik;
  Macierz<TYP,ROZMIAR> T;
  wyznacznik=A.Wyznacznik();
  //if(wyznacznik==0)
  // {std::cerr<<"Wyzacznik glowny "<<wyznacznik<<".Brak rozwiazan."; exit(1);}
  for(int i=0;i<ROZMIAR;++i)
    {
      T=A.transpozycja();
      for(int j=0;j<ROZMIAR;++j)
	{
	  T[i][j]=B[j];
	  wyn[i]=( T.Wyznacznik() ) / wyznacznik;
	}
    }
  return wyn;
}

template <class TYP, int ROZMIAR>
void UkladRownanLiniowych<TYP,ROZMIAR>::zmien_macierz( const Macierz<TYP,ROZMIAR> & AA)//set_A
{
  for(int i=0;i<ROZMIAR;++i)
    {
      for(int j=0;j<ROZMIAR;++j)
	{
	  A[i][j]=AA[i][j];
	}
    }
}

template <class TYP, int ROZMIAR>
const Macierz<TYP,ROZMIAR> & UkladRownanLiniowych<TYP,ROZMIAR>::wez_macierz() const//get_A
{
  return A;
}

template <class TYP, int ROZMIAR>
void UkladRownanLiniowych<TYP,ROZMIAR>::zmien_wektor(const Wektor<TYP,ROZMIAR> & BB)//set_B
{
  for(int i=0;i<ROZMIAR;++i)
    {
      B[i]=BB[i];
    }
}

template <class TYP, int ROZMIAR>
const Wektor<TYP,ROZMIAR> & UkladRownanLiniowych<TYP,ROZMIAR>::wez_wektor()const//get_B
{
  return B;
}
