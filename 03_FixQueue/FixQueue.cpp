#include "FixQueue.h" 
#include "string.h"


//----------------------------------------------- constructores
FixQueue::FixQueue (unsigned int sz)
{
	arr=new myData[sz];  //incluir try-catch
	
	size=sz;
	id1=0;
	id2=0;
	cant=0;
}

FixQueue::FixQueue (const FixQueue& p)
{
	
	arr=new myData [p.size];  //incluir try-catch
	
	memcpy(arr,p.arr,cant*sizeof(myData));
	size=p.size;
	id1=p.id1;
	id2=p.id2;
	cant=p.cant;
}

FixQueue::~FixQueue ()
{
	delete [] arr;  //incluir try-catch
}

//----------------------------------------------- metodos insercion/extraccion

bool FixQueue::push ( const myData& dato)
{

	if (cant >= size)
		return false;
	
	arr[id1] = dato;
	id1++;
	
	id1 %= size;
	
	cant++;
	
return true;
}


bool FixQueue::pop ( myData *pdato)
{
	if (cant == 0)
		return false;
	
	*pdato=arr[id2];
	id2++;
	id2 %= size;

	cant--;

return true;
}


/////////////////////////////////////////////////////


