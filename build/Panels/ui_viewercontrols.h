/********************************************************************************
** Form generated from reading UI file 'viewercontrols.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWERCONTROLS_H
#define UI_VIEWERCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ViewerControls
{
public:
    QFormLayout *formLayout;
    QLabel *label;
    QPushButton *colorButton;
    QLabel *label_2;
    QFontComboBox *fontSelection;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ViewerControls)
    {
        if (ViewerControls->objectName().isEmpty())
            ViewerControls->setObjectName(QStringLiteral("ViewerControls"));
        ViewerControls->resize(272, 119);
        formLayout = new QFormLayout(ViewerControls);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(ViewerControls);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        colorButton = new QPushButton(ViewerControls);
        colorButton->setObjectName(QStringLiteral("colorButton"));

        formLayout->setWidget(0, QFormLayout::FieldRole, colorButton);

        label_2 = new QLabel(ViewerControls);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        fontSelection = new QFontComboBox(ViewerControls);
        fontSelection->setObjectName(QStringLiteral("fontSelection"));
        fontSelection->setFontFilters(QFontComboBox::MonospacedFonts|QFontComboBox::ProportionalFonts);

        formLayout->setWidget(1, QFormLayout::FieldRole, fontSelection);

        buttonBox = new QDialogButtonBox(ViewerControls);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(2, QFormLayout::SpanningRole, buttonBox);


        retranslateUi(ViewerControls);
        QObject::connect(buttonBox, SIGNAL(accepted()), ViewerControls, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ViewerControls, SLOT(reject()));

        QMetaObject::connectSlotsByName(ViewerControls);
    } // setupUi

    void retranslateUi(QDialog *ViewerControls)
    {
        ViewerControls->setWindowTitle(QApplication::translate("ViewerControls", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ViewerControls", "Background:", Q_NULLPTR));
        colorButton->setText(QApplication::translate("ViewerControls", "Select Color", Q_NULLPTR));
        label_2->setText(QApplication::translate("ViewerControls", "Font:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewerControls: public Ui_ViewerControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWERCONTROLS_H
