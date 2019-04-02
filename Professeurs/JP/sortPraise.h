#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class sortPraise :public Sort<T>
{
public:
	sortPraise()
	{
		accuracy = 100;
		nom = "Praise";
		description = "augmente l'attaque";
	}
	~sortPraise() {}
	virtual void activation(T &toi, T &ennemi)
	{
		toi.setAttaquePuissance(1.25);
		cout << toi.Nom() << " utilise " << nom << endl << "L'attaque de " << toi.Nom() << " augmente" << endl << endl;
	}
};
