/********************************************************************************
** Form generated from reading UI file 'functionlisteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONLISTEDITOR_H
#define UI_FUNCTIONLISTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FunctionListEditor
{
public:
    QGridLayout *gridLayout;
    QLabel *example;
    QListWidget *functionList;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *selectedName;
    QLabel *label_2;
    QLineEdit *selectedFunction;
    QLabel *label_3;
    QPushButton *setButton;
    QPushButton *cancelButton;
    QPushButton *saveButton;
    QPushButton *selectButton;
    QLabel *messageLabel;

    void setupUi(QDialog *FunctionListEditor)
    {
        if (FunctionListEditor->objectName().isEmpty())
            FunctionListEditor->setObjectName(QStringLiteral("FunctionListEditor"));
        FunctionListEditor->resize(314, 249);
        FunctionListEditor->setMinimumSize(QSize(0, 5));
        gridLayout = new QGridLayout(FunctionListEditor);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        example = new QLabel(FunctionListEditor);
        example->setObjectName(QStringLiteral("example"));

        gridLayout->addWidget(example, 0, 0, 1, 2);

        functionList = new QListWidget(FunctionListEditor);
        functionList->setObjectName(QStringLiteral("functionList"));
        functionList->setAlternatingRowColors(true);

        gridLayout->addWidget(functionList, 1, 0, 1, 3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(FunctionListEditor);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        selectedName = new QLineEdit(FunctionListEditor);
        selectedName->setObjectName(QStringLiteral("selectedName"));
        selectedName->setEnabled(false);

        horizontalLayout->addWidget(selectedName);

        label_2 = new QLabel(FunctionListEditor);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        selectedFunction = new QLineEdit(FunctionListEditor);
        selectedFunction->setObjectName(QStringLiteral("selectedFunction"));

        horizontalLayout->addWidget(selectedFunction);

        label_3 = new QLabel(FunctionListEditor);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        setButton = new QPushButton(FunctionListEditor);
        setButton->setObjectName(QStringLiteral("setButton"));

        horizontalLayout->addWidget(setButton);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(3, 8);

        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 3);

        cancelButton = new QPushButton(FunctionListEditor);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        gridLayout->addWidget(cancelButton, 3, 0, 1, 1);

        saveButton = new QPushButton(FunctionListEditor);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        gridLayout->addWidget(saveButton, 3, 1, 1, 1);

        selectButton = new QPushButton(FunctionListEditor);
        selectButton->setObjectName(QStringLiteral("selectButton"));

        gridLayout->addWidget(selectButton, 3, 2, 1, 1);

        messageLabel = new QLabel(FunctionListEditor);
        messageLabel->setObjectName(QStringLiteral("messageLabel"));

        gridLayout->addWidget(messageLabel, 4, 0, 1, 3);


        retranslateUi(FunctionListEditor);

        QMetaObject::connectSlotsByName(FunctionListEditor);
    } // setupUi

    void retranslateUi(QDialog *FunctionListEditor)
    {
        FunctionListEditor->setWindowTitle(QApplication::translate("FunctionListEditor", "Function List Editor", Q_NULLPTR));
        example->setText(QApplication::translate("FunctionListEditor", "Color Function List [ ex: c1-99 = q1 + q2*X ]", Q_NULLPTR));
        label->setText(QApplication::translate("FunctionListEditor", "Function: ", Q_NULLPTR));
        selectedName->setText(QString());
        label_2->setText(QApplication::translate("FunctionListEditor", "=f(", Q_NULLPTR));
        selectedFunction->setText(QString());
        label_3->setText(QApplication::translate("FunctionListEditor", ")", Q_NULLPTR));
        setButton->setText(QApplication::translate("FunctionListEditor", "Set", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("FunctionListEditor", "Cancel", Q_NULLPTR));
        saveButton->setText(QApplication::translate("FunctionListEditor", "Save", Q_NULLPTR));
        selectButton->setText(QApplication::translate("FunctionListEditor", "Select", Q_NULLPTR));
        messageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FunctionListEditor: public Ui_FunctionListEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONLISTEDITOR_H
