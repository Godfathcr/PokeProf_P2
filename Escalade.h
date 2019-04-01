#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class Escalade :public Sort<T>
{
public:
	Escalade()
	{
		srand((unsigned)time(0));
		accuracy = 60;
		nom = "Escalade";
		description = "Peu de dommage à l'ennemi, augmente la vitesse";
	}
	~Escalade() {}
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
		int dommage = -30 * attaque / defense;
		ennemi.setVie(dommage);
		toi.setVitesse(toi.Vitesse()*1.1);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
	}
};

