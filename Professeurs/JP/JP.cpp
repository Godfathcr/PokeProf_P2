#pragma once
#include "Professeurs/JP/jp.h"
#include "Professeurs/JP/sortDiviserEquipes.h"
#include "Professeurs/JP/sortEscalade.h"
#include "Professeurs/JP/sortPraise.h"
#include "sort.h"
#include <iostream>
#include <string>

JP::JP()
{
	vieBase = 100;
	defenseBase = 70;
	vitesseBase = 70;
	attaquePuissanceBase = 50;
	vie = 100;
	defense = 70;
	vitesse = 70;
	attaquePuissance = 50;
	sort = new Sort<Prof>* [3];
	sort[0] = new sortDiviserLesEquipes<Prof>();
	sort[1] = new sortEscalade<Prof>();
	sort[2] = new sortPraise<Prof>();
	etat = 1;
	nom = "JP";

}


JP::~JP()
{
}
