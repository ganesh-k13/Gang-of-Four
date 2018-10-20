#include <iostream>
using namespace std;

#include "../include/singleton.h"

Singleton :: Singleton () {
    singleton_data = 0;
}

Singleton& Singleton :: get_instance() {
    // eager initialization of singleton object
    static Singleton unique_instance;
    return unique_instance;
}

int Singleton :: get_singleton_data() {
    return Singleton::get_instance().singleton_data;
}

void Singleton :: singleton_operation() {
    Singleton::get_instance().singleton_data += 1;
}