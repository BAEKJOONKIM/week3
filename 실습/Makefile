cc=g++
target=arrays
objects= main.o Array.o RangeArray.o

$(target) : $(objects) main.h
	$(cc) -o $(target) $(objects)

main.o : main.cpp main.h
	$(cc) -c -o main.o -g main.cpp

Array.o : Array.cpp Array.h
	$(cc) -c -o Array.o -g Array.cpp

RangeArray.o : RangeArray.cpp RangeArray.h
	$(cc) -c -o RangeArray.o -g RangeArray.cpp

.PHONY : clean

clean :
	rm $(target) $(objects)
