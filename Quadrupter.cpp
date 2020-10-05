#include "stdafx.h"
#include "Quadrupter.h"



Quadrupter::Quadrupter()
{
}


Quadrupter::~Quadrupter()
{
}

void Quadrupter::setIsMilitary()
{
	aircraft.isMilitary = false;
}

void Quadrupter::setAircraftType()
{
	aircraft.aircraftType = "Quadrocopter";
}

void Quadrupter::setManagementMethod()
{
	aircraft.managementMethod = "Remote control";
}

Aircraft Quadrupter::getAndSaveResult()
{
	ofstream out;
	out.open("quadrupter.txt", std::ios_base::app);
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
