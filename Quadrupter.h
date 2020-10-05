#pragma once
#include "BaseBuilder.h"
class Quadrupter :
	public BaseBuilder
{
public:
	Quadrupter();
	~Quadrupter();

	void setIsMilitary() override;
	void setAircraftType() override;
	void setManagementMethod() override;
	Aircraft getAndSaveResult() override;
};
