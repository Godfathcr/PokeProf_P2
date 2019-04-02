#pragma once
#include "Sort.h"
template<typename T>
class sortDiviserLesEquipes :public Sort<T>
{
public:
	sortDiviserLesEquipes()
	{
		accuracy = 90;
		nom = "Diviser les equipes de projet";
		description = "Dommage sur le moral des autres profs qui entendent les etudiants se plaindrent";
	}
	~sortDiviserLesEquipes() {}
	virtual void activation(T &toi, T &ennemi)
	{
		int dommage = effetFurieux(-40,toi,ennemi);
		ennemi.setVie(dommage);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
	}

};
