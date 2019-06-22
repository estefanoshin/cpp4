#include <iostream>
#include "myQueue.h"
#include "mystddef.h"

#define TEST_SIZE 25
#define SI_NO(n) (n?"Si":"No")
using std::cout;
using std::endl;

int main()
{
char arrTest []="ABC.WXYZ";
myQueue <char>sq('%');
myQueue <int>pr;

int i,k;
char aux;

	cout<< "\ncantidad en cola <char>:" << sq.cantidad()<<endl;
	cout<< "\ncantidad en cola <int>:" << pr.cantidad()<<endl;

	for (i=0; arrTest[i]; i++)
	{
		sq.push(arrTest[i]);
		pr.push((i+1)*7);
	}
	
	cout<< "\ncantidad en cola <char>:" << sq.cantidad()<<endl;
	cout<< "\nLa cola esta vacia <char>: " << SI_NO(sq.estaVacia()) <<endl;

	cout<< "\ncantidad en cola <int>:" << pr.cantidad()<<endl;
	cout<< "\nLa cola esta vacia <int>: " << SI_NO(pr.estaVacia()) <<endl;

	
	while (sq.pop(aux))
		cout<< "dato  <char>:" << aux<<endl;

	cout<< "\nLa cola esta vacia <char>: " << SI_NO(sq.estaVacia()) <<endl;
	cout<< "\nLa cola esta vacia <int>: " << SI_NO(pr.estaVacia()) <<endl;

	while (!pr.estaVacia())
	{
		pr.pop(k);
		cout<< "dato  <int>:" << k<<endl;
	}
	
return 0;
}

