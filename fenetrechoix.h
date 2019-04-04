#ifndef FENETRECHOIX_H
#define FENETRECHOIX_H

#include <QWidget>
#include <QGridLayout>
#include <QPixmap>
#include <qpushbutton.h>
#include "ClickLabel.h"

class FenetreChoix: public QWidget
{
    Q_OBJECT
public:
    FenetreChoix(int terrain);
public slots:
	void ChoixAlex();
	void ChoixCetin();
	void ChoixClaudette();
	void ChoixDenis();
	void ChoixDomingo();
	void ChoixJP();
	void ChoixOk();
	void ChoixRetour();
private:
	int temp=0;
	int P1 = 0;
	int P2 = 0;
	int Terrain;
	QGridLayout *LayoutPerso;
	ClickLabel *PixAlex;
	ClickLabel *PixCetin;
	ClickLabel *PixClaudette;
	ClickLabel *PixDenis;
	ClickLabel *PixDomingo;
	ClickLabel *PixJP;
	ClickLabel *TexAlex;
	ClickLabel *TexCetin;
	ClickLabel *TexClaudette;
	ClickLabel *TexDenis;
	ClickLabel *TexDomingo;
	ClickLabel *TexJP;
	ClickLabel *BackAlex;
	ClickLabel *BackCetin;
	ClickLabel *BackClaudette;
	ClickLabel *BackDenis;
	ClickLabel *BackDomingo;
	ClickLabel *BackJP;

	QPixmap *imAlex;
	QPixmap *imCetin;
	QPixmap *imClaudette;
	QPixmap *imDenis;
	QPixmap *imDomingo;
	QPixmap *imJP;

	QPixmap *imBAlex;
	QPixmap *imBCetin;
	QPixmap *imBClaudette;
	QPixmap *imBDenis;
	QPixmap *imBDomingo;
	QPixmap *imBJP;

	QVBoxLayout *mainLayout;
	QHBoxLayout *ButtonLayout;
	QPushButton *Ok;
	QPushButton *Retour;





};

#endif // FENETRECHOIX_H
