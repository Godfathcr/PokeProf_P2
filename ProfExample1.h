#pragma once
#include "Prof.h"
class ProfExample1 :
	public Prof
{
private:
	int compteurFurieux;

public:
	int CompteurFurieux();
	void setCompteurFurieux(int compt);
	ProfExample1();
	~ProfExample1();
};

