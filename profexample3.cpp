#include "ProfExample3.h"
#include "Sort.h"
#include "sortDefense.h"
#include "sortexample1.h"
#include "SortCaffee.h"
#include "praise.h"
#include "Escalade.h"
#include "DiviserLesEquipes.h"
#include <iostream>
#include <string>

#pragma once

ProfExample3::ProfExample3()
{
	vieBase = 100;
	defenseBase = 70;
	vitesseBase = 40;
	attaquePuissanceBase = 30;
	vie = 100;
	defense = 70;
	vitesse = 40;
	attaquePuissance = 30;
	sort = new Sort<Prof>*[3];
	sort[0] = new DiviserLesEquipes<Prof>();
	sort[1] = new Escalade<Prof>();
	sort[2] = new Praise<Prof>();
	etat = 1;
	nom = "JP";

}


ProfExample3::~ProfExample3()
{
}
