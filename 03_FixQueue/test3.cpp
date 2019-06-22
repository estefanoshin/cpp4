#include <iostream>
#include "FixQueue.h"


#define TEST_SIZE 25

using std::cout;
using std::endl;

int main ()
{
myData arrTest []="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
FixQueue st(TEST_SIZE);
int i,k;
char aux;

	
	//insertamos la cantidad de datos definida o hasta la mitad de la capacidad de la memoria
	cout<< "\n\n-->Iniciamos la inserción en la memoria"<< endl;

	for (i=0 ; i<TEST_SIZE/2; i++)
	{
		cout<< "insertamos -> " << arrTest[i] << endl;
		if (!st.push(arrTest[i]))
		{
			cout<< "Error de inserción - Queue Llena"<<endl;
			break;
		}
		cout<< "espacio en memoria " << st.espacio()<<endl;
	}
	
	//Consultamos como esta la memoria
	cout<< "La memoria esta llena? "<< (st.estaLlena()?"Si" : "No")<<endl;
	cout<< "Cantidad en memoria: "<< st.ocupacion()<<endl;
	cout<< "Espacio disponible: "<< st.espacio()<<endl;
	
	
	//extraemos algunos elementos y consultamos el estado de la memoria

	cout<< "\n\n-->Extraccion parcial de la memoria"<<endl;
	for (k=0 ; k<TEST_SIZE/4 && st.pop(&aux); k++)
	{
		cout<< "extragimos -> "<< aux <<endl;
	}

	//Consultamos como esta la memoria
	cout<< "La memoria esta llena? "<< (st.estaLlena()?"Si" : "No")<<endl;
	cout<< "Cantidad en memoria: "<< st.ocupacion()<<endl;
	cout<< "Espacio disponible: "<< st.espacio()<<endl;

	//insertamos hasta que se llene la memoria
	cout<< "\n\n-->Reiniciamos la inserción en la memoria"<<endl;

	do{
		i++;
		if (i > sizeof(arrTest)/sizeof(*arrTest))
			i=0;
		cout<< "intentamos insertar -> " <<arrTest[i] << endl;
	}while (st.push(arrTest[i]));
	
	cout<< "Fin de inserción - Queue Llena - ultimo elemento no insertado"<<endl;
	
	cout<< "\n\n-->Extraemos hasta vaciar la memoria"<<endl;
		
	//extraemos hasta vaciar la memoria
	while(st.pop(&aux))
	{
		cout<< "extragimos -> " << aux << endl;
	}
	
	
return 0;
	
}




