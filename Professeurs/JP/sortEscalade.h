#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class sortEscalade :public Sort<T>
{
public:
	sortEscalade()
	{
		srand((unsigned)time(0));
		accuracy = 60;
		nom = "Escalade";
		description = "Peu de dommage à l'ennemi, augmente la vitesse";
	}
	~sortEscalade() {}
	virtual void activation(T &toi, T &ennemi)
	{
		int dommage = effetFurieux(-30,toi,ennemi);
		ennemi.setVie(dommage);
		toi.setVitesse(toi.Vitesse()*1.1);
		cout << toi.Nom() << " utilise " << nom << endl << ennemi.Nom() << " a recu " << -dommage << " hp de dommage" << endl;
	}
};

