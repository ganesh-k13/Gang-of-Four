#ifndef STATE_H
#define STATE_H
class State {
	public:
	virtual void mode() = 0; // algointerface
};

class Silent: public State {
	public:
	virtual void mode();
};

class Vibration: public State {
	public:
	virtual void mode();
};

class Ringing: public State {
	public:
	virtual void mode();
};
#endif

