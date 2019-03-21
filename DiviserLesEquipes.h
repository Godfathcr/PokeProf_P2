#pragma once
#include "Sort.h"
template<typename T>
class DiviserLesEquipes :public Sort<T>
{
public:
	DiviserLesEquipes()
	{
		accuracy = 90;
		nom = "Diviser les equipes de projet";
		description = "Dommage sur le moral des autres profs qui entendent les etudiants ce plaindre";
	}
	~DiviserLesEquipes() {}
	virtual void activation(T &toi, T &ennemi)
	{
		int dommage = -40 * toi.AttaquePuissance() / ennemi.Defense();
		ennemi.setVie(dommage);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
	}

};
