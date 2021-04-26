/********************************************************************************
** Form generated from reading UI file 'systemstatuspanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSTATUSPANEL_H
#define UI_SYSTEMSTATUSPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemstatusPanel
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_1;
    QGridLayout *gridLayout_3;
    QLabel *LBL_ParticleNumber;
    QLabel *LBL_ParamFile;
    QLineEdit *particleNumber;
    QLabel *LBL_GPUmemory;
    QLineEdit *parameterFilename;
    QProgressBar *cpu_useage_bar;
    QLabel *LBL_CPUmemory;
    QProgressBar *gpu_usage_bar;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QSpinBox *samplingInterval;
    QCheckBox *disableSampling_chk;
    QLabel *LBL_SamplingInterval_2;
    QLabel *LBL_disableSampling;
    QPushButton *setParam_btn;

    void setupUi(QDockWidget *SystemstatusPanel)
    {
        if (SystemstatusPanel->objectName().isEmpty())
            SystemstatusPanel->setObjectName(QStringLiteral("SystemstatusPanel"));
        SystemstatusPanel->resize(326, 377);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SystemstatusPanel->sizePolicy().hasHeightForWidth());
        SystemstatusPanel->setSizePolicy(sizePolicy);
        SystemstatusPanel->setMinimumSize(QSize(326, 377));
        SystemstatusPanel->setMaximumSize(QSize(400, 800));
        SystemstatusPanel->setStyleSheet(QStringLiteral(""));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        dockWidgetContents->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        groupBox_1 = new QGroupBox(dockWidgetContents);
        groupBox_1->setObjectName(QStringLiteral("groupBox_1"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_1->sizePolicy().hasHeightForWidth());
        groupBox_1->setSizePolicy(sizePolicy1);
        gridLayout_3 = new QGridLayout(groupBox_1);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        LBL_ParticleNumber = new QLabel(groupBox_1);
        LBL_ParticleNumber->setObjectName(QStringLiteral("LBL_ParticleNumber"));

        gridLayout_3->addWidget(LBL_ParticleNumber, 2, 0, 1, 1);

        LBL_ParamFile = new QLabel(groupBox_1);
        LBL_ParamFile->setObjectName(QStringLiteral("LBL_ParamFile"));

        gridLayout_3->addWidget(LBL_ParamFile, 3, 0, 1, 1);

        particleNumber = new QLineEdit(groupBox_1);
        particleNumber->setObjectName(QStringLiteral("particleNumber"));
        particleNumber->setEnabled(false);

        gridLayout_3->addWidget(particleNumber, 2, 1, 1, 1);

        LBL_GPUmemory = new QLabel(groupBox_1);
        LBL_GPUmemory->setObjectName(QStringLiteral("LBL_GPUmemory"));

        gridLayout_3->addWidget(LBL_GPUmemory, 1, 0, 1, 1);

        parameterFilename = new QLineEdit(groupBox_1);
        parameterFilename->setObjectName(QStringLiteral("parameterFilename"));
        parameterFilename->setEnabled(false);

        gridLayout_3->addWidget(parameterFilename, 3, 1, 1, 1);

        cpu_useage_bar = new QProgressBar(groupBox_1);
        cpu_useage_bar->setObjectName(QStringLiteral("cpu_useage_bar"));
        cpu_useage_bar->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"     background-color: #25cc25;\n"
"     width: 1px;\n"
" }\n"
"\n"
" QProgressBar {\n"
"     border: 1px solid lightgrey;\n"
"     border-radius: 2px;\n"
"     text-align: center;\n"
" }"));
        cpu_useage_bar->setValue(46);

        gridLayout_3->addWidget(cpu_useage_bar, 0, 1, 1, 1);

        LBL_CPUmemory = new QLabel(groupBox_1);
        LBL_CPUmemory->setObjectName(QStringLiteral("LBL_CPUmemory"));

        gridLayout_3->addWidget(LBL_CPUmemory, 0, 0, 1, 1);

        gpu_usage_bar = new QProgressBar(groupBox_1);
        gpu_usage_bar->setObjectName(QStringLiteral("gpu_usage_bar"));
        gpu_usage_bar->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"     background-color: #3add36;\n"
"     width: 1px;\n"
" }\n"
"\n"
" QProgressBar {\n"
"     border: 1px solid lightgrey;\n"
"     border-radius: 2px;\n"
"     text-align: center;\n"
" }"));
        gpu_usage_bar->setValue(50);

        gridLayout_3->addWidget(gpu_usage_bar, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_1, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        samplingInterval = new QSpinBox(groupBox_2);
        samplingInterval->setObjectName(QStringLiteral("samplingInterval"));
        samplingInterval->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        samplingInterval->setMaximum(999999999);
        samplingInterval->setSingleStep(10);
        samplingInterval->setValue(5000);

        gridLayout_2->addWidget(samplingInterval, 0, 1, 1, 1);

        disableSampling_chk = new QCheckBox(groupBox_2);
        disableSampling_chk->setObjectName(QStringLiteral("disableSampling_chk"));
        disableSampling_chk->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(disableSampling_chk, 2, 1, 1, 1);

        LBL_SamplingInterval_2 = new QLabel(groupBox_2);
        LBL_SamplingInterval_2->setObjectName(QStringLiteral("LBL_SamplingInterval_2"));

        gridLayout_2->addWidget(LBL_SamplingInterval_2, 0, 0, 1, 1);

        LBL_disableSampling = new QLabel(groupBox_2);
        LBL_disableSampling->setObjectName(QStringLiteral("LBL_disableSampling"));

        gridLayout_2->addWidget(LBL_disableSampling, 2, 0, 1, 1);

        setParam_btn = new QPushButton(groupBox_2);
        setParam_btn->setObjectName(QStringLiteral("setParam_btn"));

        gridLayout_2->addWidget(setParam_btn, 3, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 1);

        SystemstatusPanel->setWidget(dockWidgetContents);

        retranslateUi(SystemstatusPanel);

        QMetaObject::connectSlotsByName(SystemstatusPanel);
    } // setupUi

    void retranslateUi(QDockWidget *SystemstatusPanel)
    {
        SystemstatusPanel->setWindowTitle(QApplication::translate("SystemstatusPanel", "System Status", Q_NULLPTR));
        groupBox_1->setTitle(QApplication::translate("SystemstatusPanel", "System Status", Q_NULLPTR));
        LBL_ParticleNumber->setText(QApplication::translate("SystemstatusPanel", "Displayed Particles", Q_NULLPTR));
        LBL_ParamFile->setText(QApplication::translate("SystemstatusPanel", "Filter Parameter File", Q_NULLPTR));
        LBL_GPUmemory->setText(QApplication::translate("SystemstatusPanel", "GPU Memory", Q_NULLPTR));
        parameterFilename->setText(QApplication::translate("SystemstatusPanel", "Filterinfo | window title", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cpu_useage_bar->setToolTip(QApplication::translate("SystemstatusPanel", "Currently used CPU Memory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cpu_useage_bar->setFormat(QApplication::translate("SystemstatusPanel", "15718/12286MB", Q_NULLPTR));
        LBL_CPUmemory->setText(QApplication::translate("SystemstatusPanel", "CPU Memory", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        gpu_usage_bar->setToolTip(QApplication::translate("SystemstatusPanel", "Currently used GPU Memory", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        gpu_usage_bar->setFormat(QApplication::translate("SystemstatusPanel", "4096/8192MB", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("SystemstatusPanel", "Sampling ", Q_NULLPTR));
        samplingInterval->setSuffix(QApplication::translate("SystemstatusPanel", "ms", Q_NULLPTR));
        disableSampling_chk->setText(QApplication::translate("SystemstatusPanel", "Hold till complete", Q_NULLPTR));
        LBL_SamplingInterval_2->setText(QApplication::translate("SystemstatusPanel", "Step Interval", Q_NULLPTR));
        LBL_disableSampling->setText(QApplication::translate("SystemstatusPanel", "Transfer Function Edit", Q_NULLPTR));
        setParam_btn->setText(QApplication::translate("SystemstatusPanel", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SystemstatusPanel: public Ui_SystemstatusPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSTATUSPANEL_H
