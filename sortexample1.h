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
		int dommage = -40 * toi.AttaquePuissance() / ennemi.Defense();
		ennemi.setVie(dommage);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
	}
	
};

