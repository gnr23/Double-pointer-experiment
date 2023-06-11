/******************************************************************************

 
Experiment with pointers 
-Declare an int x
-print its address and its value
-declare a pointer that points to int p
-assign the pointer to x
-print the value and its address
-print x's value via p
-declare a pointer to pointer to int named as pp
-assign him to poiint to p
-print its value  and its address
-print x's value via pp
print p's value via pp
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int x = 5;
	int* p;
	int** pp;
	p = &x;
	pp = &p;
	
	cout << "x= " << x << "(address: " << &x << ")" << endl;
	cout << "p= " << p << "(address: " << &p << ")" << endl;
	cout << "x= (*p)= " << *p << endl;
	cout << "pp=" << pp << "(address: " << &pp << ")" << endl;
	cout << sizeof p;
	cout << "x=(**pp)=" << **pp << endl;
	cout << "p=(*p)=" << *pp << endl;

	return 0;
}
