// constructing vectors
#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;



int main ()
{
unsigned int i;

	  // constructors used in the same order as described above:
vector<string> first;                                // empty vector of ints
vector<int> second (4,10);                       // four ints with value 100
vector<int> third (second.begin(),second.end());  // iterating through second
vector<int> fourth (third);                       // a copy of third

float ff[] = {16.23,2.45,77.66,29.09};
vector<float> fifth (ff,ff + sizeof(ff) / sizeof(ff[0]) );

	cout << "\n\nLos elementos del Array 4 (int):";
	for (i=0; i < fourth.size(); i++)
		cout << " " << fourth[i];
	cout << endl;


	cout << "\n\nLos elementos del Array 5 (float):";
	for (i=0; i < fifth.size(); i++)
		cout << " " << fifth[i];
	cout << endl;

	system ("PAUSE");

	// --------------- push & pop

    cout << "\n\nEl Array 1 (string) esta "<<(first.empty()?"vacio":"con datos");

	first.push_back("Hola");
	first.push_back("como");
	first.push_back("estas?");

	cout << "\nEl Array 1 (string) esta "<<(first.empty()?"vacio":"con datos");

	cout << "\n\nLos elementos del Array 5:";
	for (i=0; i < first.size(); i++)
		cout << " " << first[i];
	cout << endl;

	string last=first.back();
	first.pop_back();

	for (i=0; i < first.size(); i++)
		cout << " " << first[i];
	cout <<" ( y el que ya no esta) " << last<<endl;


// --------------- iterator
	system ("PAUSE");

vector<int>::iterator it;
	it = fourth.begin();

	it = fourth.insert ( it , 500 );

	fourth.insert (it,2,300);

	it = fourth.begin();		// cuidado
	fourth.insert (it,2,150);

	cout << "\n\nLos elementos del Array 4 (int):";
	for (i=0; i < fourth.size(); i++)
		cout << " " << fourth[i];
	cout << endl;


	it = fourth.begin();
	fourth.insert (it+2,third.begin(),third.end());


	cout << "\n\nLos elementos del Array 4 (int) usando it:";
	for (it=fourth.begin(); it<fourth.end(); it++)
	  cout << " " << *it;
	cout << endl;


	// --------------- iterator reverse

	vector<int>::reverse_iterator rit;


	cout << "\n\nEn reversa:";
	for (rit=fourth.rbegin(); rit<fourth.rend(); rit++)
	  cout << " " << *rit;
	cout << endl;

	return 0;
}








