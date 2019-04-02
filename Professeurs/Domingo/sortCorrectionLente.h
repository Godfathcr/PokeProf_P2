#pragma once
#include "Sort.h"
template<typename T>
class sortCorrectionLente :public Sort<T>
{
public:
	sortCorrectionLente()
	{
		accuracy = 100;
		nom = "Corriger lentement";
		description = "Effectue une correction tres lente, reinitialise son etat et augmente la vie";
	}
	~sortCorrectionLente() {}

	virtual void activation(T &toi, T &ennemi)
	{
		toi.setVie(20);
		toi.setEtat(1);
		cout << toi.Nom() << " utilise " << nom << endl << toi.Nom() << " a augmente sa vie de 20" << endl;

		if(toi.Etat() != 0)
			cout << toi.Nom() << " utilise " << nom << endl << toi.Nom() << "perd son etat : " << toi.NomEtat() << endl;

	}

};
