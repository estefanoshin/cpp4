#ifndef __MY_LDE__
#define __MY_LDE__

#include "mystddef.h"

#define INI 0
#define END 1


class myLde
{
private:
	myData qaux;
	void initQueue();
	bool pop_aux(int id1,int id2);
	bool push_aux ( const myData& dato,int id1,int id2);
protected:
	myNodo *xptr[2];
	unsigned int cant;

//	insertInMiddle (const myData& dato);  -- para desarrollar
	
public:

	//constructores
	myLde ();
	myLde (const myData& dato);
	~myLde ();
	
	//metodos basicos
	bool push_ini ( const myData& dato);
	bool push_end ( const myData& dato);
	myData& front ();
	myData& back();
	bool pop_ini ( void);
	bool pop_end ( void);
	int  qtty ()  const { return cant;};
	bool isEmpty ()  const { return (xptr[INI]==nullptr?true:false);};

};

#endif