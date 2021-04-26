/********************************************************************************
** Form generated from reading UI file 'coloreditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLOREDITOR_H
#define UI_COLOREDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QGlue/colormappalette.h"
#include "QGlue/colorpalette.h"

QT_BEGIN_NAMESPACE

class Ui_ColorEditor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGlue::ColorMapPalette *qglColormap;
    QToolBox *toolBox;
    QWidget *page_0;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl_DefaultColor;
    QListWidget *colormap_selection;
    QSpacerItem *verticalSpacer;
    QWidget *page_1;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_6;
    QWidget *qscren2;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_2;
    QGlue::ColorPalette *qglColorPalette;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *rLabel;
    QLineEdit *expression_r;
    QLabel *gLabel;
    QLineEdit *expression_g;
    QLabel *bLabel;
    QLineEdit *expression_b;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *controlPointTable;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ColorEditor)
    {
        if (ColorEditor->objectName().isEmpty())
            ColorEditor->setObjectName(QStringLiteral("ColorEditor"));
        ColorEditor->resize(334, 553);
        ColorEditor->setModal(false);
        verticalLayout = new QVBoxLayout(ColorEditor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(ColorEditor);
        label->setObjectName(QStringLiteral("label"));
        label->setAutoFillBackground(true);

        verticalLayout->addWidget(label);

        qglColormap = new QGlue::ColorMapPalette(ColorEditor);
        qglColormap->setObjectName(QStringLiteral("qglColormap"));
        qglColormap->setMinimumSize(QSize(0, 80));
        qglColormap->setMaximumSize(QSize(16777215, 200));
        qglColormap->setBaseSize(QSize(0, 80));

        verticalLayout->addWidget(qglColormap);

        toolBox = new QToolBox(ColorEditor);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page_0 = new QWidget();
        page_0->setObjectName(QStringLiteral("page_0"));
        page_0->setGeometry(QRect(0, 0, 310, 239));
        verticalLayout_2 = new QVBoxLayout(page_0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lbl_DefaultColor = new QLabel(page_0);
        lbl_DefaultColor->setObjectName(QStringLiteral("lbl_DefaultColor"));

        verticalLayout_2->addWidget(lbl_DefaultColor);

        colormap_selection = new QListWidget(page_0);
        colormap_selection->setObjectName(QStringLiteral("colormap_selection"));
        colormap_selection->setAlternatingRowColors(true);

        verticalLayout_2->addWidget(colormap_selection);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        toolBox->addItem(page_0, QStringLiteral("Predefined ColorMaps"));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        page_1->setGeometry(QRect(0, 0, 310, 268));
        verticalLayout_5 = new QVBoxLayout(page_1);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetDefaultConstraint);
        qscren2 = new QWidget(page_1);
        qscren2->setObjectName(QStringLiteral("qscren2"));
        qscren2->setMinimumSize(QSize(0, 200));
        verticalLayout_7 = new QVBoxLayout(qscren2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_2 = new QLabel(qscren2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAutoFillBackground(true);

        verticalLayout_7->addWidget(label_2);

        qglColorPalette = new QGlue::ColorPalette(qscren2);
        qglColorPalette->setObjectName(QStringLiteral("qglColorPalette"));
        qglColorPalette->setMinimumSize(QSize(0, 200));

        verticalLayout_7->addWidget(qglColorPalette);


        verticalLayout_6->addWidget(qscren2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        pushButton_3 = new QPushButton(page_1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(page_1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(page_1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalLayout_6->setStretch(0, 1);

        verticalLayout_5->addLayout(verticalLayout_6);

        toolBox->addItem(page_1, QStringLiteral("Freeform Curve Edit"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 310, 239));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        rLabel = new QLabel(groupBox);
        rLabel->setObjectName(QStringLiteral("rLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, rLabel);

        expression_r = new QLineEdit(groupBox);
        expression_r->setObjectName(QStringLiteral("expression_r"));
        expression_r->setMaxLength(32767);

        formLayout->setWidget(0, QFormLayout::FieldRole, expression_r);

        gLabel = new QLabel(groupBox);
        gLabel->setObjectName(QStringLiteral("gLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, gLabel);

        expression_g = new QLineEdit(groupBox);
        expression_g->setObjectName(QStringLiteral("expression_g"));

        formLayout->setWidget(1, QFormLayout::FieldRole, expression_g);

        bLabel = new QLabel(groupBox);
        bLabel->setObjectName(QStringLiteral("bLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, bLabel);

        expression_b = new QLineEdit(groupBox);
        expression_b->setObjectName(QStringLiteral("expression_b"));

        formLayout->setWidget(2, QFormLayout::FieldRole, expression_b);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        toolBox->addItem(page_2, QStringLiteral("Expression Edit"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 310, 239));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        controlPointTable = new QTableWidget(page_3);
        if (controlPointTable->columnCount() < 4)
            controlPointTable->setColumnCount(4);
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        controlPointTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        controlPointTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        controlPointTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        controlPointTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (controlPointTable->rowCount() < 10)
            controlPointTable->setRowCount(10);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        controlPointTable->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        controlPointTable->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        controlPointTable->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        controlPointTable->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        controlPointTable->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font1);
        controlPointTable->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font1);
        controlPointTable->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font2);
        controlPointTable->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFont(font1);
        controlPointTable->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFont(font1);
        controlPointTable->setVerticalHeaderItem(9, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        controlPointTable->setItem(0, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        controlPointTable->setItem(0, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        controlPointTable->setItem(0, 2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        controlPointTable->setItem(0, 3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        controlPointTable->setItem(1, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        controlPointTable->setItem(1, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        controlPointTable->setItem(1, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        controlPointTable->setItem(1, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        controlPointTable->setItem(2, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        controlPointTable->setItem(2, 1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        controlPointTable->setItem(2, 2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        controlPointTable->setItem(2, 3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        controlPointTable->setItem(3, 0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        controlPointTable->setItem(3, 1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        controlPointTable->setItem(3, 2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        controlPointTable->setItem(3, 3, __qtablewidgetitem29);
        controlPointTable->setObjectName(QStringLiteral("controlPointTable"));
        controlPointTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        controlPointTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        controlPointTable->horizontalHeader()->setDefaultSectionSize(65);
        controlPointTable->horizontalHeader()->setStretchLastSection(true);
        controlPointTable->verticalHeader()->setDefaultSectionSize(24);
        controlPointTable->verticalHeader()->setStretchLastSection(true);

        verticalLayout_4->addWidget(controlPointTable);

        toolBox->addItem(page_3, QStringLiteral("Control Points Edit"));

        verticalLayout->addWidget(toolBox);

        buttonBox = new QDialogButtonBox(ColorEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ColorEditor);

        QMetaObject::connectSlotsByName(ColorEditor);
    } // setupUi

    void retranslateUi(QDialog *ColorEditor)
    {
        ColorEditor->setWindowTitle(QApplication::translate("ColorEditor", "Color Map Editor", Q_NULLPTR));
        label->setText(QApplication::translate("ColorEditor", "ColorMap:", Q_NULLPTR));
        lbl_DefaultColor->setText(QApplication::translate("ColorEditor", "Default Colors:", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_0), QApplication::translate("ColorEditor", "Predefined ColorMaps", Q_NULLPTR));
        label_2->setText(QApplication::translate("ColorEditor", "Color Palette:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ColorEditor", "Reset", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("ColorEditor", "Undo", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("ColorEditor", "Redo", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_1), QApplication::translate("ColorEditor", "Freeform Curve Edit", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ColorEditor", "Color Expression", Q_NULLPTR));
        rLabel->setText(QApplication::translate("ColorEditor", "R", Q_NULLPTR));
        expression_r->setText(QApplication::translate("ColorEditor", "1.0", Q_NULLPTR));
        gLabel->setText(QApplication::translate("ColorEditor", "G", Q_NULLPTR));
        expression_g->setText(QApplication::translate("ColorEditor", "1.4*sin(3.14*x)", Q_NULLPTR));
        bLabel->setText(QApplication::translate("ColorEditor", "B", Q_NULLPTR));
        expression_b->setText(QApplication::translate("ColorEditor", "-3*x+1.5", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("ColorEditor", "Expression Edit", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = controlPointTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ColorEditor", "Point", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = controlPointTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ColorEditor", "Red", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = controlPointTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ColorEditor", "Green", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = controlPointTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ColorEditor", "Blue", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = controlPointTable->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("ColorEditor", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = controlPointTable->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("ColorEditor", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = controlPointTable->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("ColorEditor", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = controlPointTable->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("ColorEditor", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = controlPointTable->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("ColorEditor", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = controlPointTable->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("ColorEditor", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = controlPointTable->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("ColorEditor", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = controlPointTable->verticalHeaderItem(7);
        ___qtablewidgetitem11->setText(QApplication::translate("ColorEditor", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = controlPointTable->verticalHeaderItem(8);
        ___qtablewidgetitem12->setText(QApplication::translate("ColorEditor", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = controlPointTable->verticalHeaderItem(9);
        ___qtablewidgetitem13->setText(QApplication::translate("ColorEditor", "10", Q_NULLPTR));

        const bool __sortingEnabled = controlPointTable->isSortingEnabled();
        controlPointTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem14 = controlPointTable->item(0, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("ColorEditor", "0.0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = controlPointTable->item(0, 1);
        ___qtablewidgetitem15->setText(QApplication::translate("ColorEditor", "0.0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = controlPointTable->item(0, 2);
        ___qtablewidgetitem16->setText(QApplication::translate("ColorEditor", "0.0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = controlPointTable->item(0, 3);
        ___qtablewidgetitem17->setText(QApplication::translate("ColorEditor", "0.4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = controlPointTable->item(1, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("ColorEditor", "0.5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = controlPointTable->item(1, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("ColorEditor", "0.0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = controlPointTable->item(1, 2);
        ___qtablewidgetitem20->setText(QApplication::translate("ColorEditor", "0.4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = controlPointTable->item(1, 3);
        ___qtablewidgetitem21->setText(QApplication::translate("ColorEditor", "0.3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = controlPointTable->item(2, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("ColorEditor", "0.75", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = controlPointTable->item(2, 1);
        ___qtablewidgetitem23->setText(QApplication::translate("ColorEditor", "0.4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = controlPointTable->item(2, 2);
        ___qtablewidgetitem24->setText(QApplication::translate("ColorEditor", "0.6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = controlPointTable->item(2, 3);
        ___qtablewidgetitem25->setText(QApplication::translate("ColorEditor", "0.2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = controlPointTable->item(3, 0);
        ___qtablewidgetitem26->setText(QApplication::translate("ColorEditor", "1.0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = controlPointTable->item(3, 1);
        ___qtablewidgetitem27->setText(QApplication::translate("ColorEditor", "0.4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = controlPointTable->item(3, 2);
        ___qtablewidgetitem28->setText(QApplication::translate("ColorEditor", "0.9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = controlPointTable->item(3, 3);
        ___qtablewidgetitem29->setText(QApplication::translate("ColorEditor", "0.1", Q_NULLPTR));
        controlPointTable->setSortingEnabled(__sortingEnabled);

        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("ColorEditor", "Control Points Edit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ColorEditor: public Ui_ColorEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLOREDITOR_H
