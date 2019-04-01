#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class MotPasse :public Sort<T>
{
public:
	MotPasse()
	{
		srand((unsigned)time(0));
		accuracy = 100;
		nom = "Mot de passe: Caramel";
		description = "Rend furieux (Augmente l'attaque et la défense temporairement, mais a un cout)";
	}
	~MotPasse() {}
	virtual void activation(T &toi, T &ennemi)
	{
		cout << toi.Nom() << " utilise " << nom << endl;
		if(toi.CompteurFurieux()<0)
		{
			int nbrTour = rand() % 2 + 3;
			toi.setCompteurFurieux(nbrTour);
			cout << toi.Nom() << " devient furieux"<<endl;
		}
		else
		{
			cout << toi.Nom() << " manque son attaque" << endl;
		}
	}
};
