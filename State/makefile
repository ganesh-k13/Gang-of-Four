SDIR=src
IDIR=include
ODIR=obj
FLAGS=-std=c++11

test: $(ODIR)/test.o $(ODIR)/mobile.o $(ODIR)/state.o
	g++ $(ODIR)/test.o $(ODIR)/mobile.o $(ODIR)/state.o -o test $(FLAGS)

$(ODIR)/test.o: test.cpp $(IDIR)/mobile.h $(IDIR)/state.h
	g++ -c test.cpp -o $(ODIR)/test.o $(FLAGS)

$(ODIR)/mobile.o: $(SDIR)/mobile.cpp $(IDIR)/mobile.h $(ODIR)/state.o
	g++ -c $(SDIR)/mobile.cpp $(ODIR)/state.o -o $(ODIR)/mobile.o $(FLAGS)

$(ODIR)/state.o: $(SDIR)/state.cpp $(IDIR)/state.h
	g++ -c $(SDIR)/state.cpp -o $(ODIR)/state.o $(FLAGS)

clean:
	rm -r $(ODIR)/*.o
	rm test
