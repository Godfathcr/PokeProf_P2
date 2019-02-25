#include "Combat.h"

Combat::Combat()
{
}


Combat::~Combat()
{
}

Terrain Combat::GetTerrain()
{
	return terrain;
}

void Combat::DebuterCombat()
{
	
	Titre();

	while (CombatEnCours()) {
		Tour tour;
		TourCourant = tour;

		DeterminerPremierJoueur();

		//Premier joueur qui choisi son attaque ou defense
		cout << "------->" << TourCourant.PremierJoueur->Nom() << ", A toi de jouer !" << endl << endl;
		TourCourant.PremierJoueur->afficherSorts();

		cout << endl;
		TourCourant.PremierJoueur->attaquer(ObtenirInput(0,2), TourCourant.DeuxiemeJoueur);

		//Deuxieme joueur qui choisi son attaque ou defense
		cout << endl;
		cout << "------->" << TourCourant.DeuxiemeJoueur->Nom() << ", A toi de jouer !" << endl << endl;
		TourCourant.DeuxiemeJoueur->afficherSorts();

		cout << endl;
		TourCourant.DeuxiemeJoueur->attaquer(ObtenirInput(0,2), TourCourant.PremierJoueur);

		TourCourant.Afficher();
		Tours.push_back(tour);
	}
}

void Combat::Titre(){

	cout << "------------------------Debut du combat!------------------------" << endl << endl;
	cout << Joueur1.Nom() << "                      VS                      " << Joueur2.Nom() << endl << endl;
}

bool Combat::CombatEnCours() {
	return Joueur1.EnVie() && Joueur2.EnVie();
}

void Combat::SelectionPersonnages() {
	int personnageJoueur;

	ProfExample1 p1;
	ProfExample2 p2;
	ProfExample3 p3;

	cout << "------------------------Selection des Personnages !------------------------" << endl << endl;

	cout << "Joueur 1, choisi ton PokeProf! : " << endl << endl;
	cout << "1. " << p1.Nom() << "       2. " << p2.Nom() << "       3. " << p3.Nom() << endl << endl;

	personnageJoueur = ObtenirInput(1,3);
	cout << endl;

	switch (personnageJoueur) {
	case 1:
		Joueur1 = ProfExample1();
		break;
	case 2:
		Joueur1 = ProfExample2();
		break;
	case 3:
		Joueur1 = ProfExample3();
		break;
	}

	cout << "Joueur 1, Vous avez choisi : " << Joueur1.Nom() << " !"<< endl << endl;

	cout << "Joueur 2, choisi ton PokeProf! : " << endl << endl;
	cout << "1. " << p1.Nom() << "       2. " << p2.Nom() << "       3. " << p3.Nom() << endl << endl;

	personnageJoueur = ObtenirInput(1,3);
	cout << endl;

	switch (personnageJoueur) {
	case 1:
		Joueur2 = ProfExample1();
		break;
	case 2:
		Joueur2 = ProfExample2();
		break;
	case 3:
		Joueur2 = ProfExample3();
		break;
	}

	cout << "Joueur 2, Vous avez choisi : " << Joueur2.Nom() << " !" << endl << endl;

	system("CLS");
}

void Combat::SelectionTerrain() {

	int terrainChoisi;

	Terrain t;
	t.Nom = "Cafeteria";
	Terrain t2;
	t2.Nom = "Salle de tutorat";
	Terrain t3;
	t3.Nom = "Salle de cours";

	cout << "Bienvenue Joueur 1 et Joueur 2! Veuillez selectionner votre Terrain" << endl << endl;
	cout << "1. " << t.Nom << "       2. " << t2.Nom << "       3. " << t3.Nom << endl << endl;

	terrainChoisi = ObtenirInput(1,3);
	
	switch (terrainChoisi) {
		case 1 :
			terrain = t;
			break;
		case 2 :
			terrain = t2;
			break;
		case 3 :
			terrain = t3;
			break;
	}
	
	cout << endl;
	cout << "Vous avez choisi la : " << GetTerrain().Nom << " !" << endl << endl;
	
}

void Combat::Regles() {

	cout << "------------------------Voici les regles !------------------------" << endl << endl;
	cout << "1. Selectionner votre sort puis passez automatiquement votre tour !" << endl;
	cout << "2. Constater les resultats du tour !" << endl;
	cout << "3. Recommencer jusqu'a ce qu'un des PokeProf n'est plus de vie !" << endl;
	cout << "4. Bon match Joueur 1 et Joueur 2 !" << endl << endl;

}

void Combat::DeterminerPremierJoueur() {

	bool joueur1EnPremier = Joueur1.Vitesse() > Joueur2.Vitesse();

	if (joueur1EnPremier) {
		TourCourant.PremierJoueur = &Joueur1;
		TourCourant.DeuxiemeJoueur = &Joueur2;
	}
	else {
		TourCourant.PremierJoueur = &Joueur2;
		TourCourant.DeuxiemeJoueur = &Joueur1;
	}
}

int Combat::ObtenirInput(int min,  int max)
{
	int x = 0;
	bool loop = true;
	while (loop)
	{
		cin.clear();
		cout << "Veuillez selectionner un entier de "<< min << " a " << max << endl;
		string s;		
		cin >> s;
		cout << endl;

		stringstream ss(s);
		if (ss >> x)
		{
			if (x >= min && x <= max) {
				loop = false;
				continue;
			}
		}
		cout << "Invalide!" << endl;
	}
	return x;
}


