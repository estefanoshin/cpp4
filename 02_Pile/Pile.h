#ifndef __PILE__
#define __PILE__

#define SZ_STD_PILE 512
#define SZ_EXT_PILE 128

typedef char myData;	//cambiar de lugar


class Pile
{
private:
	myData *arr;
	unsigned int size;
	unsigned int idx;
	
public:

	//constructores
	Pile(unsigned int=SZ_STD_PILE);
	Pile(const Pile&);
	~Pile();
	
	//metodos basicos
	bool push ( const myData& dato);
	bool pop ( myData *pdato);
	int espacio () 	 const { return size-idx;};
	int ocupacion () const { return idx;};
	bool estaLlena() const { return !bool(size-idx);};	// Tiene sentido?????
	bool estaVacia() const { return !bool(idx);};

};

#endif