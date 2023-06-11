/******************************************************************************

Dummy exercise for understanding better concept of double pointers
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
	p = &x;
	
	cout << "x= " << x << "(address: " << &x << ")" << endl;
	cout << "p= " << p << "(address: " << &p << ")";
	return 0;
}