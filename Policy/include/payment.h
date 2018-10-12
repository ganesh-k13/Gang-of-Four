#ifndef PAYMENT_H
#define PAYMENT_H
class Payment {
	protected:
		int amount;
	public:
		virtual void pay(int amount) = 0; // algointerface
};

class Cash: public Payment {
	public:
	virtual void pay(int amount);
};

class DebitCard: public Payment {
	public:
	virtual void pay(int amount);
};
#endif

