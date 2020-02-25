#include <iostream>
#include <stddef.h>

using namespace std;
void main()
{
	typedef signed char int8_t;
	typedef unsigned char uint8_t;
	typedef signed short int16_t;
	typedef unsigned short uint16_t;
	typedef signed long int32_t;
	typedef unsigned long uint32_t;

	int8_t a;
	uint8_t b;
	int16_t c;
	uint16_t d;
	int32_t e;
	uint32_t f;

	cout << "Hello world and Vim!" << endl;
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(e) << endl;
	cout << sizeof(f) << endl;
	cout << "Hello world!" << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;

	system("pause");
}