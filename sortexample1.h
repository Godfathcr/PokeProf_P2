#pragma once
#include "Sort.h"
template<typename T> 
class SortExample1 :public Sort<T>
{
public:
	SortExample1() 
	{
		accuracy = 80;
		nom = "Exemple 1";
		description = "Dommage à l'ennemi";
	}
	~SortExample1() {}
	virtual void activation(T &toi, T &ennemi) 
	{
		int attaque, defense;
		if (toi.CompteurEtat() > 0)
			attaque = toi.AttaquePuissance() * 2;
		else
			attaque = toi.AttaquePuissance();
		if (ennemi.CompteurEtat() > 0)
			defense = ennemi.Defense() * 2;
		else
			defense = ennemi.Defense();
		int dommage = -40 * attaque / defense;
		ennemi.setVie(dommage);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
	}
	
};

