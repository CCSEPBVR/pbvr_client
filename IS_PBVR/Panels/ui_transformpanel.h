/********************************************************************************
** Form generated from reading UI file 'transformpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFORMPANEL_H
#define UI_TRANSFORMPANEL_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransformPanel
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout_2;
    QPushButton *applyButton;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_6;
    QLabel *xAxisLabel_2;
    QDoubleSpinBox *xAxisTranslation;
    QLabel *yAxisLabel_2;
    QDoubleSpinBox *yAxisTranslation;
    QLabel *zAxisLabel_2;
    QDoubleSpinBox *zAxisTranslation;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *xAxisLabel;
    QDoubleSpinBox *xAxisRotation;
    QLabel *yAxisLabel;
    QDoubleSpinBox *yAxisRotation;
    QLabel *zAxisLabel;
    QDoubleSpinBox *zAxisRotation;
    QGridLayout *gridLayout_7;
    QLabel *uniformLabel;
    QDoubleSpinBox *uniformScale;

    void setupUi(QDockWidget *TransformPanel)
    {
        if (TransformPanel->objectName().isEmpty())
            TransformPanel->setObjectName(QStringLiteral("TransformPanel"));
        TransformPanel->resize(182, 324);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout_2 = new QGridLayout(dockWidgetContents);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        applyButton = new QPushButton(dockWidgetContents);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        gridLayout_2->addWidget(applyButton, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 3, 0, 1, 1);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_6 = new QGridLayout(groupBox_2);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        xAxisLabel_2 = new QLabel(groupBox_2);
        xAxisLabel_2->setObjectName(QStringLiteral("xAxisLabel_2"));
        xAxisLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(xAxisLabel_2, 0, 0, 1, 1);

        xAxisTranslation = new QDoubleSpinBox(groupBox_2);
        xAxisTranslation->setObjectName(QStringLiteral("xAxisTranslation"));
        xAxisTranslation->setMinimum(-1e+7);
        xAxisTranslation->setMaximum(1e+10);
        xAxisTranslation->setValue(0);

        gridLayout_6->addWidget(xAxisTranslation, 0, 1, 1, 1);

        yAxisLabel_2 = new QLabel(groupBox_2);
        yAxisLabel_2->setObjectName(QStringLiteral("yAxisLabel_2"));
        yAxisLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(yAxisLabel_2, 1, 0, 1, 1);

        yAxisTranslation = new QDoubleSpinBox(groupBox_2);
        yAxisTranslation->setObjectName(QStringLiteral("yAxisTranslation"));
        yAxisTranslation->setMinimum(-1e+7);
        yAxisTranslation->setMaximum(1e+10);
        yAxisTranslation->setValue(0);

        gridLayout_6->addWidget(yAxisTranslation, 1, 1, 1, 1);

        zAxisLabel_2 = new QLabel(groupBox_2);
        zAxisLabel_2->setObjectName(QStringLiteral("zAxisLabel_2"));
        zAxisLabel_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(zAxisLabel_2, 2, 0, 1, 1);

        zAxisTranslation = new QDoubleSpinBox(groupBox_2);
        zAxisTranslation->setObjectName(QStringLiteral("zAxisTranslation"));
        zAxisTranslation->setMinimum(-1e+7);
        zAxisTranslation->setMaximum(1e+10);
        zAxisTranslation->setValue(0);

        gridLayout_6->addWidget(zAxisTranslation, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 2);

        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        xAxisLabel = new QLabel(groupBox);
        xAxisLabel->setObjectName(QStringLiteral("xAxisLabel"));
        xAxisLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(xAxisLabel, 0, 0, 1, 1);

        xAxisRotation = new QDoubleSpinBox(groupBox);
        xAxisRotation->setObjectName(QStringLiteral("xAxisRotation"));
        xAxisRotation->setMinimum(-360);
        xAxisRotation->setMaximum(360);

        gridLayout->addWidget(xAxisRotation, 0, 1, 1, 1);

        yAxisLabel = new QLabel(groupBox);
        yAxisLabel->setObjectName(QStringLiteral("yAxisLabel"));
        yAxisLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(yAxisLabel, 1, 0, 1, 1);

        yAxisRotation = new QDoubleSpinBox(groupBox);
        yAxisRotation->setObjectName(QStringLiteral("yAxisRotation"));
        yAxisRotation->setMinimum(-360);
        yAxisRotation->setMaximum(360);

        gridLayout->addWidget(yAxisRotation, 1, 1, 1, 1);

        zAxisLabel = new QLabel(groupBox);
        zAxisLabel->setObjectName(QStringLiteral("zAxisLabel"));
        zAxisLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(zAxisLabel, 2, 0, 1, 1);

        zAxisRotation = new QDoubleSpinBox(groupBox);
        zAxisRotation->setObjectName(QStringLiteral("zAxisRotation"));
        zAxisRotation->setMinimum(-360);
        zAxisRotation->setMaximum(360);

        gridLayout->addWidget(zAxisRotation, 2, 1, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        uniformLabel = new QLabel(dockWidgetContents);
        uniformLabel->setObjectName(QStringLiteral("uniformLabel"));
        uniformLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(uniformLabel, 0, 0, 1, 1);

        uniformScale = new QDoubleSpinBox(dockWidgetContents);
        uniformScale->setObjectName(QStringLiteral("uniformScale"));
        uniformScale->setMaximum(999999);

        gridLayout_7->addWidget(uniformScale, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout_7, 2, 0, 1, 2);

        TransformPanel->setWidget(dockWidgetContents);

        retranslateUi(TransformPanel);

        QMetaObject::connectSlotsByName(TransformPanel);
    } // setupUi

    void retranslateUi(QDockWidget *TransformPanel)
    {
        TransformPanel->setWindowTitle(QApplication::translate("TransformPanel", "Volume Transform", Q_NULLPTR));
        applyButton->setText(QApplication::translate("TransformPanel", "Apply", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("TransformPanel", "Translation", Q_NULLPTR));
        xAxisLabel_2->setText(QApplication::translate("TransformPanel", "X Axis:", Q_NULLPTR));
        yAxisLabel_2->setText(QApplication::translate("TransformPanel", "Y Axis:", Q_NULLPTR));
        zAxisLabel_2->setText(QApplication::translate("TransformPanel", "Z Axis:", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("TransformPanel", "Rotation", Q_NULLPTR));
        xAxisLabel->setText(QApplication::translate("TransformPanel", "XAxis:", Q_NULLPTR));
        yAxisLabel->setText(QApplication::translate("TransformPanel", "YAxis:", Q_NULLPTR));
        zAxisLabel->setText(QApplication::translate("TransformPanel", "ZAxis:", Q_NULLPTR));
        uniformLabel->setText(QApplication::translate("TransformPanel", "Scale", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TransformPanel: public Ui_TransformPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFORMPANEL_H
