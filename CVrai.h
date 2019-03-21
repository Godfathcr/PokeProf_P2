#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class CVrai :public Sort<T>
{
public:
	Cvrai()
	{
		srand((unsigned)time(0));
		accuracy = 60;
		nom = "C'est vrai!";
		description = "Peu de dommage à l'ennemi, chance de confusion";
	}
	~Cvrai() {}
	virtual void activation(T &toi, T &ennemi)
	{
		int dommage = -20 * toi.AttaquePuissance() / ennemi.Defense();
		ennemi.setVie(dommage);
		ennemi.setEtat(3);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
		if (rand() % 10 < 5)
		{
			ennemi.setEtat(3);
			cout << ennemi.Nom() << " est etourdi" << endl;
			int nbrTour = rand() % 4 + 1;
			ennemi.setEtatCompteur(nbrTour);
		}
	}
};

