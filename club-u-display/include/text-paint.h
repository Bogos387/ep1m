#ifndef TEXTPAINT_H
#define TEXTPAINT_H


#include <QLabel>


class TextPaint : public QLabel
{

public:
    TextPaint(QSize _size, QWidget *parent = Q_NULLPTR);

    void setFonts(int fontSize, Qt::GlobalColor color);
    void setParams(int countCell, int deltaX);

    void setText(QString txt);
    void setText2(QString txt);


private:
    QImage img_;

    int fontSize_;
    Qt::GlobalColor color_;
    QString txt_;
    int countCell_;
    int deltaX_;


    void drawText_(QString txt);
    void drawText2_(QString txt);

};

#endif // TEXTPAINT_H
