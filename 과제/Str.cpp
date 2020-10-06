#include "Str.h"

Str::Str(int leng) {
	
	len = leng;
}
Str::Str(char* neyong) {
	len = strlen(neyong);
	
	str = neyong;
}
Str::~Str() {
	
}
int Str::length(void) {
	return len;
}
char* Str::contents(void) {
	return str;
}

int Str::compare(class Str& a) {
	return compare(a.contents());
}

int Str::compare(char* a) {
	return strcmp(str,a);
}

void Str::operator=(char* a) {
	len = strlen(a);
	
	str = a;
}

void Str::operator=(class Str& a) {
	len = a.length();
	
	str = a.contents();

}
