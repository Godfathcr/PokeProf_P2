#include "Prof.h"
#include "Sort.h"
#include <iostream>
#include <string>
#include<ctime>

using namespace std; 

Prof::Prof()
{
	etat = 0;
	srand((unsigned)time(0));
}


Prof::~Prof()
{
}

void Prof::changerEtat()
{
	etat = Etat();
}

void Prof::attaquer(int m_sort, Prof *ennemi)
{
	if (rand() % 100< sort[m_sort]->getAccuracy())
	{
		sort[m_sort]->activation(*this, *ennemi);
	}
	else
	{
		cout << nom << " manque son attaque" <<endl << endl;
	}
}


int Prof::setVie(int niveauVie)
{

	vie = vie + niveauVie;

	if (vie > vieBase)
	{
		vie = vieBase;
	}
	else if (vie < 0)
	{
		vie = 0;
	}
	return vie;
}

int Prof::Vie()
{
	return vie;
}

string Prof::setNom(string nomProf)
{
	nom = nomProf;
	return nom;
}

string Prof::Nom()
{
	return nom;
}

int Prof::setVitesse(int vitesse)
{
	this->vitesse = vitesse;
	return 0;
}

int Prof::Vitesse()
{
	return vitesse;
}

int Prof::AttaquePuissance()
{
	return attaquePuissance;
}

int Prof::setAttaquePuissance(float attaque)
{
	attaquePuissance *= attaque;
	return defense;
}

int Prof::Defense()
{
	return defense;
}

int Prof::setDefense(float def)
{
	defense = defense * def;
	if (defense < 0)
	{
		defense = 0;
	}
	return defense;
}

int Prof::DefenseBase()
{
	return defenseBase;
}

int Prof::VitesseBase()
{
	return vitesseBase;
}

int Prof::AttaquePuissanceBase()
{
	return attaquePuissanceBase;
}

int Prof::VieBase()
{
	return vieBase;
}

int Prof::Etat()
{
	return etat;
}

int Prof::setEtat(int  m_etat)
{
	etat = m_etat;
	/*if (etat == 1)return etat;
	if (etat == 2)return etat;
	if (etat == 3)return etat;
	if (etat == 4)return etat;*/
	return etat;
}

string Prof::getSprite()
{
	return sprite;
}

bool Prof::EnVie() {
	return Vie() > 0;
}

/*vector<Sort<Prof>> Prof::getSort()
{
	return vector<Sort>();
}*/


void Prof::afficher() {
	cout << "Votre Poke-Prof est : " << Nom() << endl;
	cout << "Niveau de vie : " << Vie() << endl;
	cout << "Defense : " << Defense() << endl;
	cout << "Vitesse : " << Vitesse() << endl;
	cout << "Etat : ";
	if (etat == 1)cout << "Neutre" << endl;
	if (etat == 2)cout << "Saoul" << endl;
	if (etat == 3)cout << "Etourdis" << endl;
	if (etat == 4)cout << "Hyperactif" << endl;
	
	
}

int Prof::QuantiteDeSort() {
	return 3;
}

void Prof::afficherSorts() {

	for (int i = 0; i < QuantiteDeSort(); i++) {
		cout << i << ". " << sort[i]->Nom() << " , " << sort[i]->Description() << endl;
	}
	cout << endl;
}
