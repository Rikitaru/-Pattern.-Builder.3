#pragma once

#include <string>
#include <iostream>
using namespace std;

class Aircraft
{
public:
	bool isMilitary= false; //Военный или гражданский
	string aircraftType = ""; //Тип аппарата
	double takeoffWeight = 0; //Взлетная масса
	string enginesType = ""; //Тип двигателей
	int enginesNum = 0; //Количество двигателей
	string wingsArrangement = ""; //Расположение крыльев
	string chassisType = ""; //Тип шасси
	double flightSpeed = 0; //Скорость полета
	string takeoffType = ""; //Тип взлета
	string landingType = ""; //Тип посадки
	string managementMethod = ""; //Способ управления
	int crew = 0; //Экипаж
	int productionYear = 0; //Год производства
	string weaponType = ""; //Тип вооружения

	Aircraft();
	~Aircraft();
};
