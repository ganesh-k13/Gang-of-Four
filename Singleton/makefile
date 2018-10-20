SDIR=src
IDIR=include
ODIR=obj
FLAGS=-std=c++11

test: $(ODIR)/test.o $(ODIR)/singleton.o 
	$(CXX) $(ODIR)/test.o $(ODIR)/singleton.o -o test.out $(FLAGS)

$(ODIR)/test.o: test.cpp $(IDIR)/singleton.h
	$(CXX) -c test.cpp -o $(ODIR)/test.o $(FLAGS)

$(ODIR)/singleton.o: $(SDIR)/singleton.cpp $(IDIR)/singleton.h
	$(CXX) -c $(SDIR)/singleton.cpp -o $(ODIR)/singleton.o $(FLAGS)

clean:
	rm -rf $(ODIR)/*.o ||:
	rm -rf test.out ||:
