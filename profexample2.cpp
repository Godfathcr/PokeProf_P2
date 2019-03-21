#include "ProfExample2.h"
#include "Sort.h"
#include "sortDefense.h"
#include "sortexample1.h"
#include "Overtime.h"
#include "SortCaffee.h"
#include <iostream>
#include <string>

#pragma once

ProfExample2::ProfExample2()
{
	vieBase = 100;
	defenseBase = 70;
	vitesseBase = 50;
	attaquePuissanceBase = 30;
	vie = 100;
	defense = 70;
	vitesse = 70;
	attaquePuissance = 30;
	sort = new Sort<Prof>*[3];
	sort[0] = new SortExample1<Prof>();
	sort[1] = new Overtime<Prof>();
	sort[2] = new SortCaffee<Prof>();
	etat = 1;
	nom = "Charmander";

}


ProfExample2::~ProfExample2()
{
}
