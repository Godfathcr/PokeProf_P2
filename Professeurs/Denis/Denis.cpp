#pragma once
#include "Professeurs/Denis/denis.h"
#include "Professeurs/Denis/sortDiagrammeSurcharge.h"
#include "Professeurs/Denis/sortLoiC21.h"
#include "Professeurs/Denis/sortTick.h"
#include "sort.h"
#include <iostream>
#include <string>

Denis::Denis()
{
	vieBase = 100;
	defenseBase = 70;
	vitesseBase = 55;
	attaquePuissanceBase = 40;
	vie = 100;
	defense = 70;
	vitesse = 55;
	attaquePuissance = 40;
	sort = new Sort<Prof>* [3];
	sort[0] = new sortDiagrammeSurcharge<Prof>();
	sort[1] = new sortLoiC21<Prof>();
	sort[2] = new sortTique<Prof>();
	etat = 1;
	nom = "Denis";

}


Denis::~Denis()
{
}
