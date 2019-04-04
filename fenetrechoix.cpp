#include "fenetrechoix.h"
#include <QPalette>
#include <QFont>
#include <QFrame>
#include <iostream>
#include "FenetreChoixTerrain.h"
#include "fenetrecombat.h"

FenetreChoix::FenetreChoix(int terrain)
{
	Terrain = terrain;
	QPalette palette;
	palette.setColor(QPalette::WindowText, Qt::white);
	QPalette background;
	background.setColor(QPalette::Background, Qt::red);
	QFont font("OldEnglish",32);
	
	setMinimumSize(1900, 950);
	LayoutPerso = new QGridLayout();

	imAlex = new QPixmap("Alex.png");
	imAlex->scaled(QSize(100, 200));
	imBAlex = new QPixmap("wave.jpg");
	imAlex->scaled(QSize(100, 200));
	PixAlex = new ClickLabel();
	TexAlex = new ClickLabel();
	BackAlex = new ClickLabel();
	BackAlex->setFrameStyle(QFrame::Box | QFrame::Raised);
	BackAlex->setLineWidth(0);
	BackAlex->setMidLineWidth(3);
	BackAlex->setPixmap(*imBAlex);
	TexAlex->setText("Alex");
	PixAlex->setScaledContents(true);
	BackAlex->setScaledContents(true);
	TexAlex->setPalette(palette);
	TexAlex->setFont(font);
	PixAlex->setPixmap(*imAlex);

	imCetin = new QPixmap("Cetin2.0.png");
	imCetin->scaled(QSize(1000, 600));
	imBCetin = new QPixmap("Space.jpg");
	PixCetin = new ClickLabel();
	TexCetin = new ClickLabel();
	BackCetin = new ClickLabel();
	BackCetin->setFrameStyle(QFrame::Box | QFrame::Raised);
	BackCetin->setLineWidth(0);
	BackCetin->setMidLineWidth(3);
	BackCetin->setPixmap(*imBCetin);
	TexCetin->setText("Cetin");
	PixCetin->setScaledContents(true);
	BackCetin->setScaledContents(true);
	TexCetin->setPalette(palette);
	TexCetin->setFont(font);
	PixCetin->setPixmap(*imCetin);

	imClaudette = new QPixmap("Claudette.png");
	imClaudette->scaled(QSize(1000, 600));
	imBClaudette = new QPixmap("Mountain.jpg");
	PixClaudette = new ClickLabel();
	TexClaudette = new ClickLabel();
	TexClaudette->setText("Claudette");
	PixClaudette->setScaledContents(true);
	BackClaudette = new ClickLabel();
	BackClaudette->setFrameStyle(QFrame::Box | QFrame::Raised);
	BackClaudette->setLineWidth(0);
	BackClaudette->setMidLineWidth(3);
	BackClaudette->setPixmap(*imBClaudette);
	BackClaudette->setScaledContents(true);
	TexClaudette->setPalette(palette);
	TexClaudette->setFont(font);
	PixClaudette->setPixmap(*imClaudette);

	imDenis = new QPixmap("Denis.png");
	imDenis->scaled(QSize(1000, 600));
	imBDenis = new QPixmap("Chantier.jpg");
	PixDenis = new ClickLabel();
	TexDenis = new ClickLabel();
	TexDenis->setText("Denis");
	PixDenis->setScaledContents(true);
	BackDenis = new ClickLabel();
	BackDenis->setFrameStyle(QFrame::Box | QFrame::Raised);
	BackDenis->setLineWidth(0);
	BackDenis->setMidLineWidth(3);
	BackDenis->setPixmap(*imBDenis);
	BackDenis->setScaledContents(true);
	TexDenis->setPalette(palette);
	TexDenis->setFont(font);
	PixDenis->setPixmap(*imDenis);

	imDomingo = new QPixmap("Domingo.png");
	imDomingo->scaled(QSize(1000, 600));
	imBDomingo = new QPixmap("Matrix.jpg");
	PixDomingo = new ClickLabel();
	TexDomingo = new ClickLabel();
	TexDomingo->setText("Domingo");
	PixDomingo->setScaledContents(true);
	BackDomingo = new ClickLabel();
	BackDomingo->setFrameStyle(QFrame::Box | QFrame::Raised);
	BackDomingo->setLineWidth(0);
	BackDomingo->setMidLineWidth(3);
	BackDomingo->setPixmap(*imBDomingo);
	BackDomingo->setScaledContents(true);
	TexDomingo->setPalette(palette);
	TexDomingo->setFont(font);
	PixDomingo->setPixmap(*imDomingo);

	imJP = new QPixmap("JP.png");
	imJP->scaled(QSize(1000, 600));
	imBJP = new QPixmap("Escalade.jpg");
	PixJP = new ClickLabel();
	TexJP = new ClickLabel();
	TexJP->setText("JP");
	PixJP->setScaledContents(true);
	BackJP = new ClickLabel();
	BackJP->setFrameStyle(QFrame::Box | QFrame::Raised);
	BackJP->setLineWidth(0);
	BackJP->setMidLineWidth(3);
	BackJP->setPixmap(*imBJP);
	BackJP->setScaledContents(true);
	TexJP->setPalette(palette);
	TexJP->setFont(font);
	PixJP->setPixmap(*imJP);

	LayoutPerso->addWidget(BackAlex, 0, 0, Qt::AlignBottom);
	LayoutPerso->addWidget(PixAlex, 0, 0, Qt::AlignCenter);
	LayoutPerso->addWidget(TexAlex, 0, 0, Qt::AlignBottom | Qt::AlignHCenter);
	
	LayoutPerso->addWidget(BackCetin, 1, 0, Qt::AlignBottom);
	LayoutPerso->addWidget(PixCetin, 1, 0, Qt::AlignCenter);
	LayoutPerso->addWidget(TexCetin, 1, 0, Qt::AlignBottom | Qt::AlignHCenter);

	LayoutPerso->addWidget(BackClaudette, 0, 1, Qt::AlignBottom);
	LayoutPerso->addWidget(PixClaudette, 0, 1, Qt::AlignCenter);
	LayoutPerso->addWidget(TexClaudette, 0, 1, Qt::AlignBottom | Qt::AlignHCenter);

	LayoutPerso->addWidget(BackDenis, 1, 1, Qt::AlignBottom);
	LayoutPerso->addWidget(PixDenis, 1, 1, Qt::AlignCenter);
	LayoutPerso->addWidget(TexDenis, 1, 1, Qt::AlignBottom | Qt::AlignHCenter);

	LayoutPerso->addWidget(BackDomingo, 0, 2, Qt::AlignBottom);
	LayoutPerso->addWidget(PixDomingo, 0, 2, Qt::AlignCenter);
	LayoutPerso->addWidget(TexDomingo, 0, 2, Qt::AlignBottom | Qt::AlignHCenter);

	LayoutPerso->addWidget(BackJP, 1, 2, Qt::AlignBottom);
	LayoutPerso->addWidget(PixJP, 1, 2, Qt::AlignCenter);
	LayoutPerso->addWidget(TexJP, 1, 2, Qt::AlignBottom | Qt::AlignHCenter);

	
	this->setPalette(background);
	mainLayout = new QVBoxLayout();
	mainLayout->addLayout(LayoutPerso);
	ButtonLayout = new QHBoxLayout();
	Ok = new QPushButton("Ok");
	Retour = new QPushButton("Retour");
	ButtonLayout->addWidget(Retour, Qt::AlignLeft);
	ButtonLayout->addWidget(Ok, Qt::AlignRight);
	mainLayout->addLayout(ButtonLayout);


	connect(TexAlex, SIGNAL(clicked()), this, SLOT(ChoixAlex()));
	connect(PixAlex, SIGNAL(clicked()), this, SLOT(ChoixAlex()));

	connect(TexCetin, SIGNAL(clicked()), this, SLOT(ChoixCetin()));
	connect(PixCetin, SIGNAL(clicked()), this, SLOT(ChoixCetin()));

	connect(TexClaudette, SIGNAL(clicked()), this, SLOT(ChoixClaudette()));
	connect(PixClaudette, SIGNAL(clicked()), this, SLOT(ChoixClaudette()));

	connect(TexDenis, SIGNAL(clicked()), this, SLOT(ChoixDenis()));
	connect(PixDenis, SIGNAL(clicked()), this, SLOT(ChoixDenis()));

	connect(TexDomingo, SIGNAL(clicked()), this, SLOT(ChoixDomingo()));
	connect(PixDomingo, SIGNAL(clicked()), this, SLOT(ChoixDomingo()));

	connect(TexJP, SIGNAL(clicked()), this, SLOT(ChoixJP()));
	connect(PixJP, SIGNAL(clicked()), this, SLOT(ChoixJP()));

	connect(Ok, SIGNAL(clicked()), this, SLOT(ChoixOk()));
	connect(Retour, SIGNAL(clicked()), this, SLOT(ChoixRetour()));

	setLayout(mainLayout);

}
void FenetreChoix::ChoixAlex()
{
	temp = 0;
	BackCetin->setLineWidth(0);
	BackAlex->setLineWidth(3);
	BackDenis->setLineWidth(0);
	BackClaudette->setLineWidth(0);
	BackDomingo->setLineWidth(0);
	BackJP->setLineWidth(0);
}

void FenetreChoix::ChoixCetin()
{
	temp = 1;
	BackCetin->setLineWidth(3);
	BackAlex->setLineWidth(0);
	BackDenis->setLineWidth(0);
	BackClaudette->setLineWidth(0);
	BackDomingo->setLineWidth(0);
	BackJP->setLineWidth(0);
}

void FenetreChoix::ChoixClaudette()
{
	temp = 2;
	BackCetin->setLineWidth(0);
	BackAlex->setLineWidth(0);
	BackDenis->setLineWidth(0);
	BackClaudette->setLineWidth(3);
	BackDomingo->setLineWidth(0);
	BackJP->setLineWidth(0);
}

void FenetreChoix::ChoixDenis()
{
	temp = 3;
	BackCetin->setLineWidth(0);
	BackAlex->setLineWidth(0);
	BackDenis->setLineWidth(3);
	BackClaudette->setLineWidth(0);
	BackDomingo->setLineWidth(0);
	BackJP->setLineWidth(0);
}

void FenetreChoix::ChoixDomingo()
{
	temp = 4;
	BackCetin->setLineWidth(0);
	BackAlex->setLineWidth(0);
	BackDenis->setLineWidth(0);
	BackClaudette->setLineWidth(0);
	BackDomingo->setLineWidth(3);
	BackJP->setLineWidth(0);
}

void FenetreChoix::ChoixJP()
{
	temp = 5;
	BackCetin->setLineWidth(0);
	BackAlex->setLineWidth(0);
	BackDenis->setLineWidth(0);
	BackClaudette->setLineWidth(0);
	BackDomingo->setLineWidth(0);
	BackJP->setLineWidth(3);
}

void FenetreChoix::ChoixOk()
{
	if (P1 != 0 && P2==0)
	{
		P2 = temp;
		BackCetin->setLineWidth(0);
		BackAlex->setLineWidth(0);
		BackDenis->setLineWidth(0);
		BackClaudette->setLineWidth(0);
		BackDomingo->setLineWidth(0);
		BackJP->setLineWidth(0);
	}
	else if (P1==0&&P2==0)
	{
		P1 = temp;
		BackCetin->setLineWidth(0);
		BackAlex->setLineWidth(0);
		BackDenis->setLineWidth(0);
		BackClaudette->setLineWidth(0);
		BackDomingo->setLineWidth(0);
		BackJP->setLineWidth(0);
	}
	else
	{
		FenetreCombat *fenetreCombat;
		fenetreCombat = new FenetreCombat(Terrain,P1,P2);
		fenetreCombat->show();
		this->close();
	}
}

void FenetreChoix::ChoixRetour()
{
	if (P1 == 0)
	{
		FenetreChoixTerrain *fenetreChoix;
		fenetreChoix = new FenetreChoixTerrain();
		fenetreChoix->show();
		this->close();
	}
	else if(P2==0)
	{
		P1 = 0;
	}
	else
	{
		P2 = 0;
	}
}