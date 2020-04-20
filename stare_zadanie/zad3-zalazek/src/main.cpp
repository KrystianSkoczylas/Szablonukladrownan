#include <iostream>
#include "Wektor.hh"
//#include "SWektor.cpp"

//#include "Macierz.hh"
//#include "UkladRownanLiniowych.hh"

using namespace std;
int main()
{
  /*Wektor W,blad;
  UkladRownanLiniowych U;
  cout << endl << " Start programu " << endl << endl;
  cin>>U;
  cout<<U;
  cout<<endl<<"Rozwiazanie x = ( ";
  for(int i=0;i<ROZMIAR;++i)
    cout<<"x"<<i<<", ";
  cout<<")"<<endl;
  cout<< U.Oblicz()<<endl;
  blad=( U.wez_macierz() * U.Oblicz() -U.wez_wektor() );
  cout<<"Wektor bledu:   Ax-B  = ( "<<blad<<")"<<endl;
  cout<<"Dlugosc wektora bledu: ||Ax-B|| = "<<blad.dlugosc()<<endl;*/
   cout << endl << " Start programu " << endl << endl;
   cout<<"Wektor 3"<<endl;
   Wektor <double,3> W1,W2,W3;
   W2[0]=5;
   W2[1]=3;
   W2[2]=10;
   cout<<W2;
   cout<<"Podaj W1"<<endl;
   cin>>W1;
   cout<<W1;
   W3=W1+W2;
   cout<<"Dodawanie W1+W2: "<<W1+W2<<"i tak samo "<<W3<<endl;;
   cout<<"Odejmowanie W1-W2: "<<W1-W2<<endl;
   cout<<"iloczyn skalarny W1*W2: "<<W1*W2<<endl;
   cout<<"W1*3: "<<W1*3<<endl;
   // cout<<"2*W1: "<<2*W1<<endl;
   
   cout<<"Wektor 4"<<endl;
   Wektor <double,4> D1,D2;
   double a;
   D2[0]=2;
   D2[1]=4;
   D2[2]=0;
   D2[3]=-1;
   cout<<D2<<endl;
   cout<<"Podaj D1"<<endl;
   cin>>D1;
   cout<<D1;
   cout<<"Dodawanie D1+D2: "<<D1+D2<<endl;
   cout<<"Odejmowanie D1-D2: "<<D1-D2<<endl;
   cout<<"D1*3: "<<D1*3<<endl;
   //cout<<"2*D1: "<<2*D1<<endl;
   a=D1*D2;
   cout<<"iloczyn skalarny D1*D2: "<<a<<endl;

   cout<<"Wektor 5"<<endl;
   Wektor <double,5> E1,E2;
   E2[0]=3;
   E2[3]=2;
   E2[4]=1;
   cout<<E2<<endl;
   cout<<"Podaj E1"<<endl;
   cin>>E1;
   cout<<E1;
   cout<<"Dodawanie E1+E2: "<<E1+E2<<endl;
   cout<<"Odjmowanie E1-E2: "<<E1-E2<<endl;
   cout<<"E1*3: "<<E1*3<<endl;
   //cout<<"2*E1: "<<2*E1<<endl;
   cout<<"iloczyn skalarny E1*E2: "<<E1*E2<<endl;
}

