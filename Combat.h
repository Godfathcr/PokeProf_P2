#pragma once

#include "terrain.h"
#include "prof.h"
#include "profExample1.h"
#include "profExample2.h"
#include "profExample3.h"
#include "tour.h"
#include <vector>
#include <sstream>

class Combat
{
public:
	Combat();
	~Combat();
	Prof Joueur1;
	Prof Joueur2;
	vector<Tour> Tours;
	Terrain GetTerrain();
	Tour TourCourant;
	void DebuterCombat();
	void Titre();
	bool CombatEnCours();
	void SelectionPersonnages();
	void SelectionTerrain();
	void Regles();
	
	//tour

private:
	Terrain terrain;
	void DeterminerPremierJoueur();
	int ObtenirInput(int,int);
	//tour
};

