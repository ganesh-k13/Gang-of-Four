#include "include/checkout.h"
#include "include/payment.h"
#include <vector>

int main() {
	
	Checkout c1(new Cash());
	Checkout c2(new DebitCard());
	
	c1.pay(1000);
	c2.pay(1000);

}