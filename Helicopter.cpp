#include "stdafx.h"
#include "Helicopter.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

Helicopter::Helicopter()
{
}


Helicopter::~Helicopter()
{
}

void Helicopter::setIsMilitary()
{
	aircraft.isMilitary = false;
}

void Helicopter::setAircraftType()
{
	aircraft.aircraftType = "Helicopter";
}

void Helicopter::setManagementMethod()
{
	aircraft.managementMethod = "Manual control";
}

Aircraft Helicopter::getAndSaveResult()
{
	ofstream out;
	out.open("helicopters.txt", std::ios_base::app);
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

