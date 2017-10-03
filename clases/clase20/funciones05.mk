.PHONY: all clean

all: funciones05

funciones05: funciones05.o
	$(CXX) -o $@ $^

funciones05.o: funciones05.cpp


clean:
	rm -f funciones05.o
	rm -f funciones05
	rm -f funciones05.cpp~
	rm -f funciones05.mk~

