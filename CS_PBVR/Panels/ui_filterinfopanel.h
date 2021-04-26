/********************************************************************************
** Form generated from reading UI file 'filterinfopanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTERINFOPANEL_H
#define UI_FILTERINFOPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FilterinfoPanel
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_20;
    QLabel *label_21;
    QDoubleSpinBox *yAxisMin;
    QDoubleSpinBox *zAxisMin;
    QDoubleSpinBox *yAxisMax;
    QDoubleSpinBox *zAxisMax;
    QDoubleSpinBox *xAxisMax;
    QDoubleSpinBox *xAxisMin;
    QLabel *label;
    QLabel *label_13;
    QSpinBox *allElements;
    QLabel *label_15;
    QSpinBox *fileType;
    QSpinBox *vectorNumber;
    QLabel *label_14;
    QLabel *label_11;
    QSpinBox *subVolume;
    QLabel *label_17;
    QLabel *label_18;
    QSpinBox *elementType;
    QLabel *label_16;
    QSpinBox *allNodes;
    QSpinBox *stepNumber;

    void setupUi(QDockWidget *FilterinfoPanel)
    {
        if (FilterinfoPanel->objectName().isEmpty())
            FilterinfoPanel->setObjectName(QStringLiteral("FilterinfoPanel"));
        FilterinfoPanel->resize(238, 368);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FilterinfoPanel->sizePolicy().hasHeightForWidth());
        FilterinfoPanel->setSizePolicy(sizePolicy);
        FilterinfoPanel->setMinimumSize(QSize(238, 368));
        FilterinfoPanel->setMaximumSize(QSize(524287, 524287));
        FilterinfoPanel->setStyleSheet(QStringLiteral("QDockWidget {border:1px solid blue;}"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidgetContents->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_20, 1, 0, 1, 1);

        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_21, 2, 0, 1, 1);

        yAxisMin = new QDoubleSpinBox(groupBox);
        yAxisMin->setObjectName(QStringLiteral("yAxisMin"));
        yAxisMin->setEnabled(false);
        yAxisMin->setButtonSymbols(QAbstractSpinBox::NoButtons);
        yAxisMin->setDecimals(3);
        yAxisMin->setMinimum(-100000);
        yAxisMin->setMaximum(1e+6);

        gridLayout->addWidget(yAxisMin, 1, 1, 1, 1);

        zAxisMin = new QDoubleSpinBox(groupBox);
        zAxisMin->setObjectName(QStringLiteral("zAxisMin"));
        zAxisMin->setEnabled(false);
        zAxisMin->setButtonSymbols(QAbstractSpinBox::NoButtons);
        zAxisMin->setDecimals(3);
        zAxisMin->setMinimum(-100000);
        zAxisMin->setMaximum(1e+6);

        gridLayout->addWidget(zAxisMin, 2, 1, 1, 1);

        yAxisMax = new QDoubleSpinBox(groupBox);
        yAxisMax->setObjectName(QStringLiteral("yAxisMax"));
        yAxisMax->setEnabled(false);
        yAxisMax->setButtonSymbols(QAbstractSpinBox::NoButtons);
        yAxisMax->setDecimals(3);
        yAxisMax->setMinimum(-100000);
        yAxisMax->setMaximum(1e+6);

        gridLayout->addWidget(yAxisMax, 1, 2, 1, 1);

        zAxisMax = new QDoubleSpinBox(groupBox);
        zAxisMax->setObjectName(QStringLiteral("zAxisMax"));
        zAxisMax->setEnabled(false);
        zAxisMax->setButtonSymbols(QAbstractSpinBox::NoButtons);
        zAxisMax->setDecimals(3);
        zAxisMax->setMinimum(-100000);
        zAxisMax->setMaximum(1e+6);

        gridLayout->addWidget(zAxisMax, 2, 2, 1, 1);

        xAxisMax = new QDoubleSpinBox(groupBox);
        xAxisMax->setObjectName(QStringLiteral("xAxisMax"));
        xAxisMax->setEnabled(false);
        xAxisMax->setButtonSymbols(QAbstractSpinBox::NoButtons);
        xAxisMax->setDecimals(3);
        xAxisMax->setMinimum(-100000);
        xAxisMax->setMaximum(1e+6);

        gridLayout->addWidget(xAxisMax, 0, 2, 1, 1);

        xAxisMin = new QDoubleSpinBox(groupBox);
        xAxisMin->setObjectName(QStringLiteral("xAxisMin"));
        xAxisMin->setEnabled(false);
        xAxisMin->setButtonSymbols(QAbstractSpinBox::NoButtons);
        xAxisMin->setDecimals(3);
        xAxisMin->setMinimum(-100000);
        xAxisMin->setMaximum(1e+6);

        gridLayout->addWidget(xAxisMin, 0, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);

        gridLayout_2->addWidget(groupBox, 7, 0, 1, 2);

        label_13 = new QLabel(dockWidgetContents);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_13, 1, 0, 1, 1);

        allElements = new QSpinBox(dockWidgetContents);
        allElements->setObjectName(QStringLiteral("allElements"));
        allElements->setEnabled(false);
        allElements->setButtonSymbols(QAbstractSpinBox::NoButtons);
        allElements->setMaximum(999999999);

        gridLayout_2->addWidget(allElements, 1, 1, 1, 1);

        label_15 = new QLabel(dockWidgetContents);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15, 6, 0, 1, 1);

        fileType = new QSpinBox(dockWidgetContents);
        fileType->setObjectName(QStringLiteral("fileType"));
        fileType->setEnabled(false);
        fileType->setButtonSymbols(QAbstractSpinBox::NoButtons);
        fileType->setMaximum(999999999);

        gridLayout_2->addWidget(fileType, 6, 1, 1, 1);

        vectorNumber = new QSpinBox(dockWidgetContents);
        vectorNumber->setObjectName(QStringLiteral("vectorNumber"));
        vectorNumber->setEnabled(false);
        vectorNumber->setButtonSymbols(QAbstractSpinBox::NoButtons);
        vectorNumber->setMaximum(999999999);

        gridLayout_2->addWidget(vectorNumber, 0, 1, 1, 1);

        label_14 = new QLabel(dockWidgetContents);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_14, 3, 0, 1, 1);

        label_11 = new QLabel(dockWidgetContents);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        subVolume = new QSpinBox(dockWidgetContents);
        subVolume->setObjectName(QStringLiteral("subVolume"));
        subVolume->setEnabled(false);
        subVolume->setButtonSymbols(QAbstractSpinBox::NoButtons);
        subVolume->setMaximum(999999999);

        gridLayout_2->addWidget(subVolume, 2, 1, 1, 1);

        label_17 = new QLabel(dockWidgetContents);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_17, 5, 0, 1, 1);

        label_18 = new QLabel(dockWidgetContents);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_18, 2, 0, 1, 1);

        elementType = new QSpinBox(dockWidgetContents);
        elementType->setObjectName(QStringLiteral("elementType"));
        elementType->setEnabled(false);
        elementType->setButtonSymbols(QAbstractSpinBox::NoButtons);
        elementType->setMaximum(999999999);

        gridLayout_2->addWidget(elementType, 3, 1, 1, 1);

        label_16 = new QLabel(dockWidgetContents);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_16, 0, 0, 1, 1);

        allNodes = new QSpinBox(dockWidgetContents);
        allNodes->setObjectName(QStringLiteral("allNodes"));
        allNodes->setEnabled(false);
        allNodes->setButtonSymbols(QAbstractSpinBox::NoButtons);
        allNodes->setMaximum(999999999);

        gridLayout_2->addWidget(allNodes, 4, 1, 1, 1);

        stepNumber = new QSpinBox(dockWidgetContents);
        stepNumber->setObjectName(QStringLiteral("stepNumber"));
        stepNumber->setEnabled(false);
        stepNumber->setButtonSymbols(QAbstractSpinBox::NoButtons);
        stepNumber->setMaximum(999999999);

        gridLayout_2->addWidget(stepNumber, 5, 1, 1, 1);

        FilterinfoPanel->setWidget(dockWidgetContents);

        retranslateUi(FilterinfoPanel);

        QMetaObject::connectSlotsByName(FilterinfoPanel);
    } // setupUi

    void retranslateUi(QDockWidget *FilterinfoPanel)
    {
        FilterinfoPanel->setWindowTitle(QApplication::translate("FilterinfoPanel", "FilterInfo", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FilterinfoPanel", "3D Extent", Q_NULLPTR));
        label_20->setText(QApplication::translate("FilterinfoPanel", "Y", Q_NULLPTR));
        label_21->setText(QApplication::translate("FilterinfoPanel", "Z", Q_NULLPTR));
        label->setText(QApplication::translate("FilterinfoPanel", "X", Q_NULLPTR));
        label_13->setText(QApplication::translate("FilterinfoPanel", "All Elements:", Q_NULLPTR));
        label_15->setText(QApplication::translate("FilterinfoPanel", "File Type:", Q_NULLPTR));
        label_14->setText(QApplication::translate("FilterinfoPanel", "Element Type:", Q_NULLPTR));
        label_11->setText(QApplication::translate("FilterinfoPanel", "All Nodes:", Q_NULLPTR));
        label_17->setText(QApplication::translate("FilterinfoPanel", "Step Number:", Q_NULLPTR));
        label_18->setText(QApplication::translate("FilterinfoPanel", "Sub  Volume:", Q_NULLPTR));
        label_16->setText(QApplication::translate("FilterinfoPanel", "Vector number:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FilterinfoPanel: public Ui_FilterinfoPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTERINFOPANEL_H
