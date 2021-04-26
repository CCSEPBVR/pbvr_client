/********************************************************************************
** Form generated from reading UI file 'slidercontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDERCONTROL_H
#define UI_SLIDERCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SliderControl
{
public:
    QGridLayout *gridLayout;
    QSlider *timeSlider;
    QLabel *label;
    QLabel *label_3;
    QSlider *maxSlider;
    QGridLayout *gridLayout_2;
    QLabel *maxVal;
    QLabel *minVal;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *timeVal;
    QSlider *minSlider;
    QLabel *label_2;

    void setupUi(QWidget *SliderControl)
    {
        if (SliderControl->objectName().isEmpty())
            SliderControl->setObjectName(QStringLiteral("SliderControl"));
        SliderControl->resize(311, 103);
        gridLayout = new QGridLayout(SliderControl);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(0);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        timeSlider = new QSlider(SliderControl);
        timeSlider->setObjectName(QStringLiteral("timeSlider"));
        timeSlider->setMaximum(1000);
        timeSlider->setTracking(false);
        timeSlider->setOrientation(Qt::Horizontal);
        timeSlider->setTickPosition(QSlider::NoTicks);
        timeSlider->setTickInterval(100);

        gridLayout->addWidget(timeSlider, 2, 2, 1, 1);

        label = new QLabel(SliderControl);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_3 = new QLabel(SliderControl);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        maxSlider = new QSlider(SliderControl);
        maxSlider->setObjectName(QStringLiteral("maxSlider"));
        maxSlider->setMaximum(1000);
        maxSlider->setValue(1000);
        maxSlider->setTracking(false);
        maxSlider->setOrientation(Qt::Horizontal);
        maxSlider->setTickPosition(QSlider::TicksAbove);
        maxSlider->setTickInterval(100);

        gridLayout->addWidget(maxSlider, 4, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        maxVal = new QLabel(SliderControl);
        maxVal->setObjectName(QStringLiteral("maxVal"));
        maxVal->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout_2->addWidget(maxVal, 0, 3, 1, 1);

        minVal = new QLabel(SliderControl);
        minVal->setObjectName(QStringLiteral("minVal"));
        minVal->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_2->addWidget(minVal, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(SliderControl);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        horizontalLayout->addWidget(label_4);

        timeVal = new QLabel(SliderControl);
        timeVal->setObjectName(QStringLiteral("timeVal"));
        timeVal->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout->addWidget(timeVal);


        gridLayout_2->addLayout(horizontalLayout, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 2, 1, 1);

        minSlider = new QSlider(SliderControl);
        minSlider->setObjectName(QStringLiteral("minSlider"));
        minSlider->setMaximum(1000);
        minSlider->setTracking(false);
        minSlider->setOrientation(Qt::Horizontal);
        minSlider->setTickPosition(QSlider::TicksBelow);
        minSlider->setTickInterval(100);

        gridLayout->addWidget(minSlider, 3, 2, 1, 1);

        label_2 = new QLabel(SliderControl);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);


        retranslateUi(SliderControl);

        QMetaObject::connectSlotsByName(SliderControl);
    } // setupUi

    void retranslateUi(QWidget *SliderControl)
    {
        SliderControl->setWindowTitle(QApplication::translate("SliderControl", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SliderControl", "Time Step:", Q_NULLPTR));
        label_3->setText(QApplication::translate("SliderControl", "max :", Q_NULLPTR));
        maxVal->setText(QApplication::translate("SliderControl", "---", Q_NULLPTR));
        minVal->setText(QApplication::translate("SliderControl", "---", Q_NULLPTR));
        label_4->setText(QApplication::translate("SliderControl", "selected:", Q_NULLPTR));
        timeVal->setText(QApplication::translate("SliderControl", "--", Q_NULLPTR));
        label_2->setText(QApplication::translate("SliderControl", "min  :", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SliderControl: public Ui_SliderControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDERCONTROL_H
