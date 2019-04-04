#pragma once

#include "terrain.h"
#include "prof.h"
#include "Professeurs/Alex/alex.h"
#include "Professeurs/Cetine/cetine.h"
#include "Professeurs/Claudette/claudette.h"
#include "Professeurs/Denis/denis.h"
#include "Professeurs/Domingo/domingo.h"
#include "Professeurs/JP/jp.h"
#include "tour.h"
#include <vector>
#include <sstream>
#include "CommunicationFPGA.h"
#include "Phoneme.h"

class Combat
{
	
unsigned const int nreg_lect_can0 = 3;      // fpga -> PC  canal 0 lus FPGA -> PC
unsigned const int nreg_lect_can1 = 4;      // fpga -> PC  canal 1 lus FPGA -> PC
unsigned const int nreg_lect_can2 = 5;      // fpga -> PC  canal 2 lus FPGA -> PC
unsigned const int nreg_lect_can3 = 6;      // fpga -> PC  canal 3 lus FPGA -> PC

	
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
	int ObtenirInputFiltre(int,int);
	int echconv[4]; 
	CommunicationFPGA port;
	Phoneme phoneme;
	//tour
};

