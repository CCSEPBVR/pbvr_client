/********************************************************************************
** Form generated from reading UI file 'particlepanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARTICLEPANEL_H
#define UI_PARTICLEPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParticlePanel
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QComboBox *itemToAdd;
    QPushButton *delete_btn;
    QLabel *label_3;
    QLineEdit *particleName;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *browseButton;
    QPushButton *setButton;
    QLineEdit *particleFile;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupDisplay;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *display0;
    QCheckBox *display1;
    QCheckBox *display2;
    QCheckBox *display3;
    QCheckBox *display4;
    QCheckBox *display5;
    QCheckBox *display6;
    QCheckBox *display7;
    QCheckBox *display8;
    QCheckBox *display9;
    QCheckBox *display10;
    QGroupBox *groupKeepInitial;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *keepInitial0;
    QCheckBox *keepInitial1;
    QCheckBox *keepInitial2;
    QCheckBox *keepInitial3;
    QCheckBox *keepInitial4;
    QCheckBox *keepInitial5;
    QCheckBox *keepInitial6;
    QCheckBox *keepInitial7;
    QCheckBox *keepInitial8;
    QCheckBox *keepInitial9;
    QCheckBox *keepInitial10;
    QGroupBox *groupKeepFinal;
    QVBoxLayout *verticalLayout;
    QCheckBox *keepFinal0;
    QCheckBox *keepFinal1;
    QCheckBox *keepFinal2;
    QCheckBox *keepFinal3;
    QCheckBox *keepFinal4;
    QCheckBox *keepFinal5;
    QCheckBox *keepFinal6;
    QCheckBox *keepFinal7;
    QCheckBox *keepFinal8;
    QCheckBox *keepFinal9;
    QCheckBox *keepFinal10;
    QPushButton *exportButton;
    QPushButton *closeButton;

    void setupUi(QDockWidget *ParticlePanel)
    {
        if (ParticlePanel->objectName().isEmpty())
            ParticlePanel->setObjectName(QStringLiteral("ParticlePanel"));
        ParticlePanel->resize(335, 506);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        itemToAdd = new QComboBox(groupBox);
        itemToAdd->setObjectName(QStringLiteral("itemToAdd"));

        gridLayout_3->addWidget(itemToAdd, 1, 0, 1, 1);

        delete_btn = new QPushButton(groupBox);
        delete_btn->setObjectName(QStringLiteral("delete_btn"));

        gridLayout_3->addWidget(delete_btn, 4, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 1, 1, 1);

        particleName = new QLineEdit(groupBox);
        particleName->setObjectName(QStringLiteral("particleName"));
        particleName->setClearButtonEnabled(true);

        gridLayout_3->addWidget(particleName, 1, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        browseButton = new QPushButton(groupBox);
        browseButton->setObjectName(QStringLiteral("browseButton"));

        gridLayout_3->addWidget(browseButton, 3, 2, 1, 1);

        setButton = new QPushButton(groupBox);
        setButton->setObjectName(QStringLiteral("setButton"));

        gridLayout_3->addWidget(setButton, 4, 2, 1, 1);

        particleFile = new QLineEdit(groupBox);
        particleFile->setObjectName(QStringLiteral("particleFile"));
        particleFile->setEnabled(true);
        particleFile->setClearButtonEnabled(false);

        gridLayout_3->addWidget(particleFile, 3, 0, 1, 2);


        gridLayout->addWidget(groupBox, 1, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupDisplay = new QGroupBox(dockWidgetContents);
        groupDisplay->setObjectName(QStringLiteral("groupDisplay"));
        verticalLayout_4 = new QVBoxLayout(groupDisplay);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        display0 = new QCheckBox(groupDisplay);
        display0->setObjectName(QStringLiteral("display0"));
        display0->setEnabled(true);
        display0->setChecked(true);

        verticalLayout_4->addWidget(display0);

        display1 = new QCheckBox(groupDisplay);
        display1->setObjectName(QStringLiteral("display1"));
        display1->setEnabled(false);
        display1->setCheckable(true);

        verticalLayout_4->addWidget(display1);

        display2 = new QCheckBox(groupDisplay);
        display2->setObjectName(QStringLiteral("display2"));
        display2->setEnabled(false);

        verticalLayout_4->addWidget(display2);

        display3 = new QCheckBox(groupDisplay);
        display3->setObjectName(QStringLiteral("display3"));
        display3->setEnabled(false);

        verticalLayout_4->addWidget(display3);

        display4 = new QCheckBox(groupDisplay);
        display4->setObjectName(QStringLiteral("display4"));
        display4->setEnabled(false);

        verticalLayout_4->addWidget(display4);

        display5 = new QCheckBox(groupDisplay);
        display5->setObjectName(QStringLiteral("display5"));
        display5->setEnabled(false);

        verticalLayout_4->addWidget(display5);

        display6 = new QCheckBox(groupDisplay);
        display6->setObjectName(QStringLiteral("display6"));
        display6->setEnabled(false);

        verticalLayout_4->addWidget(display6);

        display7 = new QCheckBox(groupDisplay);
        display7->setObjectName(QStringLiteral("display7"));
        display7->setEnabled(false);

        verticalLayout_4->addWidget(display7);

        display8 = new QCheckBox(groupDisplay);
        display8->setObjectName(QStringLiteral("display8"));
        display8->setEnabled(false);

        verticalLayout_4->addWidget(display8);

        display9 = new QCheckBox(groupDisplay);
        display9->setObjectName(QStringLiteral("display9"));
        display9->setEnabled(false);

        verticalLayout_4->addWidget(display9);

        display10 = new QCheckBox(groupDisplay);
        display10->setObjectName(QStringLiteral("display10"));
        display10->setEnabled(false);

        verticalLayout_4->addWidget(display10);


        horizontalLayout_2->addWidget(groupDisplay);

        groupKeepInitial = new QGroupBox(dockWidgetContents);
        groupKeepInitial->setObjectName(QStringLiteral("groupKeepInitial"));
        groupKeepInitial->setEnabled(true);
        verticalLayout_5 = new QVBoxLayout(groupKeepInitial);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        keepInitial0 = new QCheckBox(groupKeepInitial);
        keepInitial0->setObjectName(QStringLiteral("keepInitial0"));
        keepInitial0->setEnabled(true);
        keepInitial0->setChecked(true);
        keepInitial0->setTristate(false);

        verticalLayout_5->addWidget(keepInitial0);

        keepInitial1 = new QCheckBox(groupKeepInitial);
        keepInitial1->setObjectName(QStringLiteral("keepInitial1"));
        keepInitial1->setEnabled(false);
        keepInitial1->setCheckable(true);

        verticalLayout_5->addWidget(keepInitial1);

        keepInitial2 = new QCheckBox(groupKeepInitial);
        keepInitial2->setObjectName(QStringLiteral("keepInitial2"));
        keepInitial2->setEnabled(false);

        verticalLayout_5->addWidget(keepInitial2);

        keepInitial3 = new QCheckBox(groupKeepInitial);
        keepInitial3->setObjectName(QStringLiteral("keepInitial3"));
        keepInitial3->setEnabled(false);

        verticalLayout_5->addWidget(keepInitial3);

        keepInitial4 = new QCheckBox(groupKeepInitial);
        keepInitial4->setObjectName(QStringLiteral("keepInitial4"));
        keepInitial4->setEnabled(false);

        verticalLayout_5->addWidget(keepInitial4);

        keepInitial5 = new QCheckBox(groupKeepInitial);
        keepInitial5->setObjectName(QStringLiteral("keepInitial5"));
        keepInitial5->setEnabled(false);

        verticalLayout_5->addWidget(keepInitial5);

        keepInitial6 = new QCheckBox(groupKeepInitial);
        keepInitial6->setObjectName(QStringLiteral("keepInitial6"));
        keepInitial6->setEnabled(false);

        verticalLayout_5->addWidget(keepInitial6);

        keepInitial7 = new QCheckBox(groupKeepInitial);
        keepInitial7->setObjectName(QStringLiteral("keepInitial7"));
        keepInitial7->setEnabled(false);

        verticalLayout_5->addWidget(keepInitial7);

        keepInitial8 = new QCheckBox(groupKeepInitial);
        keepInitial8->setObjectName(QStringLiteral("keepInitial8"));
        keepInitial8->setEnabled(false);

        verticalLayout_5->addWidget(keepInitial8);

        keepInitial9 = new QCheckBox(groupKeepInitial);
        keepInitial9->setObjectName(QStringLiteral("keepInitial9"));
        keepInitial9->setEnabled(false);

        verticalLayout_5->addWidget(keepInitial9);

        keepInitial10 = new QCheckBox(groupKeepInitial);
        keepInitial10->setObjectName(QStringLiteral("keepInitial10"));
        keepInitial10->setEnabled(false);

        verticalLayout_5->addWidget(keepInitial10);


        horizontalLayout_2->addWidget(groupKeepInitial);

        groupKeepFinal = new QGroupBox(dockWidgetContents);
        groupKeepFinal->setObjectName(QStringLiteral("groupKeepFinal"));
        verticalLayout = new QVBoxLayout(groupKeepFinal);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        keepFinal0 = new QCheckBox(groupKeepFinal);
        keepFinal0->setObjectName(QStringLiteral("keepFinal0"));
        keepFinal0->setEnabled(true);
        keepFinal0->setChecked(true);

        verticalLayout->addWidget(keepFinal0);

        keepFinal1 = new QCheckBox(groupKeepFinal);
        keepFinal1->setObjectName(QStringLiteral("keepFinal1"));
        keepFinal1->setEnabled(false);
        keepFinal1->setCheckable(true);

        verticalLayout->addWidget(keepFinal1);

        keepFinal2 = new QCheckBox(groupKeepFinal);
        keepFinal2->setObjectName(QStringLiteral("keepFinal2"));
        keepFinal2->setEnabled(false);

        verticalLayout->addWidget(keepFinal2);

        keepFinal3 = new QCheckBox(groupKeepFinal);
        keepFinal3->setObjectName(QStringLiteral("keepFinal3"));
        keepFinal3->setEnabled(false);

        verticalLayout->addWidget(keepFinal3);

        keepFinal4 = new QCheckBox(groupKeepFinal);
        keepFinal4->setObjectName(QStringLiteral("keepFinal4"));
        keepFinal4->setEnabled(false);

        verticalLayout->addWidget(keepFinal4);

        keepFinal5 = new QCheckBox(groupKeepFinal);
        keepFinal5->setObjectName(QStringLiteral("keepFinal5"));
        keepFinal5->setEnabled(false);

        verticalLayout->addWidget(keepFinal5);

        keepFinal6 = new QCheckBox(groupKeepFinal);
        keepFinal6->setObjectName(QStringLiteral("keepFinal6"));
        keepFinal6->setEnabled(false);

        verticalLayout->addWidget(keepFinal6);

        keepFinal7 = new QCheckBox(groupKeepFinal);
        keepFinal7->setObjectName(QStringLiteral("keepFinal7"));
        keepFinal7->setEnabled(false);

        verticalLayout->addWidget(keepFinal7);

        keepFinal8 = new QCheckBox(groupKeepFinal);
        keepFinal8->setObjectName(QStringLiteral("keepFinal8"));
        keepFinal8->setEnabled(false);

        verticalLayout->addWidget(keepFinal8);

        keepFinal9 = new QCheckBox(groupKeepFinal);
        keepFinal9->setObjectName(QStringLiteral("keepFinal9"));
        keepFinal9->setEnabled(false);

        verticalLayout->addWidget(keepFinal9);

        keepFinal10 = new QCheckBox(groupKeepFinal);
        keepFinal10->setObjectName(QStringLiteral("keepFinal10"));
        keepFinal10->setEnabled(false);

        verticalLayout->addWidget(keepFinal10);


        horizontalLayout_2->addWidget(groupKeepFinal);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        exportButton = new QPushButton(dockWidgetContents);
        exportButton->setObjectName(QStringLiteral("exportButton"));

        gridLayout->addWidget(exportButton, 2, 0, 1, 1);

        closeButton = new QPushButton(dockWidgetContents);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        gridLayout->addWidget(closeButton, 2, 1, 1, 1);

        ParticlePanel->setWidget(dockWidgetContents);

        retranslateUi(ParticlePanel);

        QMetaObject::connectSlotsByName(ParticlePanel);
    } // setupUi

    void retranslateUi(QDockWidget *ParticlePanel)
    {
        ParticlePanel->setWindowTitle(QApplication::translate("ParticlePanel", "Particles", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ParticlePanel", "Edit Particle", Q_NULLPTR));
        itemToAdd->clear();
        itemToAdd->insertItems(0, QStringList()
         << QApplication::translate("ParticlePanel", "(Particle 1)", Q_NULLPTR)
         << QApplication::translate("ParticlePanel", "(Particle 2)", Q_NULLPTR)
         << QApplication::translate("ParticlePanel", "(Particle 3)", Q_NULLPTR)
         << QApplication::translate("ParticlePanel", "(Particle 4)", Q_NULLPTR)
         << QApplication::translate("ParticlePanel", "(Particle 5)", Q_NULLPTR)
         << QApplication::translate("ParticlePanel", "(Particle 6)", Q_NULLPTR)
         << QApplication::translate("ParticlePanel", "(Particle 7)", Q_NULLPTR)
         << QApplication::translate("ParticlePanel", "(Particle 8)", Q_NULLPTR)
         << QApplication::translate("ParticlePanel", "(Particle 9)", Q_NULLPTR)
         << QApplication::translate("ParticlePanel", "(Particle 10)", Q_NULLPTR)
        );
        delete_btn->setText(QApplication::translate("ParticlePanel", "Delete", Q_NULLPTR));
        label_3->setText(QApplication::translate("ParticlePanel", "Particle Name:", Q_NULLPTR));
        particleName->setText(QApplication::translate("ParticlePanel", "pp", Q_NULLPTR));
        label_2->setText(QApplication::translate("ParticlePanel", "Item:", Q_NULLPTR));
        label_4->setText(QApplication::translate("ParticlePanel", "Particle File:", Q_NULLPTR));
        browseButton->setText(QApplication::translate("ParticlePanel", "Browse", Q_NULLPTR));
        setButton->setText(QApplication::translate("ParticlePanel", "Add", Q_NULLPTR));
        particleFile->setText(QApplication::translate("ParticlePanel", "p2\\p2", Q_NULLPTR));
        groupDisplay->setTitle(QApplication::translate("ParticlePanel", "Display Particle", Q_NULLPTR));
        display0->setText(QApplication::translate("ParticlePanel", "Server", Q_NULLPTR));
        display1->setText(QApplication::translate("ParticlePanel", "(Particle 1)", Q_NULLPTR));
        display2->setText(QApplication::translate("ParticlePanel", "(Particle 2)", Q_NULLPTR));
        display3->setText(QApplication::translate("ParticlePanel", "(Particle 3)", Q_NULLPTR));
        display4->setText(QApplication::translate("ParticlePanel", "(Particle 4)", Q_NULLPTR));
        display5->setText(QApplication::translate("ParticlePanel", "(Particle 5)", Q_NULLPTR));
        display6->setText(QApplication::translate("ParticlePanel", "(Particle 6)", Q_NULLPTR));
        display7->setText(QApplication::translate("ParticlePanel", "(Particle 7)", Q_NULLPTR));
        display8->setText(QApplication::translate("ParticlePanel", "(Particle 8)", Q_NULLPTR));
        display9->setText(QApplication::translate("ParticlePanel", "(Particle 9)", Q_NULLPTR));
        display10->setText(QApplication::translate("ParticlePanel", "(Particle 10)", Q_NULLPTR));
        groupKeepInitial->setTitle(QApplication::translate("ParticlePanel", "Keep Initial Step", Q_NULLPTR));
        keepInitial0->setText(QApplication::translate("ParticlePanel", "Server", Q_NULLPTR));
        keepInitial1->setText(QApplication::translate("ParticlePanel", "(Particle 1)", Q_NULLPTR));
        keepInitial2->setText(QApplication::translate("ParticlePanel", "(Particle 2)", Q_NULLPTR));
        keepInitial3->setText(QApplication::translate("ParticlePanel", "(Particle 3)", Q_NULLPTR));
        keepInitial4->setText(QApplication::translate("ParticlePanel", "(Particle 4)", Q_NULLPTR));
        keepInitial5->setText(QApplication::translate("ParticlePanel", "(Particle 5)", Q_NULLPTR));
        keepInitial6->setText(QApplication::translate("ParticlePanel", "(Particle 6)", Q_NULLPTR));
        keepInitial7->setText(QApplication::translate("ParticlePanel", "(Particle 7)", Q_NULLPTR));
        keepInitial8->setText(QApplication::translate("ParticlePanel", "(Particle 8)", Q_NULLPTR));
        keepInitial9->setText(QApplication::translate("ParticlePanel", "(Particle 9)", Q_NULLPTR));
        keepInitial10->setText(QApplication::translate("ParticlePanel", "(Particle 10)", Q_NULLPTR));
        groupKeepFinal->setTitle(QApplication::translate("ParticlePanel", "Keep Final Step", Q_NULLPTR));
        keepFinal0->setText(QApplication::translate("ParticlePanel", "Server", Q_NULLPTR));
        keepFinal1->setText(QApplication::translate("ParticlePanel", "(Particle 1)", Q_NULLPTR));
        keepFinal2->setText(QApplication::translate("ParticlePanel", "(Particle 2)", Q_NULLPTR));
        keepFinal3->setText(QApplication::translate("ParticlePanel", "(Particle 3)", Q_NULLPTR));
        keepFinal4->setText(QApplication::translate("ParticlePanel", "(Particle 4)", Q_NULLPTR));
        keepFinal5->setText(QApplication::translate("ParticlePanel", "(Particle 5)", Q_NULLPTR));
        keepFinal6->setText(QApplication::translate("ParticlePanel", "(Particle 6)", Q_NULLPTR));
        keepFinal7->setText(QApplication::translate("ParticlePanel", "(Particle 7)", Q_NULLPTR));
        keepFinal8->setText(QApplication::translate("ParticlePanel", "(Particle 8)", Q_NULLPTR));
        keepFinal9->setText(QApplication::translate("ParticlePanel", "(Particle 9)", Q_NULLPTR));
        keepFinal10->setText(QApplication::translate("ParticlePanel", "(Particle 10)", Q_NULLPTR));
        exportButton->setText(QApplication::translate("ParticlePanel", "Export", Q_NULLPTR));
        closeButton->setText(QApplication::translate("ParticlePanel", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ParticlePanel: public Ui_ParticlePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARTICLEPANEL_H
