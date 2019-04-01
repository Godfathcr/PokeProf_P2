#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class CVrai :public Sort<T>
{
public:
	CVrai()
	{
		srand((unsigned)time(0));
		accuracy = 60;
		nom = "C'est vrai!";
		description = "Peu de dommage à l'ennemi, chance de confusion";
	}
	~CVrai() {}
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
		int dommage = -20 * attaque / defense;
		ennemi.setVie(dommage);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
		if (rand() % 10 < 3)
		{
			ennemi.setEtat(3);
			cout << ennemi.Nom() << " est etourdi" << endl;
			int nbrTour = rand() % 4 + 1;
			ennemi.setEtatCompteur(nbrTour);
		}
	}
};

