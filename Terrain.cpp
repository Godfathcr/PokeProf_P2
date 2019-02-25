#include "Terrain.h"



Terrain::Terrain()
{
}

Terrain::Terrain(string img)
{
	image = img;
}

Terrain::~Terrain()
{
}

string Terrain::Image() {
	return image;
}
