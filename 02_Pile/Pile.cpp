#include "Pile.h" 
#include "string.h"


//----------------------------------------------- constructores
Pile::Pile (unsigned int sz)
{
	arr=new myData[sz];  //incluir try-catch
	
	size=sz;
	idx=0;
}

Pile::Pile (const Pile& p)
{
	
	arr=new myData [p.size];  //incluir try-catch
	
	memcpy(arr,p.arr,idx*sizeof(myData));
	size=p.size;
	idx=p.idx;
}

Pile::~Pile ()
{
	delete [] arr;  //incluir try-catch
}

//----------------------------------------------- metodos insercion/extraccion

bool Pile::push ( const myData& dato)
{

	if (idx >= size)
	{
		unsigned int aux=size+SZ_EXT_PILE;
		
		myData *px=new myData [aux];  //incluir try-catch
	
		memcpy(px,arr,idx*sizeof(myData));
		size=aux;
		
		delete [] arr;
		arr=px;
		//return false; si error ret false
	}
	arr[idx]=dato;
	idx++;
	
return true;
}


bool Pile::pop ( myData *pdato)
{
	if (idx == 0)
		return false;
	
	idx--;
	*pdato = arr[idx];

return true;
}


