#include "ClickLabel.h"



ClickLabel::ClickLabel(): QLabel() 
{

}


ClickLabel::~ClickLabel() {}

void ClickLabel::mousePressEvent(QMouseEvent* event) 
{
	emit clicked();
}
