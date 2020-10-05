#pragma once
#include "BaseBuilder.h"
class Helicopter :
	public BaseBuilder
{
public:
	void setIsMilitary() override;
	void setAircraftType() override;
	void setManagementMethod() override;
	Aircraft getAndSaveResult() override;

	Helicopter();
	~Helicopter();
};
