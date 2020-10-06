#include <iostream>
#include <stdlib.h>

using namespace std;

#ifndef __ARRAY__
#define __ARRAY__



class Array {
	protected:
		int *data;
		int len;
	public:
		Array();
		Array(int size);
		~Array();

		int length();

		int& operator[](int i);
		int operator[](int i) const;

		void print();
};
#endif
