#include "ProfExample1.h"
#include "Sort.h"
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

	etat = 1;
	nom = "Exemple";

}


ProfExample1::~ProfExample1()
{
}




void ProfExample1::afficher() {
	cout << "----Test classe Prof----" << endl;

	cout << "Votre Poke-Prof est : " << endl;
	cout << nom << endl;
	cout << "Niveau de vie : " << vie << endl;
	cout << "Defense : " << defense << endl;
	cout << "Etat : " << endl;
	if (etat == 1)cout << "Neutre" << endl;
	if (etat == 2)cout << "Saoul" << endl;
	if (etat == 3)cout << "Etourdis" << endl;
	if (etat == 4)cout << "Hyperactif" << endl;
}