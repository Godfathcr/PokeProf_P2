#include "tour.h" 

Tour::Tour() {
}

Tour::~Tour() {

}

 void Tour::Afficher() {
	 cout << "------------------------Resultat------------------------" << endl << endl;
	 cout << "Stats : " << PremierJoueur->Nom() << endl;
	 PremierJoueur->afficher();
	 cout << endl;

	 cout << "Stats : " << DeuxiemeJoueur->Nom() << endl;
	 DeuxiemeJoueur->afficher();
	 cout << endl;

	 cout << "------------------------Tour suivant!------------------------" << endl << endl;
 }