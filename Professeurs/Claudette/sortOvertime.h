#pragma once
#pragma once
#include "Sort.h"
#include <ctime>
template <typename T>
class sortOvertime :public Sort<T>
{
public:
	sortOvertime()
	{
		accuracy = 100;
		nom = "En overtime";
		description = "augmente la vitesse";
	}
	~sortOvertime() {}
	virtual void activation(T &toi, T &ennemi)
	{
		toi.setVitesse(toi.Vitesse()*1.25);
		cout << toi.Nom() << " utilise " << nom << endl << "La vitesse de " << toi.Nom() << " augmente" << endl << endl;
	}
};
