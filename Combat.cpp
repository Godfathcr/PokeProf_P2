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
		TourCourant = Tour();
		int premierInput;
		int deuxiemeInput;


		DeterminerPremierJoueur();

		//Premier joueur qui choisi son attaque ou defense
		cout << "------->" << TourCourant.PremierJoueur->Nom() << ", A toi de jouer !" << endl << endl;
		TourCourant.PremierJoueur->afficherSorts();
		cout << endl;
		premierInput = ObtenirInputFiltre(1, 2);

		//Deuxieme joueur qui choisi son attaque ou defense
		cout << endl;
		cout << "------->" << TourCourant.DeuxiemeJoueur->Nom() << ", A toi de jouer !" << endl << endl;
		TourCourant.DeuxiemeJoueur->afficherSorts();
		deuxiemeInput = ObtenirInputFiltre(1, 2);
		cout << endl;

		//Les deux joueurs qui attaquent
		TourCourant.PremierJoueur->attaquer(premierInput-1, TourCourant.DeuxiemeJoueur);
		TourCourant.DeuxiemeJoueur->attaquer(deuxiemeInput-1, TourCourant.PremierJoueur);

		cout << endl;
		TourCourant.Afficher();
		Tours.push_back(TourCourant);
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

	Alex p1;
	Claudette p2;
	Cetine p3;
	JP p4;
	Domingo p5;
	Denis p6;
	

	cout << "------------------------Selection des Personnages !------------------------" << endl << endl;

	cout << "Joueur 1, choisi ton PokeProf! : " << endl << endl;
	cout << "1. " << p1.Nom() << "     2. " << p2.Nom() << "     3. " << p3.Nom() << "     4. " << p4.Nom() << "     5. " << p5.Nom() << "     6. " << p6.Nom() << endl << endl;

	personnageJoueur = ObtenirInputFiltre(1,2);
	cout << endl;

	switch (personnageJoueur) {
	case 1:
		Joueur1 = Alex();
		break;
	case 2:
		Joueur1 = Claudette();
		break;
	case 3:
		Joueur1 = Cetine();
		break;
	case 4:
		Joueur1 = JP();
		break;
	case 5:
		Joueur1 = Domingo();
		break;
	case 6:
		Joueur1 = Denis();
		break;
	}

	cout << "Joueur 1, Vous avez choisi : " << Joueur1.Nom() << " !"<< endl << endl;

	cout << "Joueur 2, choisi ton PokeProf! : " << endl << endl;
	cout << "1. " << p1.Nom() << "     2. " << p2.Nom() << "     3. " << p3.Nom() << "     4. " << p4.Nom() << "     5. " << p5.Nom() << "     6. " << p6.Nom() << endl << endl;

	personnageJoueur = ObtenirInputFiltre(1,2);
	cout << endl;

	switch (personnageJoueur) {
	case 1:
		Joueur2 = Alex();
		break;
	case 2:
		Joueur2 = Claudette();
		break;
	case 3:
		Joueur2 = Cetine();
		break;
	case 4:
		Joueur2 = JP();
		break;
	case 5:
		Joueur2 = Domingo();
		break;
	case 6:
		Joueur2 = Denis();
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

	terrainChoisi = ObtenirInputFiltre(1,2);
	cout << terrainChoisi<<endl;
	
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

int Combat::ObtenirInputFiltre(int min,  int max)
{
	int filtre1, filtre2, filtre3, filtre4;
	int x = 0;
	bool loop = true;
	while (loop)
	{
		cin.clear();
		cout << "Entrer 1 pour afficher la valeur des potentiometres et 2 pour valider" << endl;
		string s;		
		cin >> s;
		cout << endl;

		stringstream ss(s);
		if (ss >> x)
		{
			if (x == max) {
				loop = false;
				continue;
			}
		}
		filtre1 = port.lireRegistre(nreg_lect_can0, echconv[0]);
		filtre2 = port.lireRegistre(nreg_lect_can1, echconv[1]);
		filtre3 = port.lireRegistre(nreg_lect_can2, echconv[2]);
		filtre4 = port.lireRegistre(nreg_lect_can3, echconv[3]);
		
		cout << "Potentiometre 1 : " << echconv[0] << endl;
		cout << "Potentiometre 2 : " << echconv[1] << endl;
		cout << "Potentiometre 3 : " << echconv[2] << endl;
		cout << "Potentiometre 4 : " << echconv[3] << endl;
	}
	return phoneme.getSonInput(echconv[0], echconv[1], echconv[2], echconv[3]);
}



