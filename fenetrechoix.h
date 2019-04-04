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
	void ChoixCetine();
	void ChoixClaudette();
	void ChoixDenis();
	void ChoixDomingo();
	void ChoixJP();
	void ChoixOk();
	void ChoixRetour();
private:
	QGridLayout *LayoutPerso;
	ClickLabel *PixAlex;
	ClickLabel *PixCetine;
	ClickLabel *PixClaudette;
	ClickLabel *PixDenis;
	ClickLabel *PixDomingo;
	ClickLabel *PixJP;
	ClickLabel *TexAlex;
	ClickLabel *TexCetine;
	ClickLabel *TexClaudette;
	ClickLabel *TexDenis;
	ClickLabel *TexDomingo;
	ClickLabel *TexJP;
	QPixmap *imAlex;
	QPixmap *imCetine;
	QPixmap *imClaudette;
	QPixmap *imDenis;
	QPixmap *imDomingo;
	QPixmap *imJP;
	QVBoxLayout *mainLayout;
	QHBoxLayout *ButtonLayout;
	QPushButton *Ok;
	QPushButton *Retour;





};

#endif // FENETRECHOIX_H
