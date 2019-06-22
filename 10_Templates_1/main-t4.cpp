#include <iostream>
#include <stdlib.h>
using namespace std;

template <class T>
class mi_dato {
	T dd;
  public:
	mi_dato (T arg) {dd=arg;}
	T incremento () {return ++dd;}
	T valor () {return dd;}
};


// class template specialization:
template <>
class mi_dato <char> {
	char dd;
  public:
	mi_dato (char arg) {dd=arg;}

	char valor () {return dd;}

	char mayuscula ()
	{
	  if ((dd>='a')&&(dd<='z'))
		return dd+('A'-'a');
	  return dd;
	}
};


int main () {
  mi_dato<int> var_int (7);
  mi_dato<char> var_char ('j');
  cout << "\nValor int :"<< var_int.valor() << endl;
  cout << "Valor char :"<< var_char.valor() << endl;

  cout << "\nincremento int :"<< var_int.incremento() << endl;

  cout << "mayuscula char :"<< var_char.mayuscula() << endl;

  return 0;
}
