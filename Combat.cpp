#include "Combat.h"

Combat::Combat(Prof p1, Prof p2, Terrain _terrain)
{
	professeurs.push_back(p1);
	professeurs.push_back(p2);
	terrain = _terrain;
}


Combat::~Combat()
{
}

vector<Prof> Combat::Professeurs()
{
	return professeurs;
}

Terrain Combat::GetTerrain()
{
	return terrain;
}

void Combat::DebuterCombat()
{

}


