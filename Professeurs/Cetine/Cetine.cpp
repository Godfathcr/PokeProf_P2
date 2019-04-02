#pragma once
#include "Professeurs/Cetine/sortCharabiat.h"
#include "Professeurs/Cetine/sortCoupDeHambley.h"
#include "Professeurs/Cetine/sortFausseRetraite.h"
#include "Professeurs/Cetine/cetine.h"
#include "sort.h"
#include <iostream>
#include <string>

Cetine::Cetine()
{
	vieBase = 100;
	defenseBase = 70;
	vitesseBase = 40;
	attaquePuissanceBase = 20;
	vie = 100;
	defense = 70;
	vitesse = 40;
	attaquePuissance = 20;
	sort = new Sort<Prof>* [3];
	sort[0] = new sortCharabiat<Prof>();
	sort[1] = new sortCoupDeHemblay<Prof>();
	sort[2] = new sortFausseRetraite<Prof>();
	etat = 1;
	nom = "Cetine";

}


Cetine::~Cetine()
{
}
