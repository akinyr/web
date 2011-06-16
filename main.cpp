#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsWebView>
#include <QWebSettings>
#include <QAbstractKineticScroller>

#include "browser.h"

int
main(int argc, char **argv)
{
	QApplication app(argc, argv);
	Browser browser;
	//QWebSettings::globalSettings()->setAttribute(QWebSettings::TiledBackingStoreEnabled, true);
	//QWebSettings::globalSettings()->setAttribute(QWebSettings::FrameFlatteningEnable, true);

	QGraphicsScene scene;

	QGraphicsView view(&scene);
	view.setFrameShape(QFrame::NoFrame);
	view.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

#ifdef Q_WS_MAEMO_5
	view.setAttribute(Qt::WA_Maemo5AutoOrientation, true);
#endif
	browser.load(QUrl("http://www.telkku.com/"));

	scene.addItem(&browser);
	//view.resize(width, height);
	view.show();
	return app.exec();
}

