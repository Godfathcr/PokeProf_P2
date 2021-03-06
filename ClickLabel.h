#ifndef CLICKLABEL_H
#define CLICKLABEL_H

#include <QLabel>
#include <QWidget>
#include <QObject>
class ClickLabel : public QLabel
{
	Q_OBJECT

public:
	ClickLabel();
	~ClickLabel();

signals:
	void clicked();

protected:
	void mousePressEvent(QMouseEvent* event);

};
#endif //CLICKLABEL_H
