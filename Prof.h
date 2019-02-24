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
	Sort<Prof> **sort;

public:
	Prof();
	virtual ~Prof();
	void changerEtat();
	void attaquer(int m_sort, Prof* ennemi);

	int setVie(int niveauVie);
	int Vie();

	string setNom(string nomProf);
	string Nom();

	int setVitesse(int vitesse);
	int Vitesse();

<<<<<<< HEAD
	int AttaquePuissance();
	int setAttaquePuissance(int attaque);

	int Defense();
	int setDefense(int def);
=======
	int getAttaquePuissance();
	int setAttaquePuissance(float attaque);

	int getDefense();
	int setDefense(float def);
>>>>>>> origin/master

	int DefenseBase();
	int VitesseBase();
	int AttaquePuissanceBase();
	int VieBase();


	int Etat();
	int setEtat(int m_etat);

	string getSprite();
	void afficher();

};

