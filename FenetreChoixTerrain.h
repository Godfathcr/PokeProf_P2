#ifndef FENETRECHOIXTERRAIN_H
#define FENETRECHOIXTERRAIN_H

#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QPixmap>
#include "ClickLabel.h"

class FenetreChoixTerrain : public QWidget
{
	Q_OBJECT
public:
	FenetreChoixTerrain();
public slots:
	void selectTerrainCaf();
	void selectTerrainClasse();
	void selectTerrainTuto();
private:
	QGridLayout *mainLayout;
	ClickLabel *pixCaf;
	ClickLabel *texCaf;
	QPixmap *imCaf;
	ClickLabel *pixClasse;
	ClickLabel *texClasse;
	QPixmap *imClasse;
	ClickLabel *pixTuto;
	ClickLabel *texTuto;
	QPixmap *imTuto;
	
};

#endif // FENETRECOMBAT_H
