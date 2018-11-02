#include <iostream>
#include <string>
#include "../include/Airline.h"
#include "../include/IATC.h"

Airline::Airline(std::string name) : _name(name) {
}

Airline::~Airline() {
}

const std::string &Airline::getName() const {
	return _name;
}

void Airline::sendMessage(IATC &mediator, double latitude, double longitude) {
	std::cout << this->getName() << " is sending a message to ATC:" << std::endl;
	std::cout << "Enemy found at Latitude: " << latitude << " and longitude: " << longitude << "!" << std::endl << std::endl;
	mediator.spreadMessage(latitude, longitude);
}

void Airline::receiveMessage(double latitude, double longitude) {
	std::cout << this->getName() << " is receiving a message: " << std::endl;
	std::cout << "Enemy bombed at GPS coordinates (" << latitude << ", " << longitude << ")." << std::endl << std::endl;
}