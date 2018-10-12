#include <string>
#include <iostream>
#include "payment.h"

#ifndef CHECKOUT_H
#define CHECKOUT_H

class Checkout {
	private:
		Payment *_ptr_payment_type;
	public:
		void pay(int amount);
		Checkout(Payment *ptr_payment_type);
		~Checkout();
};

#endif

