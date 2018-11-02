#ifndef __ATC_H__
#define __ATC_H__

#include <iostream>
#include <string>
#include <list>
#include <memory>
#include "IATC.h"
#include "IAirline.h"

class IAirline;

class ATC : public IATC
{
public:
	ATC();
	virtual ~ATC();
	virtual void spreadMessage(double , double ) override;
	virtual void addNewRegistered(std::unique_ptr<IAirline> ) override;
	virtual const std::vector<std::unique_ptr<IAirline>> &getVectorOfBombers() const override;
};

#endif
