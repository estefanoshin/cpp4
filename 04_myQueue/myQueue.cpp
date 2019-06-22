#include <iostream>
#include "myQueue.h" 
#include "mystddef.h"
#include "string.h"


using std::cout;
using std::endl;


// ---- Constructores

myQueue::myQueue ()
{
	cant=0;	
	nd_ini=nd_end=nullptr;	
}

myQueue::myQueue (const myData& dato)
{
	cant=0;	
	nd_ini=nd_end=nullptr;
	push(dato);	
}



myQueue::~myQueue ()
{
myNodo *p;

	while(nd_ini)
	{
		p=nd_ini;
		nd_ini=nd_ini->next;
		delete p;
	}
}

// ---- metodos comunes

bool myQueue::push ( const myData& dato)
{
myNodo *p=new myNodo();
	
	if (p==nullptr)
		return false;

	p->dd=dato;	// transfiero el dato sin ningun tipo de control
	cant++;

	if (nd_ini==nullptr)	// cola vacia
	{
		nd_ini=nd_end=p;		
		return true;		
	}
	p->next=nd_ini;
	nd_ini->prev=p;
	nd_ini=p;
	
return true;
}

bool myQueue::pop ( myData& dato)
{	
myNodo *p;

	if (nd_end==nullptr)
		return false;

	dato=nd_end->dd;	// transfiero el dato sin ningun tipo de control
	cant--;
	
	if (nd_ini==nd_end)	// significa que queda solo un dato
	{
		delete nd_end;		// ini y end apuntan al mismo elemento
		nd_ini=nd_end=nullptr;		
		return true;		
	}
	
	p=nd_end;

	nd_end=nd_end->prev;
	nd_end->next=nullptr;
	delete p;		// ini y end apuntan al mismo elemento
	
return true;
}

