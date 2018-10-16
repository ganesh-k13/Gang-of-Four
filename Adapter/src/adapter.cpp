#include <iostream>
using namespace std;
#include "../include/adapter.h"

void Adapter :: request() {
    adaptee->specific_request();
}

void Adaptee :: specific_request() {
    cout << "Specific Request." << endl;
}