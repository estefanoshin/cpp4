#ifndef __MY_STD_DEF__
#define __MY_STD_DEF__

// mis definiciones estandar

typedef char myData;

#define NEXT 0
#define PREV 1

struct myNodo	//al ser una estructura por omision son todos sus miembros publicos
{
	myData dd;
	myNodo *ptr[2];
	myNodo() {ptr[NEXT]=ptr[PREV]=nullptr;}
};

#endif