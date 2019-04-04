#-------------------------------------------------
#
# Project created by QtCreator 2019-02-11T14:50:54
#
#-------------------------------------------------


TARGET = ProjetS2_1
TEMPLATE =vcapp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.


CONFIG  += warn_on qt debug_and_release windows console

SOURCES += \
    	main.cpp \
		clickLabel.cpp\
    	fenetreprincipal.cpp \
    	fenetreoption.cpp \
    	fenetrechoix.cpp \
    	fenetrecombat.cpp \
		Phoneme.cpp \
    	prof.cpp \
    	sort.cpp \
        Professeurs\Alex\Alex.cpp \
        Professeurs\Cetine\Cetine.cpp \
        Professeurs\Claudette\Claudette.cpp \
        Professeurs\Domingo\Domingo.cpp \
        Professeurs\Denis\Denis.cpp \
        Professeurs\JP\JP.cpp \
    	terrain.cpp \
		fenetrechoixterrain.cpp\
	Combat.cpp \ 
	tour.cpp \
	

HEADERS += \
		clickLabel.h\
    	fenetreprincipal.h \
    	fenetreoption.h \
    	fenetrechoix.h \
		fenetrechoixterrain.h\
    	fenetrecombat.h \
		Phoneme.h \
        Professeurs\Alex\alex.h \
        Professeurs\Alex\sortCaffee.h \
        Professeurs\Alex\sortMotDePasse.h \
        Professeurs\Alex\sortLancerCrayon.h \
        Professeurs\Cetine\cetine.h \
        Professeurs\Cetine\sortCharabiat.h \
        Professeurs\Cetine\sortFausseRetraite.h \
        Professeurs\Cetine\sortCoupDeHambley.h \
        Professeurs\Claudette\claudette.h \
        Professeurs\Claudette\sortCestVrai.h \
        Professeurs\Claudette\sortOvertime.h \
        Professeurs\Claudette\sortAffection.h \
        Professeurs\Denis\denis.h \
        Professeurs\Denis\sortDiagrammeSurcharge.h \
        Professeurs\Denis\sortLoiC21.h \
        Professeurs\Denis\sortTick.h \
        Professeurs\JP\jp.h \
        Professeurs\JP\sortDiviserEquipes.h \
        Professeurs\JP\sortPraise.h \
        Professeurs\JP\sortEscalade.h \
        Professeurs\Domingo\domingo.h \
        Professeurs\Domingo\sortLaSolutionne.h \
        Professeurs\Domingo\sortCorrectionLente.h \
        Professeurs\Domingo\sortBaseball.h \
	terrain.h \
	Combat.h \ 
        sortDefense.h \
        sort.h \
	prof.h \
	sortexample1.h \
	tour.h\
	
INCLUDEPATH += FPGA
LIBS	      += FPGA/CommunicationFPGA.lib

QT += widgets
QT += gui
