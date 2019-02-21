#include "Prof.h"
#include "Sort.h"
#include <iostream>
#include <string>

using namespace std; 

Prof::Prof()
{
	etat = 0;
}


Prof::~Prof()
{
}

void Prof::changerEtat()
{
	etat = getEtat();
}

void Prof::attaquer(int m_sort, Prof ennemi)
{
	sort[m_sort].activation(*this, ennemi);

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

int Prof::getVie()
{
	return vie;
}

string Prof::setNom(string nomProf)
{
	nom = nomProf;
	return nom;
}

string Prof::getNom()
{
	return nom;
}

int Prof::setVitesse(int vitesse)
{
	this->vitesse = vitesse;
	return 0;
}

int Prof::getVitesse()
{
	return vitesse;
}

int Prof::getAttaquePuissance()
{
	return attaquePuissance;
}

int Prof::setAttaquePuissance(int attaque)
{
	attaquePuissance = attaque;
	return attaquePuissance;
}

int Prof::getDefense()
{
	return defense;
}

int Prof::setDefense(int def)
{
	defense = defense + def;
	if (defense > defenseBase)
	{
		defense = defenseBase;
	}
	else if (defense < 0)
	{
		defense = 0;
	}
	return defense;
}

int Prof::getDefenseBase()
{
	return defenseBase;
}

int Prof::getVitesseBase()
{
	return vitesseBase;
}

int Prof::getAttaquePuissanceBase()
{
	return attaquePuissanceBase;
}

int Prof::getVieBase()
{
	return vieBase;
}

int Prof::getEtat()
{
	return etat;
}

int Prof::setEtat(int  m_etat)
{
	etat = m_etat;
	if (etat == 1)return etat;
	if (etat == 2)return etat;
	if (etat == 3)return etat;
	if (etat == 4)return etat;
	return etat;
}

string Prof::getSprite()
{
	return sprite;
}

/*vector<Sort> Prof::getSort()
{
	return vector<Sort>();
}*/


void Prof::afficher() {
	cout << "----Test classe Prof----" << endl;
	
	cout << "Votre Poke-Prof est : " <<  endl;
	cout << nom << endl;
	cout << "Niveau de vie : " << vie << endl;
	cout << "Defense : " << defense << endl;
	cout << "Etat : " << endl;
	if (etat == 1)cout << "Neutre" << endl;
	if (etat == 2)cout << "Saoul" << endl;
	if (etat == 3)cout << "Etourdis" << endl;
	if (etat == 4)cout << "Hyperactif" << endl;
	
	
}
