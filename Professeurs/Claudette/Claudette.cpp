#pragma once
#include "Professeurs/Claudette/claudette.h"
#include "Professeurs/Claudette/sortAffection.h"
#include "Professeurs/Claudette/sortCestVrai.h"
#include "Professeurs/Claudette/sortOvertime.h"
#include "sort.h"
#include <iostream>
#include <string>

Claudette::Claudette()
{
	vieBase = 100;
	defenseBase = 50;
	vitesseBase = 45;
	attaquePuissanceBase = 45;
	vie = 100;
	defense = 70;
	vitesse = 45;
	attaquePuissance = 45;
	sort = new Sort<Prof>* [3];
	sort[0] = new sortAffection<Prof>();
	sort[1] = new sortCestVrai<Prof>();
	sort[2] = new sortOvertime<Prof>();
	etat = 1;
	nom = "Claudette";

}


Claudette::~Claudette()
{
}
