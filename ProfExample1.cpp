#include "ProfExample1.h"
#include "Sort.h"
#include "LanceCrayon.h"
#include "MotPasse.h"
#include "SortCaffee.h"
#include <iostream>
#include <string>

#pragma once

ProfExample1::ProfExample1()
{
	vieBase = 100;
	defenseBase = 70;
	vitesseBase = 50;
	attaquePuissanceBase = 30;
	vie = 100;
	defense = 70;
	vitesse = 50;
	attaquePuissance = 30;
	sort = new Sort<Prof>* [3];
	sort[0] = new LanceCrayon<Prof>();
	sort[1] = new MotPasse<Prof>();
	sort[2] = new SortCaffee<Prof>();
	etat = 1;
	nom = "Alex";

}


ProfExample1::~ProfExample1()
{
}
