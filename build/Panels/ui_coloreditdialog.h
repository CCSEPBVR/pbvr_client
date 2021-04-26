/********************************************************************************
** Form generated from reading UI file 'coloreditdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOREDITDIALOG_H
#define UI_COLOREDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include "QGlue/colorpalette.h"

QT_BEGIN_NAMESPACE

class Ui_ColorEditDialog
{
public:
    QGridLayout *gridLayout;
    QGlue::ColorPalette *oglw;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColorEditDialog)
    {
        if (ColorEditDialog->objectName().isEmpty())
            ColorEditDialog->setObjectName(QStringLiteral("ColorEditDialog"));
        ColorEditDialog->resize(267, 250);
        gridLayout = new QGridLayout(ColorEditDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        oglw = new QGlue::ColorPalette(ColorEditDialog);
        oglw->setObjectName(QStringLiteral("oglw"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(oglw->sizePolicy().hasHeightForWidth());
        oglw->setSizePolicy(sizePolicy);

        gridLayout->addWidget(oglw, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ColorEditDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(ColorEditDialog);

        QMetaObject::connectSlotsByName(ColorEditDialog);
    } // setupUi

    void retranslateUi(QDialog *ColorEditDialog)
    {
        ColorEditDialog->setWindowTitle(QApplication::translate("ColorEditDialog", "Select Color", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColorEditDialog: public Ui_ColorEditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOREDITDIALOG_H
