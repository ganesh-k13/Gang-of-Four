#ifndef __AIRLINE_H__
#define __AIRLINE_H__

#include <memory>
#include "IAirline.h"
 
class IATC;

class Airline : public IAirline
{
public:
	Airline(std::string _name);
	virtual ~Airline();
	virtual void sendMessage(IATC &mediator, double latitude, double longitude) override;
	virtual void receiveMessage(double latitude, double longitude) override;
	virtual const std::string &getName() const override;

private:
	std::string _name;
};

#endif