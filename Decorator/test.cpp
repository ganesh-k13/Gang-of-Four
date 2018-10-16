#include <iostream>
using namespace std;
#include "include/decorator.h"

int main() {
	cout << "------ Decorator Pattern Tests ------" << endl;

	Component *ptr_comp = new ConcreteComponent();
	cout << endl << "Before Decorator is used:" << endl;
	ptr_comp->operation();

	cout << endl << "After Decorator is used:" << endl;
	ptr_comp = new ConcreteDecorator(ptr_comp);
	ptr_comp->operation();

	return 0;
}