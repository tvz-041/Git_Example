#include <iostream>

#include "SomeClass.h"

using namespace std;

void helloWorld()
{
	cout << "Hello World!" << endl;
}

int main()
{
	helloWorld();
	SomeClass someObject(true, 10);
	someObject.printSomeIntData();
	return 0;
}
