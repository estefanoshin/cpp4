#include <iostream>
#include "myLde.h"
#include "mystddef.h"

#define TEST_SIZE 25

using std::cout;
using std::endl;


int main ()
{
myData arrTest []="ABC.WXYZ";
myLde sq('%');
int i,k;
myData aux;


	cout<< "\n------- proceso 1."<<endl;

	for (i=0; arrTest[i]; i++)
	{
		sq.push_ini(arrTest[i]);
		sq.push_end(arrTest[i]+('a'-'A'));
	}
	cout<< "\ncantidad en cola:" << sq.qtty()<<endl;


	while (!sq.isEmpty())
	{
		cout<< "dato:" << sq.front()<<endl;
		sq.pop_ini();
	}
/////////////////////////////////////////
	
	cout<< "\n------- proceso 2."<<endl;
	for (i=0; arrTest[i]; i++)
	{
		sq.push_ini(arrTest[i]);
		sq.push_end(arrTest[i]+('a'-'A'));
	}
	cout<< "\ncantidad en cola:" << sq.qtty()<<endl;


	while (sq.qtty())
	{
		cout<< "dato:" << sq.back()<<endl;
		sq.pop_end();
	}

	cout<< "\nFin del proceso."<<endl;

return 0;
}

	