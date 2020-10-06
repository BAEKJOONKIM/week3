#include "Array.h"
#include <iostream>
using namespace std;

class RangeArray : public Array {
	protected:
		int low;
		int high;
	public:
		RangeArray();
		RangeArray(int, int);
		~RangeArray();

		int baseValue();
		int endValue();

		int& operator[](int);
		int operator[](int)const;

};