#pragma once
#include <iostream>
#include <vector>
#include "sort.h"
#include <string>


using namespace std;
class Prof
{
protected:
	int vie;
	string nom;
	int vitesse;
	int attaquePuissance;
	int defense;
	 int vitesseBase;
	 int attaquePuissanceBase;
	 int defenseBase;
	 int vieBase;
	int etat;
	string sprite;
	Sort<Prof> *sort;

public:
	Prof();
	virtual ~Prof();
	void changerEtat();
	void attaquer(int m_sort, Prof ennemi);

	int setVie(int niveauVie);
	int getVie();

	string setNom(string nomProf);
	string getNom();

	int setVitesse(int vitesse);
	int getVitesse();

	int getAttaquePuissance();
	int setAttaquePuissance(int attaque);

	int getDefense();
	int setDefense(int def);

	int getDefenseBase();
	int getVitesseBase();
	int getAttaquePuissanceBase();
	int getVieBase();


	int getEtat();
	int setEtat(int m_etat);

	string getSprite();
	void afficher();

};

