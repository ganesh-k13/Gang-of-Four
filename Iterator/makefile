SDIR=src
IDIR=include
ODIR=obj
FLAGS=-std=c++11

test: $(ODIR)/test.o $(ODIR)/carray.o 
	g++ $(ODIR)/test.o $(ODIR)/carray.o  -o test $(FLAGS)

$(ODIR)/test.o: test.cpp $(IDIR)/carray.h $(IDIR)/utils.h
	g++ -c test.cpp -o $(ODIR)/test.o $(FLAGS)

$(ODIR)/carray.o: $(SDIR)/carray.cpp $(IDIR)/carray.h
	g++ -c $(SDIR)/carray.cpp -o $(ODIR)/carray.o $(FLAGS)

clean:
	rm -f $(ODIR)/*.o
