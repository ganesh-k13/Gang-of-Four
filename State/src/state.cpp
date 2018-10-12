#include "../include/state.h"
#include <iostream>

void Silent::mode() {
	std::cout << "Silent Mode" << std::endl;
}

void Vibration::mode() {
	std::cout << "Vibration Mode" << std::endl;
}

void Ringing::mode() {
	std::cout << "Ringing Mode" << std::endl;
}