/********************************************************************************
** Form generated from reading UI file 'animationcontrols.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMATIONCONTROLS_H
#define UI_ANIMATIONCONTROLS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnimationControls
{
public:
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *captureEnable;
    QLabel *label_2;
    QLineEdit *imageFile;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLabel *totalKeyFrames;
    QLabel *label_7;
    QLabel *totalAnimationFrames;
    QTextEdit *textEdit;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *animationFile;
    QSpinBox *interpolation;

    void setupUi(QDockWidget *AnimationControls)
    {
        if (AnimationControls->objectName().isEmpty())
            AnimationControls->setObjectName(QStringLiteral("AnimationControls"));
        AnimationControls->resize(259, 394);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AnimationControls->sizePolicy().hasHeightForWidth());
        AnimationControls->setSizePolicy(sizePolicy);
        AnimationControls->setMinimumSize(QSize(238, 368));
        AnimationControls->setMaximumSize(QSize(524287, 524287));
        AnimationControls->setStyleSheet(QStringLiteral("QDockWidget {border:1px solid blue;}"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        verticalLayout = new QVBoxLayout(dockWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox = new QGroupBox(dockWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        captureEnable = new QComboBox(groupBox);
        captureEnable->setObjectName(QStringLiteral("captureEnable"));

        gridLayout->addWidget(captureEnable, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        imageFile = new QLineEdit(groupBox);
        imageFile->setObjectName(QStringLiteral("imageFile"));

        gridLayout->addWidget(imageFile, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(dockWidgetContents);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_6, 2, 0, 1, 2);

        totalKeyFrames = new QLabel(groupBox_2);
        totalKeyFrames->setObjectName(QStringLiteral("totalKeyFrames"));

        gridLayout_2->addWidget(totalKeyFrames, 2, 2, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_7, 3, 0, 1, 2);

        totalAnimationFrames = new QLabel(groupBox_2);
        totalAnimationFrames->setObjectName(QStringLiteral("totalAnimationFrames"));

        gridLayout_2->addWidget(totalAnimationFrames, 3, 2, 1, 1);

        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);

        gridLayout_2->addWidget(textEdit, 4, 0, 1, 3);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);

        animationFile = new QLineEdit(groupBox_2);
        animationFile->setObjectName(QStringLiteral("animationFile"));

        gridLayout_2->addWidget(animationFile, 0, 1, 1, 2);

        interpolation = new QSpinBox(groupBox_2);
        interpolation->setObjectName(QStringLiteral("interpolation"));
        interpolation->setValue(10);

        gridLayout_2->addWidget(interpolation, 1, 1, 1, 2);


        verticalLayout->addWidget(groupBox_2);

        AnimationControls->setWidget(dockWidgetContents);

        retranslateUi(AnimationControls);

        QMetaObject::connectSlotsByName(AnimationControls);
    } // setupUi

    void retranslateUi(QDockWidget *AnimationControls)
    {
        AnimationControls->setWindowTitle(QApplication::translate("AnimationControls", "Animation Controls", Q_NULLPTR));
        dockWidgetContents->setWindowTitle(QApplication::translate("AnimationControls", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AnimationControls", "Image Capture", Q_NULLPTR));
        label->setText(QApplication::translate("AnimationControls", "Capture", Q_NULLPTR));
        captureEnable->clear();
        captureEnable->insertItems(0, QStringList()
         << QApplication::translate("AnimationControls", "Off", Q_NULLPTR)
         << QApplication::translate("AnimationControls", "On", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("AnimationControls", "Image File", Q_NULLPTR));
        label_3->setText(QApplication::translate("AnimationControls", "(base name)", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("AnimationControls", "Key Frame Animation", Q_NULLPTR));
        label_6->setText(QApplication::translate("AnimationControls", "Total Key Frames:", Q_NULLPTR));
        totalKeyFrames->setText(QApplication::translate("AnimationControls", "0", Q_NULLPTR));
        label_7->setText(QApplication::translate("AnimationControls", "Total Animation Frames:", Q_NULLPTR));
        totalAnimationFrames->setText(QApplication::translate("AnimationControls", "0", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("AnimationControls", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Key Assignment</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">x: </span>Capture current view as keyframe<span style=\" font-weight:600;\">	</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin"
                        "-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">d:</span> Delete last keyframe</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">D: </span>Delete all keyframes</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">M: </span>Playback/pause keyframe animation</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">S:  </span>Save all keyframes to file</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">F: </span> Load all keyframes from file and playback</p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("AnimationControls", "Interpolation", Q_NULLPTR));
        label_4->setText(QApplication::translate("AnimationControls", "File:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AnimationControls: public Ui_AnimationControls {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMATIONCONTROLS_H
