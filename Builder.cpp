#include "stdafx.h"
#include "BaseBuilder.h"
#include "Helicopter.h"
#include "Quadrupter.h"
#include "WarAirplaneBuilder.h"
#include "PassangerAirplaneBuilder.h"
#include <iostream>
#include <locale.h>
//#include <conio.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251"); // настраиваем кодировку консоли
	BaseBuilder* builder;
	Aircraft aircraft;
	double takeoffWeight=0, fs=0;
	string tow, wa, ct,tot,lt,wt;
	int en=0,c=0,py=0;
	int button = 1;
	while (button) {
		cout << "Which aircraft would you like to create ?\n";
		cout << "|1| - Passenger plane;\n";
		cout << "|2| - War plane;\n";
		cout << "|3| - Helicopter;\n";
		cout << "|4| - Quadrocopter;\n";
		cout << "|0| - Do not need anything.\n";
		cin >> button;
		switch (button) {
		case 1: 
			//Пассажирский самолет
			builder = new PassangerAirplaneBuilder();
			cout << "Creating a Passenger Aircraft" << endl;
			builder->setAircraftType();
			builder->setIsMilitary();
			builder->setManagementMethod();
			builder->setTakeoffWeight(takeoffWeight);
			builder->setEnginesType(tow);
			builder->setEnginesNum(en);
			builder->setWingsArrangement(wa);
			builder->setChassisType(ct);
			builder->setFlightSpeed(fs);
			builder->setTakeoffType(tot);
			builder->setLandingType(lt);
			builder->setCrew(c);
			builder->setProductionYear(py);
			builder->setWeaponType(wt);

			builder->getAircraftType();
			builder->getIsMilitary();
			builder->getManagementMethod();
			builder->getTakeoffWeight();
			builder->getEnginesType();
			builder->getEnginesNum();
			builder->getWingsArrangement();
			builder->getChassisType();
			builder->getFlightSpeed();
			builder->getTakeoffType();
			builder->getLandingType();
			builder->getCrew();
			builder->getProductionYear();
			builder->getWeaponType();

			aircraft = builder->getAndSaveResult();
			delete builder;
			break;

		case 2:
			//Боевой самолёт
			builder = new WarAirplaneBuilder();
			builder->setAircraftType();
			builder->setIsMilitary();
			builder->setManagementMethod();
			builder->setTakeoffWeight(takeoffWeight);
			builder->setEnginesType(tow);
			builder->setEnginesNum(en);
			builder->setWingsArrangement(wa);
			builder->setChassisType(ct);
			builder->setFlightSpeed(fs);
			builder->setTakeoffType(tot);
			builder->setLandingType(lt);
			builder->setCrew(c);
			builder->setProductionYear(py);
			builder->setWeaponType(wt);

			builder->getAircraftType();
			builder->getIsMilitary();
			builder->getManagementMethod();
			builder->getTakeoffWeight();
			builder->getEnginesType();
			builder->getEnginesNum();
			builder->getWingsArrangement();
			builder->getChassisType();
			builder->getFlightSpeed();
			builder->getTakeoffType();
			builder->getLandingType();
			builder->getCrew();
			builder->getProductionYear();
			builder->getWeaponType();

			aircraft = builder->getAndSaveResult();
			delete builder;
			break;
		case 3:
			//Вертолёт
			builder = new Helicopter();
			builder->setAircraftType();
			builder->setIsMilitary();
			builder->setManagementMethod();
			builder->setTakeoffWeight(takeoffWeight);
			builder->setEnginesType(tow);
			builder->setEnginesNum(en);
			builder->setWingsArrangement(wa);
			builder->setChassisType(ct);
			builder->setFlightSpeed(fs);
			builder->setTakeoffType(tot);
			builder->setLandingType(lt);
			builder->setCrew(c);
			builder->setProductionYear(py);
			builder->setWeaponType(wt);

			builder->getAircraftType();
			builder->getIsMilitary();
			builder->getManagementMethod();
			builder->getTakeoffWeight();
			builder->getEnginesType();
			builder->getEnginesNum();
			builder->getWingsArrangement();
			builder->getChassisType();
			builder->getFlightSpeed();
			builder->getTakeoffType();
			builder->getLandingType();
			builder->getCrew();
			builder->getProductionYear();
			builder->getWeaponType();

			aircraft = builder->getAndSaveResult();
			delete builder;
			break;
		case 4: 
			//Квадрокоптер 
			builder = new Quadrupter();
			builder->setAircraftType();
			builder->setIsMilitary();
			builder->setManagementMethod();
			builder->setTakeoffWeight(takeoffWeight);
			builder->setEnginesType(tow);
			builder->setEnginesNum(en);
			builder->setWingsArrangement(wa);
			builder->setChassisType(ct);
			builder->setFlightSpeed(fs);
			builder->setTakeoffType(tot);
			builder->setLandingType(lt);
			builder->setCrew(c);
			builder->setProductionYear(py);
			builder->setWeaponType(wt);

			builder->getAircraftType();
			builder->getIsMilitary();
			builder->getManagementMethod();
			builder->getTakeoffWeight();
			builder->getEnginesType();
			builder->getEnginesNum();
			builder->getWingsArrangement();
			builder->getChassisType();
			builder->getFlightSpeed();
			builder->getTakeoffType();
			builder->getLandingType();
			builder->getCrew();
			builder->getProductionYear();
			builder->getWeaponType();

			aircraft = builder->getAndSaveResult();
			delete builder;
			break;
		case 0: break;
		}
	}

	
	return 0;
}
