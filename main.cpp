#include "fenetreprincipal.h"
#include "combat.h"
#include "FenetreChoixTerrain.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FenetreChoixTerrain w;
    w.show();
	

    return a.exec();
	
	/*Combat c;
	c.SelectionTerrain();
	c.SelectionPersonnages();
	c.Regles();
	c.DebuterCombat();

	return 0;*/

	//test
}
