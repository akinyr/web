
#include "browser.h"
#include <QDebug>

Browser::Browser() :
	QGraphicsWebView()
{
}

Browser::~Browser()
{
}

void
Browser::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) 
{
	qDebug() << "paint" << painter->clipRegion();
	QGraphicsWebView::paint(painter, option, widget);
}

