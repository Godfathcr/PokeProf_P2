#pragma once
#include "Sort.h"
template <typename T>
class SortDefense :
	public Sort<T>
{
public:
	SortDefense()
	{
		accuracy = 100;
		nom = "Defendre";
		description = "Augmente la defense";

	}
	~SortDefense() {}
	void virtual activation(T &toi,T &ennemi)
	{
		toi.setDefense(1.25);
		//cout << toi.Defense() << endl;
		cout << toi.Nom() << " utilise " << nom << endl << "La defense de " << toi.Nom() << " augmente" << endl;
	}
};

