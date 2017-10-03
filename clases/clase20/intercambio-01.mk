.PHONY: all clean

all: intercambio-01

intercambio-01: intercambio-01.o
	$(CXX) -o $@ $^

intercambio-01.o: intercambio-01.cpp


clean:
	rm -f intercambio-01.o
	rm -f intercambio-01
	rm -f intercambio-01.cpp~
	rm -f intercambio-01.mk~

