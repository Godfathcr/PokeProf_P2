#pragma once
#include <string>

using namespace std;

class Terrain
{
public:
	Terrain();
	Terrain(string image);
	~Terrain();
	string Image();
	string Nom;

private :
	string image;
};

