#ifndef __MY_QUEUE__
#define __MY_QUEUE__

#include "mystddef.h"

class myQueue
{
private:
	myNodo *nd_ini;    // El puntero no apunta a ningun lado hasta que se le haga el new a nd_ini
	myNodo *nd_end;		
	unsigned int cant;
	
public:

	//constructores
	myQueue();
	myQueue(const myData& dato);
//	myQueue(const myQueue&);	//analizar cual sería corresponde !!
	~myQueue();
	
	//metodos basicos
	bool push ( const myData& dato);
	bool pop ( myData &pdato);
	int cantidad ()  const { return cant;};
	bool estaVacia ()  const { return (nd_ini==nullptr?true:false);};

};

#endif
