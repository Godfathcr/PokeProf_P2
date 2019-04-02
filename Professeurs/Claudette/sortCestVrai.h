#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class sortCestVrai :public Sort<T>
{
public:
	sortCestVrai()
	{
		srand((unsigned)time(0));
		accuracy = 60;
		nom = "C'est vrai!";
		description = "Peu de dommage à l'ennemi, chance de confusion";
	}
	~sortCestVrai() {}
	virtual void activation(T &toi, T &ennemi)
	{
		int dommage = effetFurieux(-20,toi,ennemi);
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

