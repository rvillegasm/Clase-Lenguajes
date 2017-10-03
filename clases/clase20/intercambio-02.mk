.PHONY: all clean

all: intercambio-02

intercambio-02: intercambio-02.o
	$(CXX) -o $@ $^

intercambio-02.o: intercambio-02.cpp


clean:
	rm -f intercambio-02.o
	rm -f intercambio-02
	rm -f intercambio-02.cpp~
	rm -f intercambio-02.mk~

