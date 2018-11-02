CXX=g++
SDIR=src
IDIR=include
ODIR=obj
FLAGS=-std=c++14

test: $(ODIR)/test.o $(ODIR)/ATC.o $(ODIR)/Airline.o
	$(CXX) $(ODIR)/test.o $(ODIR)/ATC.o $(ODIR)/Airline.o -g $(FLAGS) -o test

$(ODIR)/test.o: test.cpp $(IDIR)/ATC.h $(IDIR)/Airline.h 
	$(CXX) -c test.cpp -o $(ODIR)/test.o -g $(FLAGS)

$(ODIR)/ATC.o: $(SDIR)/ATC.cpp $(IDIR)/IAirline.h $(IDIR)/ATC.h 
	$(CXX) -c $(SDIR)/ATC.cpp -o $(ODIR)/ATC.o -g $(FLAGS)

$(ODIR)/Airline.o: $(SDIR)/Airline.cpp $(IDIR)/Airline.h $(IDIR)/IATC.h
	$(CXX) -c $(SDIR)/Airline.cpp -o $(ODIR)/Airline.o -g $(FLAGS)

clean:
	rm -rf $(ODIR)/*.o ||:
	rm -rf test.out ||:
