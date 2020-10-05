#pragma once
#include "BaseBuilder.h"
class WarAirplaneBuilder :
	public BaseBuilder
{
public:

	void setIsMilitary() override;
	void setAircraftType() override;
	void setManagementMethod() override;
	Aircraft getAndSaveResult() override;

	WarAirplaneBuilder();
	~WarAirplaneBuilder();
};
