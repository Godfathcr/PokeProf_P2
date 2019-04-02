#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class sortMotDePasse :public Sort<T>
{
public:
	sortMotDePasse()
	{
		srand((unsigned)time(0));
		accuracy = 90;
		nom = "Mot de passe: Caramel";
		description = "Rend furieux (Augmente l'attaque et la défense temporairement, mais a un cout)";
	}
	~sortMotDePasse() {}
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
