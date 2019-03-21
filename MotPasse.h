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
		description = "Rend furieux";
	}
	~MotPasse() {}
	virtual void activation(T &toi, T &ennemi)
	{
		toi.setEtat(5);
		int nbrTour = rand() % 2 + 3;
		toi.setEtatCompteur(nbrTour);
	}
};
