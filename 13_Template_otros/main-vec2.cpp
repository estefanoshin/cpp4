#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;

class myVec:public vector<int>
{
public:
	//--- constructores ----
	myVec():vector<int>(){}
	myVec(int *init, int *fin):vector<int>(init,fin){}

	void prt();

};

void myVec::prt()
{
for (unsigned int i=0; i < size(); i++)
	cout << " " << at(i);
cout << endl;

}

int main ()
{
  int myints[] = {16,2,77,29};
  myVec vc(myints, myints + sizeof(myints) / sizeof(int) );

  vc.push_back(27);
  vc.push_back(17);
  vc.push_back(33);
  vc.push_back(14);
  vc.push_back(12);

  vc.prt();

	
  
  vector<int>::iterator it;
	it = vc.begin();

  vc.insert (it+2,2,300);

  vc.prt();

  return 0;
}


