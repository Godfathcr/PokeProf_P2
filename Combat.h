#pragma once

#include "terrain.h"
#include "prof.h"
#include <vector>

class Combat
{
public:
	Combat(Prof, Prof, Terrain);
	~Combat();
	vector<Prof> Professeurs();
	Terrain GetTerrain();
	void DebuterCombat();
	//tour

private:
	Terrain terrain;
	vector<Prof> professeurs;
	//tour
};

