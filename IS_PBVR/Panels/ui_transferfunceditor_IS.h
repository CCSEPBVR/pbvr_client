/********************************************************************************
** Form generated from reading UI file 'transferfunceditor_IS.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERFUNCEDITOR_IS_H
#define UI_TRANSFERFUNCEDITOR_IS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include "QGlue/colormappalette.h"
#include "QGlue/histogram.h"
#include "QGlue/opacitymappalette.h"

QT_BEGIN_NAMESPACE

class Ui_TransferFuncEditor
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QGlue::Histogram *qscr_color_hist;
    QGlue::ColorMapPalette *qscr_color_map;
    QPushButton *colorButton;
    QFormLayout *formLayout;
    QLabel *rangeMinLabel;
    QLabel *serverSideRangeLabel;
    QHBoxLayout *horizontalLayout_7;
    QDoubleSpinBox *transfer_function_min_color;
    QLabel *label_11;
    QDoubleSpinBox *transfer_function_max_color;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *range_min_color;
    QLabel *label_12;
    QLineEdit *range_max_color;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_2;
    QGlue::OpacityMapPalette *qscr_opacity_map;
    QPushButton *opacityButton;
    QGlue::Histogram *qscr_opacity_hist;
    QFormLayout *formLayout_2;
    QLabel *rangeOpacityLabel;
    QLabel *serverSideOpacityRangeLabel;
    QHBoxLayout *horizontalLayout_9;
    QDoubleSpinBox *transfer_function_min_opacity;
    QLabel *label_13;
    QDoubleSpinBox *transfer_function_max_opacity;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *range_min_opacity;
    QLabel *label_14;
    QLineEdit *range_max_opacity;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *resetButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *applyButton;
    QPushButton *importButton;
    QPushButton *exportButton;
    QSpacerItem *verticalSpacer;
    QStackedWidget *operatingModeStack;
    QWidget *ClientServerMode;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *color_function_synth;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *colormapFunction;
    QLabel *label_6;
    QLineEdit *transfer_function_var_color;
    QLabel *label_7;
    QPushButton *cfuncButton;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_12;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_4;
    QLineEdit *opacity_function_synth;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QComboBox *opacitymapFunction;
    QLabel *label_9;
    QLineEdit *transfer_function_var_opacity;
    QLabel *label_10;
    QPushButton *ofuncButton;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QSpinBox *num_transfer;
    QLabel *label;
    QWidget *InsituMode;
    QGridLayout *gridLayout_9;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_8;
    QLabel *label_15;
    QSpinBox *tfResolution;
    QLabel *label_16;
    QLineEdit *tfSythesizer;
    QFrame *line;
    QFrame *frame_9;
    QGridLayout *gridLayout_10;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QComboBox *tfSelection;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_6;
    QLineEdit *tfOpacityEquation;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QLineEdit *tfColorEquation;

    void setupUi(QDialog *TransferFuncEditor)
    {
        if (TransferFuncEditor->objectName().isEmpty())
            TransferFuncEditor->setObjectName(QStringLiteral("TransferFuncEditor"));
        TransferFuncEditor->resize(716, 692);
        TransferFuncEditor->setSizeGripEnabled(false);
        gridLayout_5 = new QGridLayout(TransferFuncEditor);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        groupBox_3 = new QGroupBox(TransferFuncEditor);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        qscr_color_hist = new QGlue::Histogram(groupBox_3);
        qscr_color_hist->setObjectName(QStringLiteral("qscr_color_hist"));
        qscr_color_hist->setMinimumSize(QSize(0, 80));

        gridLayout->addWidget(qscr_color_hist, 3, 0, 1, 1);

        qscr_color_map = new QGlue::ColorMapPalette(groupBox_3);
        qscr_color_map->setObjectName(QStringLiteral("qscr_color_map"));
        qscr_color_map->setMinimumSize(QSize(0, 80));

        gridLayout->addWidget(qscr_color_map, 1, 0, 1, 1);

        colorButton = new QPushButton(groupBox_3);
        colorButton->setObjectName(QStringLiteral("colorButton"));

        gridLayout->addWidget(colorButton, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        rangeMinLabel = new QLabel(groupBox_3);
        rangeMinLabel->setObjectName(QStringLiteral("rangeMinLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, rangeMinLabel);

        serverSideRangeLabel = new QLabel(groupBox_3);
        serverSideRangeLabel->setObjectName(QStringLiteral("serverSideRangeLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(serverSideRangeLabel->sizePolicy().hasHeightForWidth());
        serverSideRangeLabel->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, serverSideRangeLabel);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        transfer_function_min_color = new QDoubleSpinBox(groupBox_3);
        transfer_function_min_color->setObjectName(QStringLiteral("transfer_function_min_color"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(transfer_function_min_color->sizePolicy().hasHeightForWidth());
        transfer_function_min_color->setSizePolicy(sizePolicy1);
        transfer_function_min_color->setMinimumSize(QSize(50, 2));
        transfer_function_min_color->setMinimum(-1e+12);
        transfer_function_min_color->setMaximum(1e+12);
        transfer_function_min_color->setSingleStep(0.1);

        horizontalLayout_7->addWidget(transfer_function_min_color);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_7->addWidget(label_11);

        transfer_function_max_color = new QDoubleSpinBox(groupBox_3);
        transfer_function_max_color->setObjectName(QStringLiteral("transfer_function_max_color"));
        sizePolicy1.setHeightForWidth(transfer_function_max_color->sizePolicy().hasHeightForWidth());
        transfer_function_max_color->setSizePolicy(sizePolicy1);
        transfer_function_max_color->setMinimumSize(QSize(50, 2));
        transfer_function_max_color->setMinimum(-1e+12);
        transfer_function_max_color->setMaximum(1e+12);
        transfer_function_max_color->setSingleStep(0.1);
        transfer_function_max_color->setValue(1);

        horizontalLayout_7->addWidget(transfer_function_max_color);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(2, 1);

        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        range_min_color = new QLineEdit(groupBox_3);
        range_min_color->setObjectName(QStringLiteral("range_min_color"));
        range_min_color->setEnabled(false);
        sizePolicy1.setHeightForWidth(range_min_color->sizePolicy().hasHeightForWidth());
        range_min_color->setSizePolicy(sizePolicy1);
        range_min_color->setMinimumSize(QSize(50, 2));

        horizontalLayout_8->addWidget(range_min_color);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_8->addWidget(label_12);

        range_max_color = new QLineEdit(groupBox_3);
        range_max_color->setObjectName(QStringLiteral("range_max_color"));
        range_max_color->setEnabled(false);
        sizePolicy1.setHeightForWidth(range_max_color->sizePolicy().hasHeightForWidth());
        range_max_color->setSizePolicy(sizePolicy1);
        range_max_color->setMinimumSize(QSize(50, 2));

        horizontalLayout_8->addWidget(range_max_color);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(2, 1);

        formLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_8);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);

        gridLayout_5->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(TransferFuncEditor);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        gridLayout_2 = new QGridLayout(groupBox_4);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        qscr_opacity_map = new QGlue::OpacityMapPalette(groupBox_4);
        qscr_opacity_map->setObjectName(QStringLiteral("qscr_opacity_map"));
        qscr_opacity_map->setMinimumSize(QSize(0, 80));

        gridLayout_2->addWidget(qscr_opacity_map, 1, 0, 1, 1);

        opacityButton = new QPushButton(groupBox_4);
        opacityButton->setObjectName(QStringLiteral("opacityButton"));

        gridLayout_2->addWidget(opacityButton, 2, 0, 1, 1);

        qscr_opacity_hist = new QGlue::Histogram(groupBox_4);
        qscr_opacity_hist->setObjectName(QStringLiteral("qscr_opacity_hist"));
        qscr_opacity_hist->setMinimumSize(QSize(0, 80));

        gridLayout_2->addWidget(qscr_opacity_hist, 3, 0, 1, 1);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        rangeOpacityLabel = new QLabel(groupBox_4);
        rangeOpacityLabel->setObjectName(QStringLiteral("rangeOpacityLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, rangeOpacityLabel);

        serverSideOpacityRangeLabel = new QLabel(groupBox_4);
        serverSideOpacityRangeLabel->setObjectName(QStringLiteral("serverSideOpacityRangeLabel"));
        sizePolicy.setHeightForWidth(serverSideOpacityRangeLabel->sizePolicy().hasHeightForWidth());
        serverSideOpacityRangeLabel->setSizePolicy(sizePolicy);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, serverSideOpacityRangeLabel);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        transfer_function_min_opacity = new QDoubleSpinBox(groupBox_4);
        transfer_function_min_opacity->setObjectName(QStringLiteral("transfer_function_min_opacity"));
        sizePolicy1.setHeightForWidth(transfer_function_min_opacity->sizePolicy().hasHeightForWidth());
        transfer_function_min_opacity->setSizePolicy(sizePolicy1);
        transfer_function_min_opacity->setMinimumSize(QSize(50, 2));
        transfer_function_min_opacity->setMinimum(-1e+12);
        transfer_function_min_opacity->setMaximum(1e+12);
        transfer_function_min_opacity->setSingleStep(0.1);

        horizontalLayout_9->addWidget(transfer_function_min_opacity);

        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_9->addWidget(label_13);

        transfer_function_max_opacity = new QDoubleSpinBox(groupBox_4);
        transfer_function_max_opacity->setObjectName(QStringLiteral("transfer_function_max_opacity"));
        sizePolicy1.setHeightForWidth(transfer_function_max_opacity->sizePolicy().hasHeightForWidth());
        transfer_function_max_opacity->setSizePolicy(sizePolicy1);
        transfer_function_max_opacity->setMinimumSize(QSize(50, 2));
        transfer_function_max_opacity->setMinimum(-1e+12);
        transfer_function_max_opacity->setMaximum(1e+12);
        transfer_function_max_opacity->setSingleStep(0.1);
        transfer_function_max_opacity->setValue(0.8);

        horizontalLayout_9->addWidget(transfer_function_max_opacity);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(2, 1);

        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        range_min_opacity = new QLineEdit(groupBox_4);
        range_min_opacity->setObjectName(QStringLiteral("range_min_opacity"));
        range_min_opacity->setEnabled(false);
        sizePolicy1.setHeightForWidth(range_min_opacity->sizePolicy().hasHeightForWidth());
        range_min_opacity->setSizePolicy(sizePolicy1);
        range_min_opacity->setMinimumSize(QSize(50, 2));

        horizontalLayout_10->addWidget(range_min_opacity);

        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_10->addWidget(label_14);

        range_max_opacity = new QLineEdit(groupBox_4);
        range_max_opacity->setObjectName(QStringLiteral("range_max_opacity"));
        range_max_opacity->setEnabled(false);
        sizePolicy1.setHeightForWidth(range_max_opacity->sizePolicy().hasHeightForWidth());
        range_max_opacity->setSizePolicy(sizePolicy1);
        range_max_opacity->setMinimumSize(QSize(50, 2));

        horizontalLayout_10->addWidget(range_max_opacity);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(2, 1);

        formLayout_2->setLayout(1, QFormLayout::FieldRole, horizontalLayout_10);


        gridLayout_2->addLayout(formLayout_2, 0, 0, 1, 1);

        gridLayout_2->setRowStretch(0, 1);

        gridLayout_5->addWidget(groupBox_4, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        resetButton = new QPushButton(TransferFuncEditor);
        resetButton->setObjectName(QStringLiteral("resetButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(resetButton->sizePolicy().hasHeightForWidth());
        resetButton->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(resetButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        applyButton = new QPushButton(TransferFuncEditor);
        applyButton->setObjectName(QStringLiteral("applyButton"));
        sizePolicy2.setHeightForWidth(applyButton->sizePolicy().hasHeightForWidth());
        applyButton->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(applyButton);

        importButton = new QPushButton(TransferFuncEditor);
        importButton->setObjectName(QStringLiteral("importButton"));

        horizontalLayout_3->addWidget(importButton);

        exportButton = new QPushButton(TransferFuncEditor);
        exportButton->setObjectName(QStringLiteral("exportButton"));

        horizontalLayout_3->addWidget(exportButton);


        gridLayout_5->addLayout(horizontalLayout_3, 3, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 2, 0, 1, 1);

        operatingModeStack = new QStackedWidget(TransferFuncEditor);
        operatingModeStack->setObjectName(QStringLiteral("operatingModeStack"));
        ClientServerMode = new QWidget();
        ClientServerMode->setObjectName(QStringLiteral("ClientServerMode"));
        gridLayout_3 = new QGridLayout(ClientServerMode);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(ClientServerMode);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_11 = new QGridLayout(groupBox);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        color_function_synth = new QLineEdit(groupBox);
        color_function_synth->setObjectName(QStringLiteral("color_function_synth"));

        horizontalLayout_2->addWidget(color_function_synth);


        gridLayout_11->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        colormapFunction = new QComboBox(groupBox);
        colormapFunction->setObjectName(QStringLiteral("colormapFunction"));

        horizontalLayout_4->addWidget(colormapFunction);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        transfer_function_var_color = new QLineEdit(groupBox);
        transfer_function_var_color->setObjectName(QStringLiteral("transfer_function_var_color"));

        horizontalLayout_4->addWidget(transfer_function_var_color);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        cfuncButton = new QPushButton(groupBox);
        cfuncButton->setObjectName(QStringLiteral("cfuncButton"));
        cfuncButton->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_4->addWidget(cfuncButton);


        gridLayout_11->addLayout(horizontalLayout_4, 3, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(ClientServerMode);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_12 = new QGridLayout(groupBox_2);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_11->addWidget(label_4);

        opacity_function_synth = new QLineEdit(groupBox_2);
        opacity_function_synth->setObjectName(QStringLiteral("opacity_function_synth"));

        horizontalLayout_11->addWidget(opacity_function_synth);


        gridLayout_12->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_5->addWidget(label_8);

        opacitymapFunction = new QComboBox(groupBox_2);
        opacitymapFunction->setObjectName(QStringLiteral("opacitymapFunction"));

        horizontalLayout_5->addWidget(opacitymapFunction);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);

        transfer_function_var_opacity = new QLineEdit(groupBox_2);
        transfer_function_var_opacity->setObjectName(QStringLiteral("transfer_function_var_opacity"));
        transfer_function_var_opacity->setFrame(true);
        transfer_function_var_opacity->setReadOnly(false);
        transfer_function_var_opacity->setClearButtonEnabled(false);

        horizontalLayout_5->addWidget(transfer_function_var_opacity);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);

        ofuncButton = new QPushButton(groupBox_2);
        ofuncButton->setObjectName(QStringLiteral("ofuncButton"));
        ofuncButton->setMinimumSize(QSize(20, 0));

        horizontalLayout_5->addWidget(ofuncButton);

        horizontalLayout_5->setStretch(3, 5);
        horizontalLayout_5->setStretch(5, 1);

        gridLayout_12->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_2, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 5, 0, 1, 2);

        groupBox_5 = new QGroupBox(ClientServerMode);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        num_transfer = new QSpinBox(groupBox_5);
        num_transfer->setObjectName(QStringLiteral("num_transfer"));
        num_transfer->setMinimum(1);
        num_transfer->setValue(5);

        gridLayout_4->addWidget(num_transfer, 0, 2, 1, 1);

        label = new QLabel(groupBox_5);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 1, 1, 1);


        gridLayout_3->addWidget(groupBox_5, 1, 0, 1, 2);

        operatingModeStack->addWidget(ClientServerMode);
        InsituMode = new QWidget();
        InsituMode->setObjectName(QStringLiteral("InsituMode"));
        gridLayout_9 = new QGridLayout(InsituMode);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        groupBox_8 = new QGroupBox(InsituMode);
        groupBox_8->setObjectName(QStringLiteral("groupBox_8"));
        gridLayout_8 = new QGridLayout(groupBox_8);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_15 = new QLabel(groupBox_8);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_8->addWidget(label_15, 0, 0, 1, 1);

        tfResolution = new QSpinBox(groupBox_8);
        tfResolution->setObjectName(QStringLiteral("tfResolution"));
        tfResolution->setMaximum(4096);
        tfResolution->setValue(256);

        gridLayout_8->addWidget(tfResolution, 0, 1, 1, 1);

        label_16 = new QLabel(groupBox_8);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_8->addWidget(label_16, 1, 0, 1, 1);

        tfSythesizer = new QLineEdit(groupBox_8);
        tfSythesizer->setObjectName(QStringLiteral("tfSythesizer"));

        gridLayout_8->addWidget(tfSythesizer, 1, 1, 1, 1);


        gridLayout_9->addWidget(groupBox_8, 0, 0, 1, 2);

        line = new QFrame(InsituMode);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_9->addWidget(line, 1, 0, 1, 2);

        frame_9 = new QFrame(InsituMode);
        frame_9->setObjectName(QStringLiteral("frame_9"));
        gridLayout_10 = new QGridLayout(frame_9);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_17 = new QLabel(frame_9);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_6->addWidget(label_17);

        tfSelection = new QComboBox(frame_9);
        tfSelection->setObjectName(QStringLiteral("tfSelection"));

        horizontalLayout_6->addWidget(tfSelection);


        gridLayout_10->addLayout(horizontalLayout_6, 0, 1, 1, 1);

        groupBox_7 = new QGroupBox(frame_9);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        gridLayout_6 = new QGridLayout(groupBox_7);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        tfOpacityEquation = new QLineEdit(groupBox_7);
        tfOpacityEquation->setObjectName(QStringLiteral("tfOpacityEquation"));

        gridLayout_6->addWidget(tfOpacityEquation, 0, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_7, 1, 2, 1, 1);

        groupBox_6 = new QGroupBox(frame_9);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        tfColorEquation = new QLineEdit(groupBox_6);
        tfColorEquation->setObjectName(QStringLiteral("tfColorEquation"));

        gridLayout_7->addWidget(tfColorEquation, 0, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_6, 0, 2, 1, 1);


        gridLayout_9->addWidget(frame_9, 2, 0, 1, 2);

        operatingModeStack->addWidget(InsituMode);

        gridLayout_5->addWidget(operatingModeStack, 0, 0, 1, 2);

        gridLayout_5->setRowStretch(2, 1);

        retranslateUi(TransferFuncEditor);

        operatingModeStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TransferFuncEditor);
    } // setupUi

    void retranslateUi(QDialog *TransferFuncEditor)
    {
        TransferFuncEditor->setWindowTitle(QApplication::translate("TransferFuncEditor", "TransferFunctionEditor - user_settings.tfe", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("TransferFuncEditor", "Color Map", Q_NULLPTR));
        colorButton->setText(QApplication::translate("TransferFuncEditor", "Edit Color Map", Q_NULLPTR));
        rangeMinLabel->setText(QApplication::translate("TransferFuncEditor", "Range Min:Max", Q_NULLPTR));
        serverSideRangeLabel->setText(QApplication::translate("TransferFuncEditor", "Server Side Range (min:max)", Q_NULLPTR));
        label_11->setText(QApplication::translate("TransferFuncEditor", ":", Q_NULLPTR));
        label_12->setText(QApplication::translate("TransferFuncEditor", ":", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("TransferFuncEditor", "Opacity Map", Q_NULLPTR));
        opacityButton->setText(QApplication::translate("TransferFuncEditor", "Edit Opacity Map", Q_NULLPTR));
        rangeOpacityLabel->setText(QApplication::translate("TransferFuncEditor", "Range Min:Max", Q_NULLPTR));
        serverSideOpacityRangeLabel->setText(QApplication::translate("TransferFuncEditor", "Server Side Range (min:max)", Q_NULLPTR));
        label_13->setText(QApplication::translate("TransferFuncEditor", ":", Q_NULLPTR));
        label_14->setText(QApplication::translate("TransferFuncEditor", ":", Q_NULLPTR));
        resetButton->setText(QApplication::translate("TransferFuncEditor", "Reset", Q_NULLPTR));
        applyButton->setText(QApplication::translate("TransferFuncEditor", "Apply", Q_NULLPTR));
        importButton->setText(QApplication::translate("TransferFuncEditor", "Import", Q_NULLPTR));
        exportButton->setText(QApplication::translate("TransferFuncEditor", "Export", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("TransferFuncEditor", "Color Function", Q_NULLPTR));
        label_3->setText(QApplication::translate("TransferFuncEditor", "Synthesizer:", Q_NULLPTR));
        color_function_synth->setText(QApplication::translate("TransferFuncEditor", "C1", Q_NULLPTR));
        label_5->setText(QApplication::translate("TransferFuncEditor", "Function:", Q_NULLPTR));
        colormapFunction->clear();
        colormapFunction->insertItems(0, QStringList()
         << QApplication::translate("TransferFuncEditor", "1", Q_NULLPTR)
         << QApplication::translate("TransferFuncEditor", "2", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("TransferFuncEditor", "=f(", Q_NULLPTR));
        transfer_function_var_color->setText(QApplication::translate("TransferFuncEditor", "q1", Q_NULLPTR));
        label_7->setText(QApplication::translate("TransferFuncEditor", ")", Q_NULLPTR));
        cfuncButton->setText(QApplication::translate("TransferFuncEditor", "...", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("TransferFuncEditor", "Opacity Function", Q_NULLPTR));
        label_4->setText(QApplication::translate("TransferFuncEditor", "Synthesizer:", Q_NULLPTR));
        opacity_function_synth->setText(QApplication::translate("TransferFuncEditor", "O1", Q_NULLPTR));
        opacity_function_synth->setPlaceholderText(QApplication::translate("TransferFuncEditor", "O1", Q_NULLPTR));
        label_8->setText(QApplication::translate("TransferFuncEditor", "Function: ", Q_NULLPTR));
        opacitymapFunction->clear();
        opacitymapFunction->insertItems(0, QStringList()
         << QApplication::translate("TransferFuncEditor", "O1", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("TransferFuncEditor", "=f(", Q_NULLPTR));
        transfer_function_var_opacity->setText(QApplication::translate("TransferFuncEditor", "q1", Q_NULLPTR));
        transfer_function_var_opacity->setPlaceholderText(QString());
        label_10->setText(QApplication::translate("TransferFuncEditor", ")", Q_NULLPTR));
        ofuncButton->setText(QApplication::translate("TransferFuncEditor", "...", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("TransferFuncEditor", "Settings", Q_NULLPTR));
        label->setText(QApplication::translate("TransferFuncEditor", "Number of Transfer Functions", Q_NULLPTR));
        groupBox_8->setTitle(QApplication::translate("TransferFuncEditor", "Transfer Function", Q_NULLPTR));
        label_15->setText(QApplication::translate("TransferFuncEditor", "Resolution", Q_NULLPTR));
        label_16->setText(QApplication::translate("TransferFuncEditor", "Synthesizer", Q_NULLPTR));
        tfSythesizer->setText(QString());
        label_17->setText(QApplication::translate("TransferFuncEditor", "Transfer Function", Q_NULLPTR));
        tfSelection->clear();
        tfSelection->insertItems(0, QStringList()
         << QApplication::translate("TransferFuncEditor", "t1", Q_NULLPTR)
        );
        groupBox_7->setTitle(QApplication::translate("TransferFuncEditor", "Opacity Map Equation", Q_NULLPTR));
        tfOpacityEquation->setText(QString());
        groupBox_6->setTitle(QApplication::translate("TransferFuncEditor", "Color Map Equation", Q_NULLPTR));
        tfColorEquation->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TransferFuncEditor: public Ui_TransferFuncEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERFUNCEDITOR_IS_H
