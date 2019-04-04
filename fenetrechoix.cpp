#include "fenetrechoix.h"
#include <QPalette>
#include <QFont>
#include<iostream>

FenetreChoix::FenetreChoix(int terrain)
{
	QPalette palette;
	palette.setColor(QPalette::WindowText, Qt::black);
	QFont font;
	font.setPointSize(32);

	setMinimumSize(1900, 950);
	LayoutPerso = new QGridLayout();


	imAlex = new QPixmap("Alex.jpg");
	imAlex->scaled(QSize(100, 200));
	PixAlex = new ClickLabel();
	TexAlex = new ClickLabel();
	TexAlex->setText("Alex");
	PixAlex->setScaledContents(true);
	TexAlex->setPalette(palette);
	TexAlex->setFont(font);
	PixAlex->setPixmap(*imAlex);

	imCetine = new QPixmap("Alex.jpg");
	imCetine->scaled(QSize(1000, 600));
	PixCetine = new ClickLabel();
	TexCetine = new ClickLabel();
	TexCetine->setText("Cetine");
	PixCetine->setScaledContents(true);
	TexCetine->setPalette(palette);
	TexCetine->setFont(font);
	PixCetine->setPixmap(*imCetine);

	imClaudette = new QPixmap("Alex.jpg");
	imClaudette->scaled(QSize(1000, 600));
	PixClaudette = new ClickLabel();
	TexClaudette = new ClickLabel();
	TexClaudette->setText("Claudette");
	PixClaudette->setScaledContents(true);
	TexClaudette->setPalette(palette);
	TexClaudette->setFont(font);
	PixClaudette->setPixmap(*imClaudette);

	imDenis = new QPixmap("Alex.jpg");
	imDenis->scaled(QSize(1000, 600));
	PixDenis = new ClickLabel();
	TexDenis = new ClickLabel();
	TexDenis->setText("Denis");
	PixDenis->setScaledContents(true);
	TexDenis->setPalette(palette);
	TexDenis->setFont(font);
	PixDenis->setPixmap(*imDenis);

	imDomingo = new QPixmap("Alex.jpg");
	imDomingo->scaled(QSize(1000, 600));
	PixDomingo = new ClickLabel();
	TexDomingo = new ClickLabel();
	TexDomingo->setText("Domingo");
	PixDomingo->setScaledContents(true);
	TexDomingo->setPalette(palette);
	TexDomingo->setFont(font);
	PixDomingo->setPixmap(*imDomingo);

	imJP = new QPixmap("Alex.jpg");
	imJP->scaled(QSize(2, 1));
	PixJP = new ClickLabel();
	TexJP = new ClickLabel();
	TexJP->setText("JP");
	PixJP->setScaledContents(true);
	TexJP->setPalette(palette);
	TexJP->setFont(font);
	PixJP->setPixmap(*imJP);

	LayoutPerso->addWidget(PixAlex, 0, 0, Qt::AlignCenter);
	LayoutPerso->addWidget(TexAlex, 0, 0, Qt::AlignBottom | Qt::AlignHCenter);
	LayoutPerso->addWidget(PixCetine, 1, 0, Qt::AlignCenter);
	LayoutPerso->addWidget(TexCetine, 1, 0, Qt::AlignBottom | Qt::AlignHCenter);
	LayoutPerso->addWidget(PixClaudette, 0, 1, Qt::AlignCenter);
	LayoutPerso->addWidget(TexClaudette, 0, 1, Qt::AlignBottom | Qt::AlignHCenter);
	LayoutPerso->addWidget(PixDenis, 1, 1, Qt::AlignCenter);
	LayoutPerso->addWidget(TexDenis, 1, 1, Qt::AlignBottom | Qt::AlignHCenter);
	LayoutPerso->addWidget(PixDomingo, 0, 2, Qt::AlignCenter);
	LayoutPerso->addWidget(TexDomingo, 0, 2, Qt::AlignBottom | Qt::AlignHCenter);
	LayoutPerso->addWidget(PixJP, 1, 2, Qt::AlignCenter);
	LayoutPerso->addWidget(TexJP, 1, 2, Qt::AlignBottom | Qt::AlignHCenter);

	

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

	connect(TexCetine, SIGNAL(clicked()), this, SLOT(ChoixCetine()));
	connect(PixCetine, SIGNAL(clicked()), this, SLOT(ChoixCetine()));

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

}

void FenetreChoix::ChoixCetine()
{

}

void FenetreChoix::ChoixClaudette()
{

}

void FenetreChoix::ChoixDenis()
{

}

void FenetreChoix::ChoixDomingo()
{

}

void FenetreChoix::ChoixJP()
{

}

void FenetreChoix::ChoixOk()
{

}

void FenetreChoix::ChoixRetour()
{

}
