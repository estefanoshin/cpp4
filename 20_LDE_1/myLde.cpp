#include <iostream>
#include "myLde.h" 
#include "mystddef.h"
#include <string.h>


using std::cout;
using std::endl;


void myLde::initQueue(void)
{
	cant=0;	
	xptr[INI]=xptr[END]=nullptr;
	memset(&qaux,0,sizeof(myData));

}

myLde::myLde ()
{
	initQueue();
}

myLde::myLde (const myData& dato)
{
	initQueue();
	push_ini(dato);	
}


myLde::~myLde ()
{
myNodo *p;

	while(xptr[INI])
	{
		p=xptr[INI];
		xptr[INI]=xptr[INI]->ptr[NEXT];
		delete p;
	}
	
}


////////////////////////////// Push

bool myLde::push_aux ( const myData& dato,int id1, int id2)
{
myNodo *p=new myNodo();
	
	if (p==nullptr)
		return false;

	p->dd=dato;	
	cant++;

	if (xptr[id1]==nullptr)	// Lista vacia (indistinto id1 o id2
	{
		xptr[INI]=xptr[END]=p;		
		return true;		
	}
	p->ptr[id1]=xptr[id1];
	xptr[id1]->ptr[id2]=p;
	xptr[id1]=p;
	
return true;
}


bool myLde::push_ini ( const myData& dato)
{
	return push_aux ( dato,0, 1);
	
return true;
}

bool myLde::push_end ( const myData& dato)
{
	return push_aux ( dato,1, 0);
	
return true;
}


////////////////////////////// Pop
	
bool myLde::pop_aux (int id1,int id2)
{	
myNodo *p;

	if (xptr[id1]==nullptr)	// Lista vacia (indistinto id1 o id2
		return false;

	cant--;
	
	if (xptr[id1]==xptr[id2])	// significa que queda solo un dato
	{
		delete xptr[id1];		// ini y end apuntan al mismo elemento
		xptr[id1]=xptr[id2]=nullptr;		
		return true;		
	}
	
	p=xptr[id1];

	xptr[id1]=xptr[id1]->ptr[id1];
	xptr[id1]->ptr[id2]=nullptr;
	delete p;	
	
return true;
}

bool myLde::pop_ini (void)
{	
	return (pop_aux(0,1));
}

bool myLde::pop_end (void)
{	
	return (pop_aux(1,0));
}

	
//////////////////////////////////// front/back data	

myData& myLde::front ()
{
	if (xptr[INI]==nullptr)	// Lista vacia - retorna aux
		return qaux;
	
	return xptr[INI]->dd;
}


myData& myLde::back ()
{
	if (xptr[END]==nullptr)	// Lista vacia - retorna aux
		return qaux;
	
	return xptr[END]->dd;
}

