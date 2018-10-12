SDIR=src
IDIR=include
ODIR=obj
FLAGS=-std=c++11

test: $(ODIR)/test.o $(ODIR)/checkout.o $(ODIR)/payment.o
	$(CXX) $(ODIR)/test.o $(ODIR)/checkout.o $(ODIR)/payment.o -o test $(FLAGS)

$(ODIR)/test.o: test.cpp $(IDIR)/checkout.h $(IDIR)/payment.h
	$(CXX) -c test.cpp -o $(ODIR)/test.o $(FLAGS)

$(ODIR)/checkout.o: $(SDIR)/checkout.cpp $(IDIR)/checkout.h $(ODIR)/payment.o
	$(CXX) -c $(SDIR)/checkout.cpp $(ODIR)/payment.o -o $(ODIR)/checkout.o $(FLAGS)

$(ODIR)/payment.o: $(SDIR)/payment.cpp $(IDIR)/payment.h
	$(CXX) -c $(SDIR)/payment.cpp -o $(ODIR)/payment.o $(FLAGS)

clean:
	rm -rf $(ODIR)/*.o ||:
	rm -rf test ||:
