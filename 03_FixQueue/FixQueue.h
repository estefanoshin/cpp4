#ifndef __FIX_QUEUE__
#define __FIX_QUEUE__

#define SZ_STD_QUEUE 512

typedef char myData;

class FixQueue
{
    
private:
	myData *arr;
	unsigned int size;
    
    /**
     * Indice de inicio para la  queue
     */
	unsigned int id1;
    
    /**
     * indice de extraccion para la queue
     */
	unsigned int id2;
    
    /**
     *      id1==id2,   empty || full
     * if   cant == 0,  empty
     * else             full
     */
	unsigned int cant;
	
public:

	//constructores
	FixQueue(unsigned int=SZ_STD_QUEUE);
	FixQueue(const FixQueue&);
	~FixQueue();
	
	//metodos basicos
	bool push ( const myData& dato);
	bool pop ( myData *pdato);
	int espacio () 	 const { return size-cant;};
	int ocupacion () const { return cant;};
	bool estaLlena() const { return !bool(size-cant);};
	bool estaVacia() const { return !bool(cant);};

};

#endif
