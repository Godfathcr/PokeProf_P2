#include "ProfExample2.h"
#include "Sort.h"
#include "CVrai.h"
#include "Overtime.h"
#include "Affection.h"
#include <iostream>
#include <string>

#pragma once

ProfExample2::ProfExample2()
{
	vieBase = 100;
	defenseBase = 70;
	vitesseBase = 70;
	attaquePuissanceBase = 30;
	vie = 100;
	defense = 70;
	vitesse = 70;
	attaquePuissance = 30;
	sort = new Sort<Prof>*[3];
	sort[0] = new CVrai<Prof>();
	sort[1] = new Overtime<Prof>();
	sort[2] = new Affection<Prof>();
	etat = 1;
	nom = "Claudette";

}


ProfExample2::~ProfExample2()
{
}
