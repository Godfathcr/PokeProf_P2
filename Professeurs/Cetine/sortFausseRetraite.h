#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class sortFausseRetraite :public Sort<T>
{
public:
	sortFausseRetraite()
	{
		srand((unsigned)time(0));
		accuracy = 100;
		nom = "Fausse Retraite";
		description = "Tentative d'une retraite, rend furieux le retraite";
	}
	~sortFausseRetraite() {}
	virtual void activation(T &toi, T &ennemi)
	{
		cout << toi.Nom() << " utilise " << nom << endl;
		if (toi.CompteurFurieux() < 0)
		{
			int nbrTour = rand() % 2 + 3;
			toi.setCompteurFurieux(nbrTour);
			cout << toi.Nom() << " devient furieux" << endl;
		}
		else
		{
			cout << toi.Nom() << " manque son attaque" << endl;
		}
	}
};
