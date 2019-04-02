#pragma once
#include "Sort.h"
template<typename T>
class sortTique :public Sort<T>
{
public:
	sortTique()
	{
		accuracy = 100;
		nom = "Tique de cou";
		description = "Effectue du dommage et etourdi";
	}
	~sortTique() {}

	virtual void activation(T &toi, T &ennemi)
	{
		int dommage = effetFurieux(-30, toi, ennemi);
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
