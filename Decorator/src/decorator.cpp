#include <iostream>
using namespace std;
#include "../include/decorator.h"

void Decorator :: operation() {
    ptr_comp->operation();
}

void ConcreteDecorator :: operation() {
    cout << "Added Behaviour from Decorator." << endl;
    Decorator :: operation();
}