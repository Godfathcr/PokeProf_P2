#include "ProfExample3.h"
#include "Sort.h"
#include "sortDefense.h"
#include "sortexample1.h"
#include "SortCaffee.h"
#include <iostream>
#include <string>

#pragma once

ProfExample3::ProfExample3()
{
	vieBase = 100;
	defenseBase = 70;
	vitesseBase = 50;
	attaquePuissanceBase = 30;
	vie = 100;
	defense = 70;
	vitesse = 40;
	attaquePuissance = 30;
	sort = new Sort<Prof>*[3];
	sort[0] = new SortExample1<Prof>();
	sort[1] = new SortDefense<Prof>();
	sort[2] = new SortCaffee<Prof>();
	etat = 1;
	nom = "Squirtle";

}


ProfExample3::~ProfExample3()
{
}
