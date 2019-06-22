#ifndef __MY_STD_DEF__
#define __MY_STD_DEF__

// mis definiciones estandar

typedef char myData;

   struct myNodo //Sigue siendo un objeto en c++
   {
      myData dd;
      myNodo *next;
      myNodo *prev;
      myNodo(){next=prev=nullptr;} //Constructor-ish de myNodo
   };


#endif
