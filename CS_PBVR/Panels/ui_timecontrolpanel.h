/********************************************************************************
** Form generated from reading UI file 'timecontrolpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMECONTROLPANEL_H
#define UI_TIMECONTROLPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "slidercontrol.h"

QT_BEGIN_NAMESPACE

class Ui_TimecontrolPanel
{
public:
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout;
    QProgressBar *m_progress;
    QLabel *LBL_Progress;
    QPushButton *stop_button;
    SliderControl *sliderControl;
    QCheckBox *lastStepCHK;

    void setupUi(QDockWidget *TimecontrolPanel)
    {
        if (TimecontrolPanel->objectName().isEmpty())
            TimecontrolPanel->setObjectName(QStringLiteral("TimecontrolPanel"));
        TimecontrolPanel->resize(404, 105);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TimecontrolPanel->sizePolicy().hasHeightForWidth());
        TimecontrolPanel->setSizePolicy(sizePolicy);
        TimecontrolPanel->setMinimumSize(QSize(257, 105));
        TimecontrolPanel->setBaseSize(QSize(0, 0));
        TimecontrolPanel->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        gridLayout = new QGridLayout(dockWidgetContents);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        m_progress = new QProgressBar(dockWidgetContents);
        m_progress->setObjectName(QStringLiteral("m_progress"));
        m_progress->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"     background-color: #3add36;\n"
"     width: 1px;\n"
" }\n"
"\n"
" QProgressBar {\n"
"     border: 1px solid grey;\n"
"     border-radius: 2px;\n"
"     text-align: center;\n"
" }"));
        m_progress->setMaximum(100);
        m_progress->setValue(0);
        m_progress->setTextVisible(true);
        m_progress->setInvertedAppearance(false);

        gridLayout->addWidget(m_progress, 0, 2, 1, 1);

        LBL_Progress = new QLabel(dockWidgetContents);
        LBL_Progress->setObjectName(QStringLiteral("LBL_Progress"));
        LBL_Progress->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(LBL_Progress, 0, 0, 1, 1);

        stop_button = new QPushButton(dockWidgetContents);
        stop_button->setObjectName(QStringLiteral("stop_button"));
        stop_button->setStyleSheet(QLatin1String("QPushButton:checked {\n"
"	color: red;\n"
"}\n"
"QPushButton {\n"
"	color: blue;\n"
"}"));
        stop_button->setCheckable(true);
        stop_button->setChecked(true);

        gridLayout->addWidget(stop_button, 0, 4, 1, 2);

        sliderControl = new SliderControl(dockWidgetContents);
        sliderControl->setObjectName(QStringLiteral("sliderControl"));

        gridLayout->addWidget(sliderControl, 4, 2, 1, 1);

        lastStepCHK = new QCheckBox(dockWidgetContents);
        lastStepCHK->setObjectName(QStringLiteral("lastStepCHK"));
        lastStepCHK->setChecked(true);

        gridLayout->addWidget(lastStepCHK, 4, 4, 1, 1);

        TimecontrolPanel->setWidget(dockWidgetContents);

        retranslateUi(TimecontrolPanel);

        QMetaObject::connectSlotsByName(TimecontrolPanel);
    } // setupUi

    void retranslateUi(QDockWidget *TimecontrolPanel)
    {
        TimecontrolPanel->setWindowTitle(QApplication::translate("TimecontrolPanel", "Time Controls", Q_NULLPTR));
        m_progress->setFormat(QApplication::translate("TimecontrolPanel", "%p%", Q_NULLPTR));
        LBL_Progress->setText(QApplication::translate("TimecontrolPanel", "Progress:", Q_NULLPTR));
        stop_button->setText(QApplication::translate("TimecontrolPanel", "\342\226\272Start", Q_NULLPTR));
        lastStepCHK->setText(QApplication::translate("TimecontrolPanel", "Last step", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TimecontrolPanel: public Ui_TimecontrolPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMECONTROLPANEL_H
