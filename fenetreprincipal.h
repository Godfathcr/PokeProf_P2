#ifndef FENETREPRINCIPAL_H
#define FENETREPRINCIPAL_H

#include <QMainWindow>
#include <qgridlayout.h>
#include <qpushbutton.h>

class FenetrePrincipal : public QMainWindow
{
    Q_OBJECT

public:
    explicit FenetrePrincipal(QWidget *parent = nullptr);
    ~FenetrePrincipal();

private:
	QGridLayout layoutPrin;
	QPushButton push;
};

#endif // FENETREPRINCIPAL_H
