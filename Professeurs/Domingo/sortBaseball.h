#pragma once
#include "Sort.h"
template<typename T>
class sortBaseball :public Sort<T>
{
public:
	sortBaseball()
	{
		accuracy = 85;
		nom = "Parler de baseball";
		description = "Lance une balle de baseball sur l'autre prof";
	}
	~sortBaseball() {}

	virtual void activation(T &toi, T &ennemi)
	{
		int dommage = effetFurieux(-20, toi, ennemi);
		ennemi.setVie(dommage);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;

	}

};
