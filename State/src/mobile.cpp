#include "../include/mobile.h"

void Mobile::alert() {
	std::cout << "Phone name: " << _name << " ";
	_ptr_state->mode();
}

Mobile::Mobile(std::string name) {
	_name = name;
}

Mobile::~Mobile() {

}