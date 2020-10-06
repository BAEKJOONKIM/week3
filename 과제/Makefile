cc=g++
target=string
objects=main.o Str.o

$(target) : $(objects) main.h
	    $(cc) -o $(target) $(objects)

main.o : main.cpp main.h
	$(cc) -c -o main.o -g main.cpp

Str.o : Str.cpp Str.h
	$(cc) -c -o Str.o -g Str.cpp

.PHONY : clean

clean :
	rm $(target) $(objects)
