#include "fenetreprincipal.h"
#include "combat.h"
#include <QApplication>



int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);
    FenetrePrincipal w;
    w.show();
	

    return a.exec();*/
	
	Combat c;
	c.SelectionTerrain();
	c.SelectionPersonnages();
	c.Regles();
	c.DebuterCombat();

	return 0;

	//test
}
