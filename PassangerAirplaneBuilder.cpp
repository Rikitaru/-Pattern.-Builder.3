#include "stdafx.h"
#include "PassangerAirplaneBuilder.h"


PassangerAirplaneBuilder::PassangerAirplaneBuilder()
{
}

void PassangerAirplaneBuilder::setIsMilitary()
{
	aircraft.isMilitary = false;
}

void PassangerAirplaneBuilder::setAircraftType()
{
	aircraft.aircraftType = "Passenger plane";
}

void PassangerAirplaneBuilder::setManagementMethod()
{
	aircraft.managementMethod = "Manual control";
}
Aircraft PassangerAirplaneBuilder::getAndSaveResult()
{
	ofstream out;
	out.open("passangerAirplane.txt", std::ios_base::app);
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

PassangerAirplaneBuilder::~PassangerAirplaneBuilder()
{
}
