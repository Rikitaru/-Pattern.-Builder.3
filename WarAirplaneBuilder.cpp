#include "stdafx.h"
#include "WarAirplaneBuilder.h"



WarAirplaneBuilder::WarAirplaneBuilder()
{
}

void WarAirplaneBuilder::setIsMilitary()
{
	aircraft.isMilitary = true;
}

void WarAirplaneBuilder::setAircraftType()
{
	aircraft.aircraftType = "Combat aircraft";
}

void WarAirplaneBuilder::setManagementMethod()
{
	aircraft.managementMethod = "Manual control";
}

Aircraft WarAirplaneBuilder::getAndSaveResult()
{
	ofstream out;
	out.open("warAirplane.txt", std::ios_base::app);
	out << "----------------\n";
	out << "Landing type: " << aircraft.aircraftType << endl;
	out << "Military?: " << (aircraft.isMilitary ? "Yes" : "No") << endl;
	out << "Takeoff weight: " << aircraft.takeoffWeight << endl;
	out << "Engine type: " << aircraft.enginesType << endl;
	out << "Number of engines: " << aircraft.enginesNum << endl;
	out << "The location of the wings: " << aircraft.wingsArrangement << endl;
	out << "Chassis type: " << aircraft.chassisType << endl;
	out << "Flight speed: " << aircraft.flightSpeed << endl;
	out << "Takeoff type: " << aircraft.takeoffType << endl;
	out << "Landing type: " << aircraft.landingType << endl;
	out << "Management method: " << aircraft.managementMethod << endl;
	out << "Crew: " << aircraft.crew << endl;
	out << "Production year: " << aircraft.productionYear << endl;
	out << "Weapon type: " << aircraft.weaponType << endl;
	out << "----------------\n";
	out.close();

	return aircraft;
}

WarAirplaneBuilder::~WarAirplaneBuilder()
{
}
