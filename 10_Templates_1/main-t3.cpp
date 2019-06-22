#include <iostream>
#include <stdlib.h>

using namespace std;

template <class U, class R>
U GetMax (U a, R b) {
  U result;
  result = (a>b)? a : b;
  return (result);
}


int main ()
{
	cout <<"\n --- Pruebas de Templates - funcion GetMax mixto"<<endl;

	//---------------------------------------------------
	int i=5, k;
	float f=7.56;

	cout <<"Valores tipo int y float a analizar:"<< i << " y "<< f<<"\n";

	k=GetMax<int,float>(i,f);
	cout <<"El maximo es:"<< k <<"\n\n";

	//---------------------------------------------------

	cout <<"o en forma directa\n";

	cout <<"El maximo es:"<< GetMax(f,i) <<"\n\n";
	cout <<"El maximo es:"<< GetMax(i,f) <<"\n\n";

  return 0;
}

