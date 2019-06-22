#include <iostream>
#include <stdlib.h>


using namespace std;

template <typename U>
//template <class U>

U GetMax (U a, U b) {
  U result;
  result = (a>b)? a : b;
  return (result);
}


int main ()
{
	cout <<"\n --- Pruebas de Templates - funcion GetMax"<<endl;

	//---------------------------------------------------
	int i=5, j=6, k;
	cout <<"Valores tipo int a analizar:"<< i << " y "<< j<<"\n";

	k=GetMax<long>(i,j);
	cout <<"El maximo es:"<< k <<"\n\n";

	//---------------------------------------------------

	long l=10, m=5, n;
	cout <<"Valores tipo long a analizar:"<< l << " y "<< m<<"\n";

    n=GetMax(l,m);
	cout <<"El maximo es:"<< n <<"\n\n";


	//---------------------------------------------------

	string aa("pepe");
	string bb("alfabeta");

	cout <<"Valores tipo string a analizar: ["<< aa << "] y ["<<bb<< "]"<<"\n";

	cout <<"El maximo es:"<< GetMax(aa,bb) <<"\n\n";

  return 0;
}


