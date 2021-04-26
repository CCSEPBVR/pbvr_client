/********************************************************************************
** Form generated from reading UI file 'opacityeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPACITYEDITOR_H
#define UI_OPACITYEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QGlue/opacitymappalette.h"

QT_BEGIN_NAMESPACE

class Ui_OpacityEditor
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGlue::OpacityMapPalette *qglOpacityMapPalette;
    QToolBox *toolBox;
    QWidget *page_0;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QPushButton *resetButton;
    QPushButton *undoButton;
    QPushButton *redoButton;
    QWidget *page_1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *expression_o_box;
    QLabel *label_5;
    QLineEdit *expression_o;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *controlPointTable;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OpacityEditor)
    {
        if (OpacityEditor->objectName().isEmpty())
            OpacityEditor->setObjectName(QStringLiteral("OpacityEditor"));
        OpacityEditor->resize(340, 538);
        verticalLayout = new QVBoxLayout(OpacityEditor);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(OpacityEditor);
        label->setObjectName(QStringLiteral("label"));
        label->setAutoFillBackground(true);

        verticalLayout->addWidget(label);

        qglOpacityMapPalette = new QGlue::OpacityMapPalette(OpacityEditor);
        qglOpacityMapPalette->setObjectName(QStringLiteral("qglOpacityMapPalette"));
        qglOpacityMapPalette->setMinimumSize(QSize(0, 100));

        verticalLayout->addWidget(qglOpacityMapPalette);

        toolBox = new QToolBox(OpacityEditor);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page_0 = new QWidget();
        page_0->setObjectName(QStringLiteral("page_0"));
        page_0->setGeometry(QRect(0, 0, 322, 285));
        verticalLayout_2 = new QVBoxLayout(page_0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        resetButton = new QPushButton(page_0);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        gridLayout->addWidget(resetButton, 0, 0, 1, 1);

        undoButton = new QPushButton(page_0);
        undoButton->setObjectName(QStringLiteral("undoButton"));

        gridLayout->addWidget(undoButton, 0, 1, 1, 1);

        redoButton = new QPushButton(page_0);
        redoButton->setObjectName(QStringLiteral("redoButton"));

        gridLayout->addWidget(redoButton, 0, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        toolBox->addItem(page_0, QStringLiteral("Freeform Curve Editor"));
        page_1 = new QWidget();
        page_1->setObjectName(QStringLiteral("page_1"));
        page_1->setGeometry(QRect(0, 0, 322, 285));
        verticalLayout_3 = new QVBoxLayout(page_1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        expression_o_box = new QHBoxLayout();
        expression_o_box->setObjectName(QStringLiteral("expression_o_box"));
        label_5 = new QLabel(page_1);
        label_5->setObjectName(QStringLiteral("label_5"));

        expression_o_box->addWidget(label_5);

        expression_o = new QLineEdit(page_1);
        expression_o->setObjectName(QStringLiteral("expression_o"));

        expression_o_box->addWidget(expression_o);


        verticalLayout_3->addLayout(expression_o_box);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout_3->setStretch(1, 4);
        toolBox->addItem(page_1, QStringLiteral("Opacity Expression Editor"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 322, 285));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        controlPointTable = new QTableWidget(page_3);
        if (controlPointTable->columnCount() < 2)
            controlPointTable->setColumnCount(2);
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
        if (controlPointTable->rowCount() < 10)
            controlPointTable->setRowCount(10);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        controlPointTable->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font1);
        controlPointTable->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        controlPointTable->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font1);
        controlPointTable->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        controlPointTable->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        controlPointTable->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font1);
        controlPointTable->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFont(font2);
        controlPointTable->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFont(font1);
        controlPointTable->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFont(font1);
        controlPointTable->setVerticalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        controlPointTable->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        controlPointTable->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        controlPointTable->setItem(1, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        controlPointTable->setItem(1, 1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        controlPointTable->setItem(2, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        controlPointTable->setItem(2, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        controlPointTable->setItem(3, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        controlPointTable->setItem(3, 1, __qtablewidgetitem19);
        controlPointTable->setObjectName(QStringLiteral("controlPointTable"));
        controlPointTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        controlPointTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        controlPointTable->horizontalHeader()->setDefaultSectionSize(65);
        controlPointTable->horizontalHeader()->setStretchLastSection(true);
        controlPointTable->verticalHeader()->setDefaultSectionSize(24);
        controlPointTable->verticalHeader()->setStretchLastSection(true);

        verticalLayout_4->addWidget(controlPointTable);

        toolBox->addItem(page_3, QStringLiteral("Control Point Editor"));

        verticalLayout->addWidget(toolBox);

        buttonBox = new QDialogButtonBox(OpacityEditor);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(OpacityEditor);

        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(OpacityEditor);
    } // setupUi

    void retranslateUi(QDialog *OpacityEditor)
    {
        OpacityEditor->setWindowTitle(QApplication::translate("OpacityEditor", "Opacity Map Editor", Q_NULLPTR));
        label->setText(QApplication::translate("OpacityEditor", "Opacity:", Q_NULLPTR));
        resetButton->setText(QApplication::translate("OpacityEditor", "Reset", Q_NULLPTR));
        undoButton->setText(QApplication::translate("OpacityEditor", "Undo", Q_NULLPTR));
        redoButton->setText(QApplication::translate("OpacityEditor", "Redo", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_0), QApplication::translate("OpacityEditor", "Freeform Curve Editor", Q_NULLPTR));
        label_5->setText(QApplication::translate("OpacityEditor", "O:", Q_NULLPTR));
        expression_o->setText(QApplication::translate("OpacityEditor", "x*0.8", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_1), QApplication::translate("OpacityEditor", "Opacity Expression Editor", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = controlPointTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("OpacityEditor", "Point", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = controlPointTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("OpacityEditor", "Opacity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = controlPointTable->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("OpacityEditor", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = controlPointTable->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("OpacityEditor", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = controlPointTable->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("OpacityEditor", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = controlPointTable->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("OpacityEditor", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = controlPointTable->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("OpacityEditor", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = controlPointTable->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QApplication::translate("OpacityEditor", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = controlPointTable->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QApplication::translate("OpacityEditor", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = controlPointTable->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QApplication::translate("OpacityEditor", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = controlPointTable->verticalHeaderItem(8);
        ___qtablewidgetitem10->setText(QApplication::translate("OpacityEditor", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = controlPointTable->verticalHeaderItem(9);
        ___qtablewidgetitem11->setText(QApplication::translate("OpacityEditor", "10", Q_NULLPTR));

        const bool __sortingEnabled = controlPointTable->isSortingEnabled();
        controlPointTable->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = controlPointTable->item(0, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("OpacityEditor", "0.0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = controlPointTable->item(0, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("OpacityEditor", "0.0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = controlPointTable->item(1, 0);
        ___qtablewidgetitem14->setText(QApplication::translate("OpacityEditor", "0.5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = controlPointTable->item(1, 1);
        ___qtablewidgetitem15->setText(QApplication::translate("OpacityEditor", "0.0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = controlPointTable->item(2, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("OpacityEditor", "0.75", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = controlPointTable->item(2, 1);
        ___qtablewidgetitem17->setText(QApplication::translate("OpacityEditor", "0.4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = controlPointTable->item(3, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("OpacityEditor", "1.0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = controlPointTable->item(3, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("OpacityEditor", "0.4", Q_NULLPTR));
        controlPointTable->setSortingEnabled(__sortingEnabled);

        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("OpacityEditor", "Control Point Editor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OpacityEditor: public Ui_OpacityEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPACITYEDITOR_H
