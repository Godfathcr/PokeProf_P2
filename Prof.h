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
	int compteurFurieux;
	float attaquePuissance;
	float defense;
	int vitesseBase;
	int attaquePuissanceBase;
	int defenseBase;
	int vieBase;
	int etat;
	int compteuretat;
	string sprite;
	Sort<Prof> **sort;

public:
	Prof();
	virtual ~Prof();
	void changerEtat();
	void attaquer(int m_sort, Prof* ennemi);

	int CompteurFurieux();
	void setCompteurFurieux(int compt);

	int setVie(int niveauVie);
	int Vie();

	string setNom(string nomProf);
	string Nom();

	int setVitesse(int vitesse);
	int Vitesse();

	int AttaquePuissance();
	int setAttaquePuissance(float attaque);

	int Defense();
	int setDefense(float def);

	int DefenseBase();
	int VitesseBase();
	int AttaquePuissanceBase();
	int VieBase();


	int Etat();
	string NomEtat();
	int setEtat(int m_etat);

	int EtatCompteur();
	int setEtatCompteur(int m_compteur);

	bool EnVie();
	string getSprite();
	void afficher();
	void afficherSorts();
	int QuantiteDeSort();
	

};

