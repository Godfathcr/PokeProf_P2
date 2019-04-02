#pragma once
#include "Sort.h"
template<typename T>
class sortLoiC21 :public Sort<T>
{
public:
	sortLoiC21()
	{
		accuracy = 100;
		nom = "Loi C21";
		description = "Rappelle de la loi C21";
	}
	~sortLoiC21() {}

	virtual void activation(T &toi, T &ennemi)
	{
		if (toi.CompteurFurieux() < 0)
		{
			int nbrTour = rand() % 2 + 3;
			toi.setCompteurFurieux(nbrTour);
			cout << toi.Nom() << " devient furieux" << endl;
		}
		else
		{
			cout << toi.Nom() << " manque son attaque" << endl;
		}
	}

};
