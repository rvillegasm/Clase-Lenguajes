all: clase-05

CXXFLAGS=-wall

clase-05: clase-05.o clase-05-impl.o
	$(CXX) -o $@ $^

clase-05.o: clase-05.cpp clase-05.h

clase-05-impl.o: clase-05-impl.cpp clase-05.h

clean:
	rm -f clase-05
	rm -f clase-05.o clase-05-impl.o
