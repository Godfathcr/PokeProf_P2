#pragma once
#include "Sort.h"
template<typename T>
class sortCoupDeHemblay :public Sort<T>
{
public:
	sortCoupDeHemblay()
	{
		accuracy = 90;
		nom = "Coup de hemblay";
		description = "Dommage";
	}
	~sortCoupDeHemblay() {}
	virtual void activation(T &toi, T &ennemi)
	{
		int dommage = effetFurieux(-40,toi,ennemi);
		ennemi.setVie(dommage);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
	}
};
