#include "Cetine.h"



Cetine::Cetine()
{
	vieBase = 100;
	defenseBase = 70;
	vitesseBase = 70;
	attaquePuissanceBase = 30;
	vie = 100;
	defense = 70;
	vitesse = 70;
	attaquePuissance = 30;
	sort = new Sort<Prof>*[3];
	sort[0] = new CVrai<Prof>();
	sort[1] = new Overtime<Prof>();
	sort[2] = new Affection<Prof>();
	etat = 1;
	nom = "Claudette";
}


Cetine::~Cetine()
{
}
