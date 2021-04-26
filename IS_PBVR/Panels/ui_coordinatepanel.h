/********************************************************************************
** Form generated from reading UI file 'coordinatepanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COORDINATEPANEL_H
#define UI_COORDINATEPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoordinatePanel
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *apply_btn;
    QPushButton *reScale_btn;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *coordinate1Label;
    QLineEdit *xCoordinateExpression;
    QLabel *coordinate2Label;
    QLineEdit *yCoordinateExpression;
    QLabel *coordinate3Label;
    QLineEdit *zCoordinateExpression;

    void setupUi(QDockWidget *CoordinatePanel)
    {
        if (CoordinatePanel->objectName().isEmpty())
            CoordinatePanel->setObjectName(QStringLiteral("CoordinatePanel"));
        CoordinatePanel->resize(286, 171);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        apply_btn = new QPushButton(dockWidgetContents);
        apply_btn->setObjectName(QStringLiteral("apply_btn"));

        horizontalLayout->addWidget(apply_btn);

        reScale_btn = new QPushButton(dockWidgetContents);
        reScale_btn->setObjectName(QStringLiteral("reScale_btn"));

        horizontalLayout->addWidget(reScale_btn);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        coordinate1Label = new QLabel(groupBox);
        coordinate1Label->setObjectName(QStringLiteral("coordinate1Label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, coordinate1Label);

        xCoordinateExpression = new QLineEdit(groupBox);
        xCoordinateExpression->setObjectName(QStringLiteral("xCoordinateExpression"));

        formLayout->setWidget(0, QFormLayout::FieldRole, xCoordinateExpression);

        coordinate2Label = new QLabel(groupBox);
        coordinate2Label->setObjectName(QStringLiteral("coordinate2Label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, coordinate2Label);

        yCoordinateExpression = new QLineEdit(groupBox);
        yCoordinateExpression->setObjectName(QStringLiteral("yCoordinateExpression"));

        formLayout->setWidget(1, QFormLayout::FieldRole, yCoordinateExpression);

        coordinate3Label = new QLabel(groupBox);
        coordinate3Label->setObjectName(QStringLiteral("coordinate3Label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, coordinate3Label);

        zCoordinateExpression = new QLineEdit(groupBox);
        zCoordinateExpression->setObjectName(QStringLiteral("zCoordinateExpression"));

        formLayout->setWidget(2, QFormLayout::FieldRole, zCoordinateExpression);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);

        CoordinatePanel->setWidget(dockWidgetContents);

        retranslateUi(CoordinatePanel);

        QMetaObject::connectSlotsByName(CoordinatePanel);
    } // setupUi

    void retranslateUi(QDockWidget *CoordinatePanel)
    {
        CoordinatePanel->setWindowTitle(QApplication::translate("CoordinatePanel", "Coordinates", Q_NULLPTR));
        apply_btn->setText(QApplication::translate("CoordinatePanel", "Apply", Q_NULLPTR));
        reScale_btn->setText(QApplication::translate("CoordinatePanel", "ReScale", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CoordinatePanel", "Expressions", Q_NULLPTR));
        coordinate1Label->setText(QApplication::translate("CoordinatePanel", "Coordinate 1:", Q_NULLPTR));
        coordinate2Label->setText(QApplication::translate("CoordinatePanel", "Coordinate 2:", Q_NULLPTR));
        coordinate3Label->setText(QApplication::translate("CoordinatePanel", "Coordinate 3:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CoordinatePanel: public Ui_CoordinatePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COORDINATEPANEL_H
