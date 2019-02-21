#pragma once
#include "Sort.h"
#include<ctime>

template <typename T>
class SortCaffee :
	public Sort<T>
{
public:
	SortCaffee()
	{
		srand((unsigned)time(0));
		nom = "Speed gamble";
		description = "Augmente la vitesse de beaucoup, mais avec des chances d'empoisonner";
	}
	~SortCaffee() {}
	void activation(<T>& , <T>&)
	{
		if (rand() % 10 < 3)
		{
			toi.setEtat(4);
			cout << toi.getNom() << " manque " << nom << endl << toi.getNom() << " devient empoisonne" << endl;
		}
		else
		{
			toi.setVitesse(toi.getVitesse()*1.25*1.25);
			cout << toi.getNom() << " utilise " << nom << endl << "La vitesse de " << toi.getNom() << " augmente beaucoup" << endl;
		}
	}
};

