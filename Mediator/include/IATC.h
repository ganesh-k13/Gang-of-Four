#ifndef __IATC_H__
#define __IATC_H__

#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include "IAirline.h"

class IAirline;

class IATC
{
public:
	virtual ~IATC() { };
	virtual void spreadMessage(double, double) = 0;
	virtual void addNewRegistered(std::unique_ptr<IAirline>) = 0;
	virtual const std::vector<std::unique_ptr<IAirline>> &getVectorOfBombers() const = 0;

protected:
	std::vector<std::unique_ptr<IAirline>> _vectorOfBombers;
};

#endif 