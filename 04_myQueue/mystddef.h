#ifndef __MY_STD_DEF__
#define __MY_STD_DEF__

// mis definiciones estandar

typedef char myData;

   struct myNodo
   {
      myData dd;
      myNodo *next;
      myNodo *prev;
      myNodo(){next=prev=nullptr;}
   };


#endif