
#include <QGLWidget>
#include <QGraphicsWebView>
#include <QGLFramebufferObject>

class Browser : public QGraphicsWebView {
	Q_OBJECT
public:
	Browser();
	~Browser();
protected:
	void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = 0);
};

