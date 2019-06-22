#include <iostream>
#include <stdlib.h>

using namespace std;

template <class T>
class mypair {
	T a, b;
  public:
	mypair (T x, T y)
	  {a=x; b=y;}

	void prt() {cout<<"v1:"<<a<<" - v2:"<<b<<endl;}

	T getmax ();
};


// implementacion de getmax

template <class T>
T mypair<T>::getmax ()
{
  T retval;
  retval = a>b? a : b;
  return retval;
}


////////////////////////////////////////////////////////////////////

int main ()
{
	cout <<"\n --- Pruebas de Templates - clases"<<endl;

	//---------------------------------------------------
	cout <<"Par tipo int \n";

	mypair <int> par1 (100, 75);
	par1.prt();
	cout <<"El maximo es:"<< par1.getmax() <<"\n\n";

	//---------------------------------------------------

	cout <<"Par tipo string \n";

	mypair <string> par2 ("pepe", "juan");
	par2.prt();
	cout <<"El maximo es:"<< par2.getmax() <<"\n\n";

  return 0;
}


