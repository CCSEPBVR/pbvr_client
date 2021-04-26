/********************************************************************************
** Form generated from reading UI file 'legendpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEGENDPANEL_H
#define UI_LEGENDPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LegendPanel
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *displayLegend;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QSpinBox *divInterval;
    QLabel *label_2;
    QPushButton *divColor_btn;
    QLabel *label;
    QSpinBox *divThickness;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QPushButton *frameColor_btn;
    QSpinBox *frameThickness;
    QLabel *label_3;
    QComboBox *layoutDirection;
    QPushButton *setButton;
    QLabel *label_6;
    QComboBox *colormapFunction;
    QLabel *label_4;
    QLineEdit *caption;
    QLabel *label_5;

    void setupUi(QDockWidget *LegendPanel)
    {
        if (LegendPanel->objectName().isEmpty())
            LegendPanel->setObjectName(QStringLiteral("LegendPanel"));
        LegendPanel->resize(235, 369);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LegendPanel->sizePolicy().hasHeightForWidth());
        LegendPanel->setSizePolicy(sizePolicy);
        LegendPanel->setMinimumSize(QSize(207, 369));
        LegendPanel->setMaximumSize(QSize(235, 500));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        displayLegend = new QGroupBox(dockWidgetContents);
        displayLegend->setObjectName(QStringLiteral("displayLegend"));
        displayLegend->setCheckable(true);
        gridLayout_4 = new QGridLayout(displayLegend);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        groupBox_2 = new QGroupBox(displayLegend);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        divInterval = new QSpinBox(groupBox_2);
        divInterval->setObjectName(QStringLiteral("divInterval"));

        gridLayout_3->addWidget(divInterval, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        divColor_btn = new QPushButton(groupBox_2);
        divColor_btn->setObjectName(QStringLiteral("divColor_btn"));

        gridLayout_3->addWidget(divColor_btn, 2, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        divThickness = new QSpinBox(groupBox_2);
        divThickness->setObjectName(QStringLiteral("divThickness"));

        gridLayout_3->addWidget(divThickness, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 7, 0, 1, 5);

        groupBox_3 = new QGroupBox(displayLegend);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        frameColor_btn = new QPushButton(groupBox_3);
        frameColor_btn->setObjectName(QStringLiteral("frameColor_btn"));

        gridLayout_2->addWidget(frameColor_btn, 1, 1, 1, 1);

        frameThickness = new QSpinBox(groupBox_3);
        frameThickness->setObjectName(QStringLiteral("frameThickness"));

        gridLayout_2->addWidget(frameThickness, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 8, 0, 1, 5);

        layoutDirection = new QComboBox(displayLegend);
        layoutDirection->setObjectName(QStringLiteral("layoutDirection"));

        gridLayout_4->addWidget(layoutDirection, 6, 3, 1, 2);

        setButton = new QPushButton(displayLegend);
        setButton->setObjectName(QStringLiteral("setButton"));

        gridLayout_4->addWidget(setButton, 2, 4, 1, 1);

        label_6 = new QLabel(displayLegend);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 6, 0, 1, 3);

        colormapFunction = new QComboBox(displayLegend);
        colormapFunction->setObjectName(QStringLiteral("colormapFunction"));

        gridLayout_4->addWidget(colormapFunction, 4, 4, 1, 1);

        label_4 = new QLabel(displayLegend);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_4->addWidget(label_4, 4, 0, 1, 3);

        caption = new QLineEdit(displayLegend);
        caption->setObjectName(QStringLiteral("caption"));

        gridLayout_4->addWidget(caption, 2, 0, 1, 4);

        label_5 = new QLabel(displayLegend);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);


        verticalLayout_2->addWidget(displayLegend);

        LegendPanel->setWidget(dockWidgetContents);

        retranslateUi(LegendPanel);

        QMetaObject::connectSlotsByName(LegendPanel);
    } // setupUi

    void retranslateUi(QDockWidget *LegendPanel)
    {
        LegendPanel->setWindowTitle(QApplication::translate("LegendPanel", "Legend Options", Q_NULLPTR));
        displayLegend->setTitle(QApplication::translate("LegendPanel", "Display Legend", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("LegendPanel", "Division", Q_NULLPTR));
        divInterval->setSuffix(QString());
        label_2->setText(QApplication::translate("LegendPanel", "Thickness:", Q_NULLPTR));
        divColor_btn->setText(QApplication::translate("LegendPanel", "Color", Q_NULLPTR));
        label->setText(QApplication::translate("LegendPanel", "Intervals:", Q_NULLPTR));
        divThickness->setSuffix(QApplication::translate("LegendPanel", "px", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("LegendPanel", "Frameline", Q_NULLPTR));
        frameColor_btn->setText(QApplication::translate("LegendPanel", "Color", Q_NULLPTR));
        frameThickness->setSuffix(QApplication::translate("LegendPanel", "px", Q_NULLPTR));
        label_3->setText(QApplication::translate("LegendPanel", "Thickness:", Q_NULLPTR));
        layoutDirection->clear();
        layoutDirection->insertItems(0, QStringList()
         << QApplication::translate("LegendPanel", "Vertical", Q_NULLPTR)
         << QApplication::translate("LegendPanel", "Horizontal", Q_NULLPTR)
        );
        setButton->setText(QApplication::translate("LegendPanel", "Set", Q_NULLPTR));
        label_6->setText(QApplication::translate("LegendPanel", "Layout Direction:", Q_NULLPTR));
        label_4->setText(QApplication::translate("LegendPanel", "ColorFunction:", Q_NULLPTR));
        label_5->setText(QApplication::translate("LegendPanel", "Caption:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LegendPanel: public Ui_LegendPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEGENDPANEL_H
