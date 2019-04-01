#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class Praise :public Sort<T>
{
public:
	Praise()
	{
		accuracy = 100;
		nom = "Praise";
		description = "augmente l'attaque";
	}
	~Praise() {}
	virtual void activation(T &toi, T &ennemi)
	{
		toi.setAttaquePuissance(1.25);
		cout << toi.Nom() << " utilise " << nom << endl << "L'attaque de " << toi.Nom() << " augmente" << endl << endl;
	}
};
