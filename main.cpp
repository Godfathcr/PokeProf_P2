#include "fenetreprincipal.h"
#include "profexample1.h"
//#include <QApplication>



int main(int argc, char *argv[])
{
    /*QApplication a(argc, argv);
    FenetrePrincipal w;
    w.show();
	

    return a.exec();*/

	ProfExample1 prof;
	ProfExample1 prof2;
	prof2.afficher();
	prof.attaquer(0, &prof2);
	prof2.afficher();
	prof.afficher();
    return 0;

	//test
}
