#include "Array.h"

Array::Array() {

}

Array::Array(int size) {
	data = new int[size];
	len = size;
}
Array::~Array() {
	
}
int Array::length() {
	return len;
}

int& Array::operator[](int i) {
	if (i < 0 || i >= len) { cout << "Array bound error\n"; }
	return data[i];
}

int Array::operator[](int i)const {
	return data[i];
}

void Array::print() {
	int i;

	cout << "[";
	for (i = 0; i < len; i++) {
		cout << " " << data[i];
	}
	cout << " ]\n";
}

