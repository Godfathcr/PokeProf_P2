#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class Charabiat :public Sort<T>
{
public:
	Charabiat()
	{
		accuracy = 100;
		nom = "Charabiat";
		description = "Confus l'ennemie";
	}
	~Charabiat() {}
	virtual void activation(T &toi, T &ennemi)
	{
		ennemi.setEtat(3);
		cout << ennemi.Nom() << " est etourdi" << endl;
		int nbrTour = rand() % 4 + 1;
		ennemi.setEtatCompteur(nbrTour);
	}
};

