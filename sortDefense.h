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
		description = "Augumente la defense";

	}
	~SortDefense() {}
	void virtual activation(T &toi,T &ennemi)
	{
		toi.setDefense(1.25);
		cout << toi.getDefense() << endl;
		cout << toi.getNom() << " utilise " << nom << endl << "La defense de " << toi.getNom() << " augumente" << endl;
	}
};

