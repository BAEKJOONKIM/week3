#include "RangeArray.h"


RangeArray::RangeArray() :Array() {

}

RangeArray::RangeArray(int lo, int hi) :Array(hi-lo+1) {
	low = lo;
	high = hi;
}

RangeArray::~RangeArray() {
	
}

int RangeArray::baseValue() {
	return low;
}

int RangeArray::endValue() {
	return high;
}

int& RangeArray::operator[](int i) {
	if (i<low || i>high) cout << "Array bound error\n";
	return data[i - low];
	
}

int RangeArray::operator[](int i)const {
	return data[i - low];
}
