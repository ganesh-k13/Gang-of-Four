#include "include/mobile.h"
#include "include/state.h"
#include <vector>

int main() {
	State *silent = new Silent();
	State *vibration = new Vibration();
	State *ringing = new Ringing();
	
	Mobile m("One Plus");
	
	m.change_state(silent);
	m.alert();

	m.change_state(vibration);
	m.alert();

	m.change_state(ringing);
	m.alert();

	Mobile m1("Pixel");
	
	m1.change_state(silent);
	m1.alert();
}