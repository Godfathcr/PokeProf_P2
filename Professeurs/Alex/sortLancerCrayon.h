#pragma once
#include "Sort.h"
template<typename T>
class sortLanceCrayon :public Sort<T>
{
public:
	sortLanceCrayon()
	{
		accuracy = 30;
		nom = "Lance de crayon";
		description = "Grand dommage à l'ennemi, peu de precision";
	}
	~sortLanceCrayon() {}
	virtual void activation(T &toi, T &ennemi)
	{
		int dommage = effetFurieux(-100,toi,ennemi);
		ennemi.setVie(dommage);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
	}

};
