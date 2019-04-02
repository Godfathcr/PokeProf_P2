#pragma once
#include "Sort.h"
template<typename T>
class sortLaSolutionne :public Sort<T>
{
public:
	sortLaSolutionne()
	{
		accuracy = 75;
		nom = "Accent latino";
		description = "Utilise un accent qui reduit la comprehension (augmente la defense et potentiel etourdissement)";
	}
	~sortLaSolutionne() {}

	virtual void activation(T &toi, T &ennemi)
	{
		cout << toi.Nom() << " utilise " << nom << endl;
		ennemi.setEtat(3);
		cout << ennemi.Nom() << " est etourdi" << endl;
		int nbrTour = rand() % 4 + 1;
		ennemi.setEtatCompteur(nbrTour);
	}

};
