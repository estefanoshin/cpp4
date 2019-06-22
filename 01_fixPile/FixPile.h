#ifndef __ARR_PILE__
#define __ARR_PILE__

#define SZ_STD_PILE 512

typedef char myData;	//cambiar de lugar


class FixPile
{
    
private:
    /**
     * My memory block
     */
	myData *arr;
    
	unsigned int size;
	unsigned int idx;
	
public:

	//constructores
	FixPile(unsigned int=SZ_STD_PILE);
    
    /**
     * Copy constructor
     */
	FixPile(const FixPile&);
    
    /**
     * Necessary to destroy the mem block
     */
	~FixPile(); //TODO
	
	//metodos basicos
	bool push ( const myData& dato); //in
	bool pop ( myData *pdato); //out
    
    //-----------------------------------------------------------------
    //                      INLINE IMPLEMENTATIONS
    //-----------------------------------------------------------------
    
    /**
     * @return free space available
     */
	int espacio () 	 const { return size-idx; };
    
	int ocupacion () const { return idx; };
    
	bool estaLlena() const { return !bool(size-idx); };
	bool estaVacia() const { return !bool(idx); };

};

#endif
