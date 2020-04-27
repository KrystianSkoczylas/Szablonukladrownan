#include <iostream>
#include "Wektor.hh"
#include "LZespolona.hh"
#include "Macierz.hh"
#include "UkladRownanLiniowych.hh"

using namespace std;
int main()
{
  string a;
  cin>>a;
  if(a!="r" && a!="z")
    {cout<<"Dopuszczalne warianty to r lub z"<<endl; exit(1);}
  
  if(a=="r")
    {
      cout<<"UkladRownanLiniowych 5 Rzeczywiste"<<endl;
      UkladRownanLiniowych <double,5> U;
      Wektor <double,5> blad;
      cin>>U;
      cout<<U;
      cout<<endl<<"Rozwiazanie x = ( ";
      for(int i=0;i<5;++i)
	cout<<"x"<<i+1<<", ";
      cout<<")"<<endl;
      cout<< U.Oblicz()<<endl;
      blad=( U.wez_macierz() * U.Oblicz() -U.wez_wektor() );
      cout<<"Wektor bledu:   Ax-B  = ( "<<blad<<")"<<endl;
    }

  if(a=="z")
    {
      cout<<"UkladRownanLiniowych 5 Zespolone"<<endl;
      UkladRownanLiniowych <LZespolona,5> U;
      Wektor <LZespolona,5> blad;
      cin>>U;
      cout<<U;
      cout<<endl<<"Rozwiazanie x = ( ";
      for(int i=0;i<5;++i)
	cout<<"x"<<i+1<<", ";
      cout<<")"<<endl;
      cout<< U.Oblicz()<<endl;
      blad=( U.wez_macierz() * U.Oblicz() -U.wez_wektor() );
      cout<<"Wektor bledu:   Ax-B  = ( "<<blad<<")"<<endl;
    }
}

