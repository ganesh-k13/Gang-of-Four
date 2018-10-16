#include <iostream>
using namespace std;
#include "include/adapter.h"

int main() {
	cout << endl << "------ Adapter Pattern Tests ------" << endl;

	Target *target = new Adapter(new Adaptee);
	target->request();

	return 0;
}