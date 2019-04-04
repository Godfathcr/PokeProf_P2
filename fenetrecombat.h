#ifndef FENETRECOMBAT_H
#define FENETRECOMBAT_H

#include <QWidget>
#include "Combat.h"
#include "prof.h"
#include "terrain.h"

class FenetreCombat: public QWidget
{
    Q_OBJECT
public:
    FenetreCombat(int Terrain, int P1, int P2);
private:
	Combat *combat;
	Prof *prof1;
	Prof *prof2;
	Terrain *terrain;
};

#endif // FENETRECOMBAT_H
