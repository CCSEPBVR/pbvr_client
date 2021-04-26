/********************************************************************************
** Form generated from reading UI file 'renderoptionpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENDEROPTIONPANEL_H
#define UI_RENDEROPTIONPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RenderoptionPanel
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_8;
    QFormLayout *formLayout_5;
    QLabel *particleDensityLabel;
    QDoubleSpinBox *particleDensity;
    QLabel *particleLimitLabel;
    QSpinBox *particleLimit;
    QSpinBox *dataSizeLimit;
    QLabel *label;
    QGroupBox *groupBox_7;
    QFormLayout *formLayout_4;
    QLabel *heightLabel;
    QSpinBox *resolutionHeight;
    QLabel *widthLabel;
    QSpinBox *resolutionWidth;
    QPushButton *applyButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDockWidget *RenderoptionPanel)
    {
        if (RenderoptionPanel->objectName().isEmpty())
            RenderoptionPanel->setObjectName(QStringLiteral("RenderoptionPanel"));
        RenderoptionPanel->resize(250, 320);
        RenderoptionPanel->setMinimumSize(QSize(250, 320));
        RenderoptionPanel->setMaximumSize(QSize(250, 320));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidgetContents->setMaximumSize(QSize(250, 500));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        groupBox_8 = new QGroupBox(dockWidgetContents);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy);
        formLayout_5 = new QFormLayout(groupBox_8);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        particleDensityLabel = new QLabel(groupBox_8);
        particleDensityLabel->setObjectName(QStringLiteral("particleDensityLabel"));
        particleDensityLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, particleDensityLabel);

        particleDensity = new QDoubleSpinBox(groupBox_8);
        particleDensity->setObjectName(QStringLiteral("particleDensity"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, particleDensity);

        particleLimitLabel = new QLabel(groupBox_8);
        particleLimitLabel->setObjectName(QStringLiteral("particleLimitLabel"));
        particleLimitLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(1, QFormLayout::LabelRole, particleLimitLabel);

        particleLimit = new QSpinBox(groupBox_8);
        particleLimit->setObjectName(QStringLiteral("particleLimit"));
        particleLimit->setMaximum(999999999);
        particleLimit->setValue(1000000);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, particleLimit);

        dataSizeLimit = new QSpinBox(groupBox_8);
        dataSizeLimit->setObjectName(QStringLiteral("dataSizeLimit"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, dataSizeLimit);

        label = new QLabel(groupBox_8);
        label->setObjectName(QStringLiteral("label"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label);


        verticalLayout->addWidget(groupBox_8);

        groupBox_7 = new QGroupBox(dockWidgetContents);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        formLayout_4 = new QFormLayout(groupBox_7);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        heightLabel = new QLabel(groupBox_7);
        heightLabel->setObjectName(QStringLiteral("heightLabel"));
        heightLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, heightLabel);

        resolutionHeight = new QSpinBox(groupBox_7);
        resolutionHeight->setObjectName(QStringLiteral("resolutionHeight"));
        resolutionHeight->setMaximum(16192);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, resolutionHeight);

        widthLabel = new QLabel(groupBox_7);
        widthLabel->setObjectName(QStringLiteral("widthLabel"));
        widthLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, widthLabel);

        resolutionWidth = new QSpinBox(groupBox_7);
        resolutionWidth->setObjectName(QStringLiteral("resolutionWidth"));
        resolutionWidth->setMaximum(16192);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, resolutionWidth);


        verticalLayout->addWidget(groupBox_7);

        applyButton = new QPushButton(dockWidgetContents);
        applyButton->setObjectName(QStringLiteral("applyButton"));

        verticalLayout->addWidget(applyButton);

        verticalSpacer = new QSpacerItem(20, 2, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(0, 10);
        RenderoptionPanel->setWidget(dockWidgetContents);

        retranslateUi(RenderoptionPanel);

        QMetaObject::connectSlotsByName(RenderoptionPanel);
    } // setupUi

    void retranslateUi(QDockWidget *RenderoptionPanel)
    {
        RenderoptionPanel->setWindowTitle(QApplication::translate("RenderoptionPanel", "Render Options", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("RenderoptionPanel", "Particles", Q_NULLPTR));
        particleDensityLabel->setText(QApplication::translate("RenderoptionPanel", " Density:", Q_NULLPTR));
        particleLimitLabel->setText(QApplication::translate("RenderoptionPanel", " Limit:", Q_NULLPTR));
        label->setText(QApplication::translate("RenderoptionPanel", "Data-Size Limit:", Q_NULLPTR));
        groupBox_7->setTitle(QApplication::translate("RenderoptionPanel", "Resolution", Q_NULLPTR));
        heightLabel->setText(QApplication::translate("RenderoptionPanel", "Height:", Q_NULLPTR));
        widthLabel->setText(QApplication::translate("RenderoptionPanel", "Width:", Q_NULLPTR));
        applyButton->setText(QApplication::translate("RenderoptionPanel", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RenderoptionPanel: public Ui_RenderoptionPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENDEROPTIONPANEL_H
