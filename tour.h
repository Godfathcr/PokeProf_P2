#pragma once
#include <string>
#include <vector>
#include "prof.h"

using namespace std;

class Tour {
	public:
		Tour();
		~Tour();
		Prof * PremierJoueur;
		Prof * DeuxiemeJoueur;
		void Afficher();
};