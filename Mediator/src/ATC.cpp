#include <vector>
#include "../include/ATC.h"
#include "../include/IAirline.h"

ATC::ATC() {
}

ATC::~ATC() {
}

void ATC::spreadMessage(double latitude, double longitude)  {
	for (auto const &element : getVectorOfBombers()) {
		element->receiveMessage(latitude, longitude);
	}
}

void ATC::registerAirline(std::unique_ptr<IAirline> registered) {
	_vectorOfBombers.push_back(std::move(registered));
}

const std::vector<std::unique_ptr<IAirline>> &ATC::getVectorOfBombers() const {
	return IATC::_vectorOfBombers;
}
