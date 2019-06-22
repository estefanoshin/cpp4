#include <iostream>
#include "myQueue.h"
#include "mystddef.h"

#define TEST_SIZE 25
#define SI_NO(n) (n?"Si":"No")
using std::cout;
using std::endl;


int func ()
{
myData arrTest []="ABC.WXYZ";
myQueue sq('%');
int i,k;
myData aux;

	cout<< "\ncantidad en cola:" << sq.cantidad()<<endl;

	for (i=0; arrTest[i]; i++)
		sq.push(arrTest[i]);

	cout<< "\ncantidad en cola:" << sq.cantidad()<<endl;
	cout<< "\nLa cola esta vacia: " << SI_NO(sq.estaVacia()) <<endl;

	while (sq.pop(aux))
		cout<< "dato:" << aux<<endl;

	cout<< "\nLa cola esta vacia: " << SI_NO(sq.estaVacia()) <<endl;

	for (i=0; arrTest[i]; i++)
		sq.push(arrTest[i]);

	cout<< "\ncantidad en cola:" << sq.cantidad()<<endl;
	while (sq.pop(aux))
		cout<< "dato:" << aux<<endl;
		
	cout<< "\nLa cola esta vacia: " << SI_NO(sq.estaVacia()) <<endl;

	cout<< "\nFin del proceso."<<endl;

return 0;
}


int main()
{
	func();

return 0;
}
	