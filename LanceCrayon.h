#pragma once
#include "Sort.h"
template<typename T>
class LanceCrayon :public Sort<T>
{
public:
	LanceCrayon()
	{
		accuracy = 40;
		nom = "Lance de crayon";
		description = "Grand dommage à l'ennemi, peu de precision";
	}
	~LanceCrayon() {}
	virtual void activation(T &toi, T &ennemi)
	{
		int dommage = -100 * toi.AttaquePuissance() / ennemi.Defense();
		ennemi.setVie(dommage);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
	}

};
