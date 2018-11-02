#include "include/Airline.h"
#include "include/ATC.h"

int main() {
	
	auto fighter1 = std::make_unique<Airline>(std::string("Fighter Jet"));
	
	auto bomber1 = std::make_unique<Airline>(std::string("Bomber 1"));
	auto bomber2 = std::make_unique<Airline>(std::string("Bomber 2"));
	auto bomber3 = std::make_unique<Airline>(std::string("Bomber 3"));
	auto bomber4 = std::make_unique<Airline>(std::string("Bomber 4"));
	
	auto atc = std::make_unique<ATC>();

	atc->registerAirline(std::move(bomber1));
	atc->registerAirline(std::move(bomber2));
	atc->registerAirline(std::move(bomber3));
	atc->registerAirline(std::move(bomber4));
	std::cout << std::endl;

	fighter1->sendMessage(*atc, 40.741895, -73.989308);
	std::cout << std::endl;

	return 0;
}
