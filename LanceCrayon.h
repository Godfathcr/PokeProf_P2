#pragma once
#include "Sort.h"
template<typename T>
class LanceCrayon :public Sort<T>
{
public:
	LanceCrayon()
	{
		accuracy = 20;
		nom = "Lance de crayon";
		description = "Grand dommage à l'ennemi, peu de precision";
	}
	~LanceCrayon() {}
	virtual void activation(T &toi, T &ennemi)
	{
		int attaque, defense;
		if (toi.Etat() == 5)
			attaque = toi.AttaquePuissance() * 2;
		else
			attaque = toi.AttaquePuissance();
		if (ennemi.Etat() == 5)
			defense = ennemi.Defense() * 2;
		else
			defense = ennemi.Defense();
		int dommage = -100 * attaque / defense;
		ennemi.setVie(dommage);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
	}

};
