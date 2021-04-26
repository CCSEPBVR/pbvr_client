/********************************************************************************
** Form generated from reading UI file 'pbvrgui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PBVRGUI_H
#define UI_PBVRGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "QGlue/renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_PBVRGUI
{
public:
    QAction *actionConnect_To_Server;
    QAction *actionDisconnect_From_Server;
    QAction *actionExport;
    QAction *actionPBVR_Client_Manual;
    QAction *actionAbout_PBVR_Client;
    QAction *actionImport;
    QAction *actionTransfer_Function_Editor;
    QAction *actionImport_Transfer_Functions;
    QAction *actionExport_Transfer_Functions;
    QAction *actionFilter_Information;
    QAction *actionSystem_Status;
    QAction *actionRender_Options;
    QAction *actionVolume_Transform;
    QAction *actionTime_Controls;
    QAction *actionLegend_Options;
    QAction *actionViewer_Controls;
    QAction *actionParticle_Panel;
    QAction *actionCoordinates;
    QAction *actionRevert_to_Default_Layout;
    QAction *actionAnimation_Control;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionXpos;
    QAction *actionXneg;
    QAction *actionYpos;
    QAction *actionYneg;
    QAction *actionGPU;
    QAction *actionCPU;
    QAction *actionAddFrame;
    QAction *actionRemoveFrame;
    QAction *actionPlayFrames;
    QAction *actionRrep;
    QWidget *kvs_view_area;
    QGridLayout *gridLayout_2;
    RenderArea *kvs_renderarea;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuWindow;
    QMenu *menuViews;
    QMenu *menuHelp;
    QStatusBar *statusBar;
    QToolBar *XformToolBar;
    QToolBar *AnimationToolBar;
    QToolBar *RenderModeToolBar;

    void setupUi(QMainWindow *PBVRGUI)
    {
        if (PBVRGUI->objectName().isEmpty())
            PBVRGUI->setObjectName(QStringLiteral("PBVRGUI"));
        PBVRGUI->resize(645, 677);
        PBVRGUI->setAutoFillBackground(false);
        PBVRGUI->setStyleSheet(QLatin1String("QMainWindow::separator { \n"
"\n"
"background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:1.0, fx:0.5, fy:0.5,  stop:0.0 rgba(0, 0, 0, 128), stop:0.50 rgba(128, 128, 128,32), stop:1 rgba(0, 0, 0, 32)); \n"
" /*background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:0.25 rgba(0, 0, 0, 0), stop:0.5 rgba(128, 1280, 128, 128), stop:0.75 rgba(0, 0, 0, 0), stop:1 rgba(0, 0, 0, 0)); */\n"
";width:2px\n"
"}\n"
""));
        PBVRGUI->setDocumentMode(false);
        PBVRGUI->setDockNestingEnabled(true);
        PBVRGUI->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::VerticalTabs);
        actionConnect_To_Server = new QAction(PBVRGUI);
        actionConnect_To_Server->setObjectName(QStringLiteral("actionConnect_To_Server"));
        actionConnect_To_Server->setEnabled(false);
        actionDisconnect_From_Server = new QAction(PBVRGUI);
        actionDisconnect_From_Server->setObjectName(QStringLiteral("actionDisconnect_From_Server"));
        actionDisconnect_From_Server->setEnabled(false);
        actionExport = new QAction(PBVRGUI);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        actionPBVR_Client_Manual = new QAction(PBVRGUI);
        actionPBVR_Client_Manual->setObjectName(QStringLiteral("actionPBVR_Client_Manual"));
        actionAbout_PBVR_Client = new QAction(PBVRGUI);
        actionAbout_PBVR_Client->setObjectName(QStringLiteral("actionAbout_PBVR_Client"));
        actionAbout_PBVR_Client->setMenuRole(QAction::AboutRole);
        actionImport = new QAction(PBVRGUI);
        actionImport->setObjectName(QStringLiteral("actionImport"));
        actionTransfer_Function_Editor = new QAction(PBVRGUI);
        actionTransfer_Function_Editor->setObjectName(QStringLiteral("actionTransfer_Function_Editor"));
        actionImport_Transfer_Functions = new QAction(PBVRGUI);
        actionImport_Transfer_Functions->setObjectName(QStringLiteral("actionImport_Transfer_Functions"));
        actionExport_Transfer_Functions = new QAction(PBVRGUI);
        actionExport_Transfer_Functions->setObjectName(QStringLiteral("actionExport_Transfer_Functions"));
        actionFilter_Information = new QAction(PBVRGUI);
        actionFilter_Information->setObjectName(QStringLiteral("actionFilter_Information"));
        actionSystem_Status = new QAction(PBVRGUI);
        actionSystem_Status->setObjectName(QStringLiteral("actionSystem_Status"));
        actionRender_Options = new QAction(PBVRGUI);
        actionRender_Options->setObjectName(QStringLiteral("actionRender_Options"));
        actionVolume_Transform = new QAction(PBVRGUI);
        actionVolume_Transform->setObjectName(QStringLiteral("actionVolume_Transform"));
        actionTime_Controls = new QAction(PBVRGUI);
        actionTime_Controls->setObjectName(QStringLiteral("actionTime_Controls"));
        actionLegend_Options = new QAction(PBVRGUI);
        actionLegend_Options->setObjectName(QStringLiteral("actionLegend_Options"));
        actionViewer_Controls = new QAction(PBVRGUI);
        actionViewer_Controls->setObjectName(QStringLiteral("actionViewer_Controls"));
        actionParticle_Panel = new QAction(PBVRGUI);
        actionParticle_Panel->setObjectName(QStringLiteral("actionParticle_Panel"));
        actionParticle_Panel->setEnabled(true);
        QFont font;
        actionParticle_Panel->setFont(font);
        actionCoordinates = new QAction(PBVRGUI);
        actionCoordinates->setObjectName(QStringLiteral("actionCoordinates"));
        actionRevert_to_Default_Layout = new QAction(PBVRGUI);
        actionRevert_to_Default_Layout->setObjectName(QStringLiteral("actionRevert_to_Default_Layout"));
        actionAnimation_Control = new QAction(PBVRGUI);
        actionAnimation_Control->setObjectName(QStringLiteral("actionAnimation_Control"));
        actionZoomIn = new QAction(PBVRGUI);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        QFont font1;
        font1.setPointSize(16);
        actionZoomIn->setFont(font1);
        actionZoomOut = new QAction(PBVRGUI);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        actionZoomOut->setFont(font1);
        actionXpos = new QAction(PBVRGUI);
        actionXpos->setObjectName(QStringLiteral("actionXpos"));
        actionXpos->setCheckable(false);
        actionXpos->setEnabled(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Resources/xpos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionXpos->setIcon(icon);
        actionXpos->setFont(font1);
        actionXpos->setVisible(true);
        actionXneg = new QAction(PBVRGUI);
        actionXneg->setObjectName(QStringLiteral("actionXneg"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Resources/xneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionXneg->setIcon(icon1);
        actionXneg->setFont(font1);
        actionYpos = new QAction(PBVRGUI);
        actionYpos->setObjectName(QStringLiteral("actionYpos"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Resources/ypos.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionYpos->setIcon(icon2);
        actionYpos->setFont(font1);
        actionYneg = new QAction(PBVRGUI);
        actionYneg->setObjectName(QStringLiteral("actionYneg"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Resources/yneg.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionYneg->setIcon(icon3);
        actionYneg->setFont(font1);
        actionGPU = new QAction(PBVRGUI);
        actionGPU->setObjectName(QStringLiteral("actionGPU"));
        actionGPU->setCheckable(true);
        actionGPU->setChecked(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Resources/gpu_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGPU->setIcon(icon4);
        actionGPU->setFont(font1);
        actionCPU = new QAction(PBVRGUI);
        actionCPU->setObjectName(QStringLiteral("actionCPU"));
        actionCPU->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Resources/cpu_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCPU->setIcon(icon5);
        actionCPU->setFont(font1);
        actionAddFrame = new QAction(PBVRGUI);
        actionAddFrame->setObjectName(QStringLiteral("actionAddFrame"));
        actionAddFrame->setFont(font1);
        actionRemoveFrame = new QAction(PBVRGUI);
        actionRemoveFrame->setObjectName(QStringLiteral("actionRemoveFrame"));
        actionRemoveFrame->setFont(font1);
        actionPlayFrames = new QAction(PBVRGUI);
        actionPlayFrames->setObjectName(QStringLiteral("actionPlayFrames"));
        QFont font2;
        font2.setPointSize(15);
        actionPlayFrames->setFont(font2);
        actionRrep = new QAction(PBVRGUI);
        actionRrep->setObjectName(QStringLiteral("actionRrep"));
        actionRrep->setEnabled(true);
        actionRrep->setFont(font1);
        actionRrep->setVisible(true);
        kvs_view_area = new QWidget(PBVRGUI);
        kvs_view_area->setObjectName(QStringLiteral("kvs_view_area"));
        kvs_view_area->setMinimumSize(QSize(100, 100));
        kvs_view_area->setAutoFillBackground(true);
        kvs_view_area->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(kvs_view_area);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        kvs_renderarea = new RenderArea(kvs_view_area);
        kvs_renderarea->setObjectName(QStringLiteral("kvs_renderarea"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(kvs_renderarea->sizePolicy().hasHeightForWidth());
        kvs_renderarea->setSizePolicy(sizePolicy);
        kvs_renderarea->setMinimumSize(QSize(400, 400));
        kvs_renderarea->setMaximumSize(QSize(400, 400));
        kvs_renderarea->setBaseSize(QSize(0, 0));

        gridLayout_2->addWidget(kvs_renderarea, 0, 0, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        PBVRGUI->setCentralWidget(kvs_view_area);
        menuBar = new QMenuBar(PBVRGUI);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 645, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QStringLiteral("menuWindow"));
        menuViews = new QMenu(menuWindow);
        menuViews->setObjectName(QStringLiteral("menuViews"));
        menuViews->setEnabled(true);
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        PBVRGUI->setMenuBar(menuBar);
        statusBar = new QStatusBar(PBVRGUI);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        statusBar->setEnabled(true);
        PBVRGUI->setStatusBar(statusBar);
        XformToolBar = new QToolBar(PBVRGUI);
        XformToolBar->setObjectName(QStringLiteral("XformToolBar"));
        QFont font3;
        font3.setPointSize(20);
        font3.setUnderline(false);
        XformToolBar->setFont(font3);
        XformToolBar->setIconSize(QSize(24, 24));
        XformToolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
        PBVRGUI->addToolBar(Qt::TopToolBarArea, XformToolBar);
        AnimationToolBar = new QToolBar(PBVRGUI);
        AnimationToolBar->setObjectName(QStringLiteral("AnimationToolBar"));
        PBVRGUI->addToolBar(Qt::TopToolBarArea, AnimationToolBar);
        RenderModeToolBar = new QToolBar(PBVRGUI);
        RenderModeToolBar->setObjectName(QStringLiteral("RenderModeToolBar"));
        PBVRGUI->addToolBar(Qt::TopToolBarArea, RenderModeToolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionImport);
        menuFile->addAction(actionExport);
        menuFile->addSeparator();
        menuFile->addAction(actionImport_Transfer_Functions);
        menuFile->addAction(actionExport_Transfer_Functions);
        menuFile->addSeparator();
        menuWindow->addSeparator();
        menuWindow->addAction(menuViews->menuAction());
        menuWindow->addSeparator();
        menuWindow->addAction(actionParticle_Panel);
        menuWindow->addAction(actionTransfer_Function_Editor);
        menuWindow->addAction(actionViewer_Controls);
        menuViews->addAction(actionAnimation_Control);
        menuViews->addAction(actionCoordinates);
        menuViews->addAction(actionFilter_Information);
        menuViews->addAction(actionLegend_Options);
        menuViews->addAction(actionSystem_Status);
        menuViews->addAction(actionRender_Options);
        menuViews->addAction(actionTime_Controls);
        menuViews->addAction(actionVolume_Transform);
        menuViews->addSeparator();
        menuViews->addAction(actionRevert_to_Default_Layout);
        menuHelp->addAction(actionPBVR_Client_Manual);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_PBVR_Client);
        XformToolBar->addAction(actionZoomIn);
        XformToolBar->addAction(actionZoomOut);
        XformToolBar->addSeparator();
        XformToolBar->addAction(actionXneg);
        XformToolBar->addAction(actionYneg);
        XformToolBar->addAction(actionYpos);
        XformToolBar->addAction(actionXpos);
        AnimationToolBar->addAction(actionAddFrame);
        AnimationToolBar->addAction(actionRemoveFrame);
        AnimationToolBar->addAction(actionPlayFrames);
        AnimationToolBar->addSeparator();
        RenderModeToolBar->addAction(actionGPU);
        RenderModeToolBar->addAction(actionCPU);

        retranslateUi(PBVRGUI);

        QMetaObject::connectSlotsByName(PBVRGUI);
    } // setupUi

    void retranslateUi(QMainWindow *PBVRGUI)
    {
        PBVRGUI->setWindowTitle(QString());
        actionConnect_To_Server->setText(QApplication::translate("PBVRGUI", "Connect To Server", Q_NULLPTR));
        actionDisconnect_From_Server->setText(QApplication::translate("PBVRGUI", "Disconnect From Server", Q_NULLPTR));
        actionExport->setText(QApplication::translate("PBVRGUI", "Export Parameters", Q_NULLPTR));
        actionPBVR_Client_Manual->setText(QApplication::translate("PBVRGUI", "PBVR Client Manual", Q_NULLPTR));
        actionAbout_PBVR_Client->setText(QApplication::translate("PBVRGUI", "About PBVR Client", Q_NULLPTR));
        actionImport->setText(QApplication::translate("PBVRGUI", "Import Parameters", Q_NULLPTR));
        actionTransfer_Function_Editor->setText(QApplication::translate("PBVRGUI", "Transfer Function Editor", Q_NULLPTR));
        actionImport_Transfer_Functions->setText(QApplication::translate("PBVRGUI", "Import Transfer Functions", Q_NULLPTR));
        actionExport_Transfer_Functions->setText(QApplication::translate("PBVRGUI", "Export Transfer Functions", Q_NULLPTR));
        actionFilter_Information->setText(QApplication::translate("PBVRGUI", "Filter Information", Q_NULLPTR));
        actionSystem_Status->setText(QApplication::translate("PBVRGUI", "System Status", Q_NULLPTR));
        actionRender_Options->setText(QApplication::translate("PBVRGUI", "Render Options", Q_NULLPTR));
        actionVolume_Transform->setText(QApplication::translate("PBVRGUI", "Volume Transform", Q_NULLPTR));
        actionTime_Controls->setText(QApplication::translate("PBVRGUI", "Time Controls", Q_NULLPTR));
        actionLegend_Options->setText(QApplication::translate("PBVRGUI", "Legend Options", Q_NULLPTR));
        actionViewer_Controls->setText(QApplication::translate("PBVRGUI", "Viewer Controls", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionViewer_Controls->setToolTip(QApplication::translate("PBVRGUI", "Viewer Controls", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionParticle_Panel->setText(QApplication::translate("PBVRGUI", "Particle Selector", Q_NULLPTR));
        actionCoordinates->setText(QApplication::translate("PBVRGUI", "Coordinates", Q_NULLPTR));
        actionRevert_to_Default_Layout->setText(QApplication::translate("PBVRGUI", "Revert to Default Layout", Q_NULLPTR));
        actionAnimation_Control->setText(QApplication::translate("PBVRGUI", "Animation Control", Q_NULLPTR));
        actionZoomIn->setText(QApplication::translate("PBVRGUI", "\360\237\224\215  +", Q_NULLPTR));
        actionZoomIn->setIconText(QApplication::translate("PBVRGUI", "\360\237\224\215  +", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionZoomIn->setToolTip(QApplication::translate("PBVRGUI", "Zoom In [ z ]", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionZoomIn->setShortcut(QApplication::translate("PBVRGUI", "Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionZoomOut->setText(QApplication::translate("PBVRGUI", "\360\237\224\215  -", Q_NULLPTR));
        actionZoomOut->setIconText(QApplication::translate("PBVRGUI", "\360\237\224\215  -", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionZoomOut->setToolTip(QApplication::translate("PBVRGUI", "Zoom Out [ Shift + z ]", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionZoomOut->setShortcut(QApplication::translate("PBVRGUI", "Shift+Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionXpos->setText(QApplication::translate("PBVRGUI", "x+", Q_NULLPTR));
        actionXpos->setIconText(QApplication::translate("PBVRGUI", "x+", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionXpos->setToolTip(QApplication::translate("PBVRGUI", "Move model in X+ direction [ x ]", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionXpos->setShortcut(QApplication::translate("PBVRGUI", "Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionXneg->setText(QApplication::translate("PBVRGUI", "x-", Q_NULLPTR));
        actionXneg->setIconText(QApplication::translate("PBVRGUI", "x-", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionXneg->setToolTip(QApplication::translate("PBVRGUI", "Move model in X- direction [ Shift + x ]", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionXneg->setShortcut(QApplication::translate("PBVRGUI", "Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionYpos->setText(QApplication::translate("PBVRGUI", "y\342\254\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionYpos->setToolTip(QApplication::translate("PBVRGUI", "Move model in Y direction [  y ]", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionYpos->setShortcut(QApplication::translate("PBVRGUI", "Up", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionYneg->setText(QApplication::translate("PBVRGUI", "y\342\254\206", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionYneg->setToolTip(QApplication::translate("PBVRGUI", "Move model in Y- direction [ Shift + y ]", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionYneg->setShortcut(QApplication::translate("PBVRGUI", "Down", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionGPU->setText(QApplication::translate("PBVRGUI", "GPU", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionGPU->setToolTip(QApplication::translate("PBVRGUI", "Enable GPU Rendering", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCPU->setText(QApplication::translate("PBVRGUI", "CPU", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCPU->setToolTip(QApplication::translate("PBVRGUI", "Enable CPU Rendering ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAddFrame->setText(QApplication::translate("PBVRGUI", "\360\237\216\236 +", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAddFrame->setToolTip(QApplication::translate("PBVRGUI", "Add Animation Frame [ F ]", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAddFrame->setShortcut(QApplication::translate("PBVRGUI", "F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRemoveFrame->setText(QApplication::translate("PBVRGUI", "\360\237\216\236  -", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRemoveFrame->setToolTip(QApplication::translate("PBVRGUI", "Remove Animation Frame [ Shift + F ] ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRemoveFrame->setShortcut(QApplication::translate("PBVRGUI", "Shift+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPlayFrames->setText(QApplication::translate("PBVRGUI", "\360\237\216\236 \342\226\267", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPlayFrames->setToolTip(QApplication::translate("PBVRGUI", "Play Animation [ M ]", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionPlayFrames->setShortcut(QApplication::translate("PBVRGUI", "M", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRrep->setText(QApplication::translate("PBVRGUI", "Rrep =", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRrep->setToolTip(QApplication::translate("PBVRGUI", "Increase Render Repetition Level", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menuFile->setTitle(QApplication::translate("PBVRGUI", "File", Q_NULLPTR));
        menuWindow->setTitle(QApplication::translate("PBVRGUI", "Window", Q_NULLPTR));
        menuViews->setTitle(QApplication::translate("PBVRGUI", "Views", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("PBVRGUI", "Help", Q_NULLPTR));
        XformToolBar->setWindowTitle(QApplication::translate("PBVRGUI", "Xform Toolbar", Q_NULLPTR));
        AnimationToolBar->setWindowTitle(QApplication::translate("PBVRGUI", "Animation Toolbar", Q_NULLPTR));
        RenderModeToolBar->setWindowTitle(QApplication::translate("PBVRGUI", "Render Mode Toolbar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PBVRGUI: public Ui_PBVRGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PBVRGUI_H
