#ifndef __IAIRLINE_H__
#define __IAIRLINE_H__

#include <memory>
#include <string>
#include <iostream>
#include <vector>

class IATC;

class IAirline
{
public:
	virtual ~IAirline() { };
	virtual void sendMessage(IATC &mediator, double latitude, double longitude) = 0;
	virtual void receiveMessage(double latitude, double longitude) = 0;
	virtual const std::string &getName() const = 0;
};

#endif 