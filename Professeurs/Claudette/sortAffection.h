#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class sortAffection :public Sort<T>
{
public:
	sortAffection()
	{
		accuracy = 100;
		nom = "Affection";
		description = "dimminue la defense de l'adversaire";
	}
	~sortAffection() {}
	virtual void activation(T &toi, T &ennemi)
	{
		ennemi.setDefense(1 / 1.25);
		cout << toi.Nom() << " utilise " << nom << endl << "La vitesse de " << toi.Nom() << " augmente" << endl << endl;
	}
};
