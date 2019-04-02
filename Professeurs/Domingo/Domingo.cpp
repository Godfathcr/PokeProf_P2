#pragma once
#include "Professeurs/Domingo/domingo.h"
#include "Professeurs/Domingo/sortBaseball.h"
#include "Professeurs/Domingo/sortCorrectionLente.h"
#include "Professeurs/Domingo/sortLaSolutionne.h"
#include "sort.h"
#include <iostream>
#include <string>

Domingo::Domingo()
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
	sort[0] = new sortBaseball<Prof>();
	sort[1] = new sortCorrectionLente<Prof>();
	sort[2] = new sortLaSolutionne<Prof>();
	etat = 1;
	nom = "Domingo";

}


Domingo::~Domingo()
{
}
