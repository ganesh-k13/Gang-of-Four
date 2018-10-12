#include "../include/checkout.h"
#include <iostream>

void Cash::pay(int amount) {
	std::cout << "Amount: " << amount << std::endl;
}

void DebitCard::pay(int amount) {
	std::cout << "Amount: " << amount/2 << std::endl;
}