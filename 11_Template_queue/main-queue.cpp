#include <iostream>
#include<stdlib.h>
#include <queue>
using namespace std;

/**
 * cplusplus.com
 */
int main ()
{
  queue<int> alfa;

  alfa.push(7);
  alfa.push(25);
  alfa.back()=987;
  alfa.push(42);
  alfa.push(8);
  alfa.push(17);

  cout << "Frente:"<< alfa.front()<<endl;
  cout << "ultimo:"<< alfa.back()<<endl;
  cout << "size:"<< alfa.size()<<endl;

  while (alfa.size())
  {
	  cout << "-->:"<< alfa.front()<<endl;
	  alfa.pop();
  }

  return 0;
}
