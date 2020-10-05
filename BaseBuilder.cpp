#include "stdafx.h"
#include "BaseBuilder.h"

void BaseBuilder::setLandingType(string landingType)
{
	aircraft.landingType = landingType;
}

void BaseBuilder::setManagementMethod()
{
	aircraft.managementMethod = "Without control";
}

void BaseBuilder::setCrew(int crew)
{
	aircraft.crew = crew;
}

void BaseBuilder::setProductionYear(int productionYear)
{
	aircraft.productionYear = productionYear;
}

void BaseBuilder::setWeaponType(string weaponType)
{
	aircraft.weaponType = weaponType;
}

Aircraft BaseBuilder::getAndSaveResult()
{
	return Aircraft();
}

BaseBuilder::BaseBuilder()
{
	aircraft = Aircraft();
}


BaseBuilder::~BaseBuilder()
{
}

void BaseBuilder::setIsMilitary()
{
	aircraft.isMilitary = false;
}

void BaseBuilder::setAircraftType()
{
	aircraft.aircraftType = "Basic model";
}

void BaseBuilder::setTakeoffWeight(double takeoffWeight)
{
	aircraft.takeoffWeight = takeoffWeight;
}

void BaseBuilder::setEnginesType(string enginesType)
{
	aircraft.enginesType = enginesType;
}

void BaseBuilder::setEnginesNum(int enginesNum)
{
	aircraft.enginesNum = enginesNum;
}

void BaseBuilder::setWingsArrangement(string wingsArrangement)
{
	aircraft.wingsArrangement = wingsArrangement;
}

void BaseBuilder::setChassisType(string chassisType)
{
	aircraft.chassisType = chassisType;
}

void BaseBuilder::setFlightSpeed(double flightSpeed)
{
	aircraft.flightSpeed = flightSpeed;
}

void BaseBuilder::setTakeoffType(string takeoffType)
{
	aircraft.takeoffType = takeoffType;
}


void BaseBuilder::getLandingType()
{
	cout << "Enter landing type\n";
	cin >> aircraft.landingType;
	cout << "Landing type: "<< aircraft.landingType<<endl;
}

void BaseBuilder::getManagementMethod()
{
	cout << "Management method: " << aircraft.managementMethod << endl;
}

void BaseBuilder::getCrew()
{
	cout << "Enter crew number\n";
	cin >> aircraft.crew;
	cout << "Crew number: " << aircraft.crew << endl;
}

void BaseBuilder::getProductionYear()
{
	cout << "Enter production year\n";
	cin >> aircraft.productionYear;
	cout << "Production year: " << aircraft.productionYear << endl;
}

void BaseBuilder::getWeaponType()
{
	cout << "Enter weapon type\n";
	cin >> aircraft.weaponType;
	cout << "Weapon type: " << aircraft.weaponType << endl;
}


void BaseBuilder::getIsMilitary()
{
	cout << "Aircraft is MILITARY?: " << aircraft.isMilitary << endl;
}

void BaseBuilder::getAircraftType()
{
	cout << "Type of aircraft: " << aircraft.aircraftType << endl;
}

	void BaseBuilder::getTakeoffWeight()
{
	cout << "Enter take-off mass\n";
	cin >> aircraft.takeoffWeight;
	cout << "Take-off weight is: "<< aircraft.takeoffWeight<<endl;
}

void BaseBuilder::getEnginesType()
{
	cout << "Enter engine type\n";
	cin >> aircraft.enginesType;
	cout << "Engine type: " << aircraft.enginesType << endl;
}

void BaseBuilder::getEnginesNum()
{
	cout << "Enter the number of engines\n";
	cin >> aircraft.enginesNum;
	cout << "The number of engines is: " << aircraft.enginesNum << endl;
}

void BaseBuilder::getWingsArrangement()
{
	cout << "Enter the location of the wings\n";
	cin >> aircraft.wingsArrangement;
	cout << "The location of the wings is: " << aircraft.wingsArrangement << endl;
}

void BaseBuilder::getChassisType()
{
	cout << "Enter Chassis Type\n";
	cin >> aircraft.chassisType;
	cout << "Chassis Type is: " << aircraft.chassisType << endl;
}

void BaseBuilder::getFlightSpeed()
{
	cout << "Enter flight speed\n";
	cin >> aircraft.flightSpeed;
	cout << "Flight speed is: " << aircraft.flightSpeed << endl;
}

void BaseBuilder::getTakeoffType()
{
	cout << "Enter take-off type\n";
	cin >> aircraft.takeoffType;
	cout << "Take-off type is: " << aircraft.takeoffType << endl;
}
