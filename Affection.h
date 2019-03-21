#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class Affection :public Sort<T>
{
public:
	Affection()
	{
		accuracy = 100;
		nom = "Affection";
		description = "dimminue la defense de l'adversaire";
	}
	~Affection() {}
	virtual void activation(T &toi, T &ennemi)
	{
		ennemi.setDefense(1/1.25);
		cout << toi.Nom() << " utilise " << nom << endl << "La vitesse de " << toi.Nom() << " augmente" << endl << endl;
	}
};
