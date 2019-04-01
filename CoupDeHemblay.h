#pragma once
#include "Sort.h"
template<typename T>
class CoupDeHemblay :public Sort<T>
{
public:
	CoupDeHemblay()
	{
		accuracy = 90;
		nom = "Coup de hemblay";
		description = "Dommage";
	}
	~CoupDeHemblay() {}
	virtual void activation(T &toi, T &ennemi)
	{
		int attaque, defense;
		if (toi.CompteurFurieux() > 0)
			attaque = toi.AttaquePuissance() * 2;
		else
			attaque = toi.AttaquePuissance();
		if (ennemi.CompteurFurieux() > 0)
			defense = ennemi.Defense() * 2;
		else
			defense = ennemi.Defense();
		int dommage = -40 * attaque / defense;
		ennemi.setVie(dommage);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
	}
};
