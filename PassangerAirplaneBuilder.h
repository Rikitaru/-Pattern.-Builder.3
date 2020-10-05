#pragma once
#include "BaseBuilder.h"
class PassangerAirplaneBuilder :
	public BaseBuilder
{
public:
	PassangerAirplaneBuilder();

	void setIsMilitary() override;
	void setAircraftType() override;
	void setManagementMethod() override;
	Aircraft getAndSaveResult() override;


	~PassangerAirplaneBuilder();
};

