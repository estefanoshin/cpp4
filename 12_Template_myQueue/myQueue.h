#ifndef __MY_QUEUE__
#define __MY_QUEUE__


template <class T>
struct myNodo
{
	T dd;
	myNodo *next;
	myNodo *prev;
	myNodo(){next=prev=nullptr;}
};

template <class T>
class myQueue
{
//private:
public:
	myNodo<T> *nd_ini;		
	myNodo<T> *nd_end;		
	unsigned int cant;
	
public:

	//constructores
	myQueue();
	myQueue(const T& dato);
	~myQueue();

	
	//metodos basicos
	bool push ( const T& dato);
	bool pop ( T &pdato);
	int cantidad ()  const { return cant;};
	bool estaVacia ()  const { return (nd_ini==nullptr?true:false);};
};

// ---- Constructores
template <class T>
myQueue<T>::myQueue ()
{
	cant=0;	
	nd_ini=nd_end=nullptr;	
}

template <class T>
myQueue<T>::myQueue (const T& dato)
{
	cant=0;	
	nd_ini=nd_end=nullptr;
	push(dato);	
}


template <class T>
myQueue<T>::~myQueue ()
{
myNodo<T> *p;

	while(nd_ini)
	{
		p=nd_ini;
		nd_ini=nd_ini->next;
		delete p;
	}
}


// ---- metodos comunes

template <class T>
bool myQueue<T>::push ( const T& dato)
{
myNodo<T> *p=new myNodo<T>();
	
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

template <class T>
bool myQueue<T>::pop ( T& dato)
{	
myNodo<T> *p;

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

#endif


