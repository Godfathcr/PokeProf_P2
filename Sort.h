#pragma once
#include <string>
using namespace std;
template<typename T>
class Sort
{
public:
        Sort(){}
        virtual void activation(T & , T &)=0;
        virtual ~Sort() {}
        void setAccuracy(int m_accuracy)
        {
                accuracy = m_accuracy;
        }
        int getAccuracy()
        {
                return accuracy;
        }
        string Nom() {
                return nom;
        };

        string Description() {
                return description;
        }
		int effetFurieux(int intensite,T toi, T ennemi) {
			int attaque, defense;
			if (toi.CompteurFurieux() > 0)
				attaque = toi.AttaquePuissance() * 2;
			else
				attaque = toi.AttaquePuissance();
			if (ennemi.CompteurFurieux() > 0)
				defense = ennemi.Defense() * 2;
			else
				defense = ennemi.Defense();
			int dommage = intensite * attaque / defense;
			return dommage;
		}
protected:
        int accuracy;
        string description;
        string nom;
};

