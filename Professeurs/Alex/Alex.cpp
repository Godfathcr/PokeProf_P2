#pragma once
#include "Professeurs/Alex/alex.h"
#include "Professeurs/Alex/sortCaffee.h"
#include "Professeurs/Alex/sortLancerCrayon.h"
#include "Professeurs/Alex/sortMotDePasse.h"
#include "sort.h"
#include <iostream>
#include <string>

Alex::Alex()
{
	vieBase = 100;
	defenseBase = 70;
	vitesseBase = 50;
	attaquePuissanceBase = 60;
	vie = 100;
	defense = 70;
	vitesse = 50;
	attaquePuissance = 60;
	sort = new Sort<Prof>* [3];
	sort[0] = new sortCaffee<Prof>();
	sort[1] = new sortLanceCrayon<Prof>();
	sort[2] = new sortMotDePasse<Prof>();
	etat = 1;
	nom = "Alex";

}


Alex::~Alex()
{
}
