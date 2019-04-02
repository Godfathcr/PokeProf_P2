#pragma once
#include "Sort.h"
#include<ctime>

template <typename T>
class sortCaffee :
	public Sort<T>
{
public:
	sortCaffee()
	{
		srand((unsigned)time(0));
		nom = "Speed gamble";
		description = "Augmente la vitesse de beaucoup, mais avec des chances d'empoisonner";
		accuracy = 100;
	}
	~sortCaffee() {}
	void virtual activation(T &toi, T &ennemi)
	{
		if (rand() % 10 < 3)
		{
			toi.setEtat(4);
			cout << toi.Nom() << " manque " << nom << endl << toi.Nom() << " devient Hyperactif" << endl;
			toi.setEtatCompteur(4);
		}
		else
		{
			toi.setVitesse(toi.Vitesse()*1.25*1.25);
			cout << toi.Nom() << " utilise " << nom << endl << "La vitesse de " << toi.Nom() << " augmente beaucoup" << endl << endl;
		}
	}
};

