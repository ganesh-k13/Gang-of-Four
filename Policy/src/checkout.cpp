#include "../include/checkout.h"

void Checkout::pay(int amount) {
	_ptr_payment_type->pay(amount);
}

Checkout::Checkout(Payment *ptr_payment_type) {
	_ptr_payment_type = ptr_payment_type;
}

Checkout::~Checkout() {
	delete _ptr_payment_type;
}