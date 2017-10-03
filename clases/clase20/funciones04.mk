.PHONY: all clean

all: funciones04

funciones04: funciones04.o
	$(CXX) -o $@ $^

funciones04.o: funciones04.cpp


clean:
	rm -f funciones04.o
	rm -f funciones04
	rm -f funciones04.cpp~
	rm -f funciones04.mk~

