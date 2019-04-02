#pragma once
#include "Sort.h"
template<typename T>
class sortDiagrammeSurcharge :public Sort<T>
{
public:
	sortDiagrammeSurcharge()
	{
		accuracy = 30;
		nom = "Surchage de diagramme";
		description = "Confus les autres profs";
	}
	~sortDiagrammeSurcharge() {}
	virtual void activation(T &toi, T &ennemi)
	{
		cout << toi.Nom() << " utilise " << nom << endl;
			ennemi.setEtat(3);
			cout << ennemi.Nom() << " est etourdi" << endl;
			int nbrTour = rand() % 4 + 1;
			ennemi.setEtatCompteur(nbrTour);
	}

};
