#include <iostream>
#include "FixPile.h"

#define TEST_SIZE 10

using std::cout;
using std::endl;

int main ()
{
myData arrTest []="Hola,_Como_estan_todos?";
int i;
char aux;
FixPile st(TEST_SIZE);

	//insertamos la cantidad de datos definida o hasta la capacidad de la pila
	cout<< "Iniciamos la inserción en la pila\n";

	for (i=0 ; arrTest[i]; i++)
	{
		cout <<"insertamos -> " << arrTest[i] << endl;
		if (st.push(arrTest[i])!=true)
		{
			cout <<"Error de inserción - Pila Llena" << endl;
			break;
		}
		cout <<"espacio en pila -> " <<st.espacio() << endl;
	}
	
	//Consultamos como esta la pila
	cout <<"La pila esta llena? " <<(st.estaLlena()?"Si" : "No") << endl;
	
	if (st.pop(&aux)==true)
	{
		cout <<"extragimos -> " << aux << endl;
	}
	cout <<"La pila esta llena? n" <<(st.estaLlena()?"Si" : "No") << endl;
		
	//extraemos hasta vaciar la pila
	while(st.pop(&aux)==true)
	{
		cout <<"extragimos -> " << aux << endl;
	}
	
	
return 0;
	
}




