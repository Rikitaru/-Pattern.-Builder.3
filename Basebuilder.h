#pragma once

#include "Aircraft.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class BaseBuilder
{
protected:
	Aircraft aircraft;
public:
	//методы без параметров переопределяются для каждого типа аппарата, все остальные параметры могут настраиваться пользователем
	virtual void setIsMilitary(); 
	virtual void setAircraftType();
	virtual void setManagementMethod();

	void setTakeoffWeight(double takeoffWeight);
	void setEnginesType(string enginesType);
	void setEnginesNum(int enginesNum);
	void setWingsArrangement(string wingsArrangement); 
	void setChassisType(string chassisType);
	void setFlightSpeed(double flightSpeed);
	void setTakeoffType(string takeoffType);
	void setLandingType(string landingType);
	void setCrew(int crew);
	void setProductionYear(int productionYear);
	void setWeaponType(string weaponType);

	virtual void getIsMilitary();
	virtual void getAircraftType();
	virtual void getManagementMethod();

	void getTakeoffWeight();
	void getEnginesType();
	void getEnginesNum();
	void getWingsArrangement(); 
	void getChassisType();
	void getFlightSpeed();
	void getTakeoffType();
	void getLandingType();
	void getCrew();
	void getProductionYear();
	void getWeaponType();

	virtual Aircraft getAndSaveResult();
	BaseBuilder();
	~BaseBuilder();
};

