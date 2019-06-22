#include "FixPile.h" 
#include "string.h"


//----------------------------------------------- constructores
FixPile::FixPile (unsigned int sz)
{
	arr=new myData[sz];  //incluir try-catch
	
	this->size=sz;
	this->idx=0;
}

FixPile::FixPile (const FixPile& p)
{
	
	this->arr=new myData [p.size];  //incluir try-catch
	
	memcpy(this->arr,p.arr,this->idx*sizeof(myData));
	this->size=p.size;
	this->idx=p.idx;
}

FixPile::~FixPile ()
{
	delete [] arr;  //incluir try-catch
}

//----------------------------------------------- metodos insercion/extraccion

bool FixPile::push ( const myData& dato)
{
	if (this->idx >= size)
		return false;
	
	this->arr[this->idx]=dato;
	this->idx++;
	
return true;
}


bool FixPile::pop ( myData *pdato)
{
	if (this->idx == 0)
		return false;
	
	this->idx--;
	*pdato = this->arr[this->idx];

return true;
}


