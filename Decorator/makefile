SDIR=src
IDIR=include
ODIR=obj
FLAGS=-std=c++11

test: $(ODIR)/test.o $(ODIR)/decorator.o $(ODIR)/component.o 
	$(CXX) $(ODIR)/test.o $(ODIR)/decorator.o  $(ODIR)/component.o -o test.out $(FLAGS)

$(ODIR)/test.o: test.cpp $(IDIR)/decorator.h $(IDIR)/component.h
	$(CXX) -c test.cpp -o $(ODIR)/test.o $(FLAGS)

$(ODIR)/decorator.o: $(SDIR)/decorator.cpp $(IDIR)/decorator.h
	$(CXX) -c $(SDIR)/decorator.cpp -o $(ODIR)/decorator.o $(FLAGS)

$(ODIR)/component.o: $(SDIR)/component.cpp $(IDIR)/component.h
	$(CXX) -c $(SDIR)/component.cpp -o $(ODIR)/component.o $(FLAGS)

clean:
	rm -rf $(ODIR)/*.o ||:
	rm -rf test.out ||:
