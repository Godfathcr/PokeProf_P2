#include "FenetreChoixTerrain.h"
#include <QPalette>
#include <QFont>
#include<iostream>
#include"fenetrechoix.h"

using namespace std;
FenetreChoixTerrain::FenetreChoixTerrain()
{
	QPalette palette;
	palette.setColor(QPalette::WindowText, Qt::white);
	QFont font;
	font.setPointSize(32);
	
	setMinimumSize(1900, 1000);
	mainLayout = new QGridLayout();
	
	imCaf = new QPixmap("CafeteriatImage.jpg");
	imCaf->scaled(QSize(1000, 600), Qt::KeepAspectRatioByExpanding);
	pixCaf = new ClickLabel();
	texCaf = new ClickLabel();
	texCaf->setText("Cafeteriat");
	texCaf->setPalette(palette);
	texCaf->setFont(font);
	pixCaf->setPixmap(*imCaf);
	
	imClasse = new QPixmap("ClasseImage.jpg");
	imClasse->scaled(QSize(1000, 600), Qt::KeepAspectRatioByExpanding);
	pixClasse = new ClickLabel();
	texClasse = new ClickLabel();
	texClasse->setText("Classe");
	texClasse->setPalette(palette);
	texClasse->setFont(font);
	pixClasse->setPixmap(*imClasse);
	
	imTuto = new QPixmap("TutoImage.jpg");
	imTuto->scaled(QSize(1000, 600), Qt::KeepAspectRatioByExpanding);
	pixTuto = new ClickLabel();
	texTuto = new ClickLabel();
	texTuto->setText("Tutorat");
	texTuto->setPalette(palette);
	texTuto->setFont(font);
	pixTuto->setPixmap(*imTuto);

	
	mainLayout->addWidget(pixCaf,0,0, Qt::AlignCenter);
	mainLayout->addWidget(texCaf,0,0,Qt::AlignCenter);
	mainLayout->addWidget(pixClasse, 0, 1, Qt::AlignCenter);
	mainLayout->addWidget(texClasse, 0, 1, Qt::AlignCenter);
	mainLayout->addWidget(pixTuto, 0, 2, Qt::AlignCenter);
	mainLayout->addWidget(texTuto, 0, 2, Qt::AlignCenter);

	connect(pixCaf, SIGNAL(clicked()), this, SLOT(selectTerrainCaf()));
	connect(pixClasse, SIGNAL(clicked()), this, SLOT(selectTerrainClasse()));
	connect(pixTuto, SIGNAL(clicked()), this, SLOT(selectTerrainTuto()));
	connect(texCaf, SIGNAL(clicked()), this, SLOT(selectTerrainCaf()));
	connect(texClasse, SIGNAL(clicked()), this, SLOT(selectTerrainClasse()));
	connect(texTuto, SIGNAL(clicked()), this, SLOT(selectTerrainTuto()));
	
	setWindowTitle("Choix de terrain");
	setLayout(mainLayout);
}
void FenetreChoixTerrain::selectTerrainCaf()
{
	FenetreChoix *fenetreChoix;
	fenetreChoix = new FenetreChoix(1);
	fenetreChoix->show();
	this->close();
}
void FenetreChoixTerrain::selectTerrainClasse()
{
	FenetreChoix *fenetreChoix;
	fenetreChoix = new FenetreChoix(2);
	fenetreChoix->show();
	this->close();
}
void FenetreChoixTerrain::selectTerrainTuto()
{
	FenetreChoix *fenetreChoix;
	fenetreChoix = new FenetreChoix(3);
	fenetreChoix->show();
	this->close();
}
