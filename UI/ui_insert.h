/********************************************************************************
** Form generated from reading UI file 'insert.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_H
#define UI_INSERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Insert
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Insert)
    {
        if (Insert->objectName().isEmpty())
            Insert->setObjectName(QStringLiteral("Insert"));
        Insert->resize(300, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Insert->sizePolicy().hasHeightForWidth());
        Insert->setSizePolicy(sizePolicy);
        layoutWidget = new QWidget(Insert);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 201, 333));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(23);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit_3);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setClearButtonEnabled(true);

        verticalLayout->addWidget(lineEdit_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 20));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(Insert);
        QObject::connect(pushButton_2, SIGNAL(clicked()), Insert, SLOT(close()));

        QMetaObject::connectSlotsByName(Insert);
    } // setupUi

    void retranslateUi(QDialog *Insert)
    {
        Insert->setWindowTitle(QApplication::translate("Insert", "Dialog", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("Insert", "\347\274\226\345\217\267", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("Insert", "\344\271\246\345\220\215", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("Insert", "\344\275\234\350\200\205", Q_NULLPTR));
        lineEdit_4->setInputMask(QString());
        lineEdit_4->setPlaceholderText(QApplication::translate("Insert", "\345\207\272\347\211\210\347\244\276\345\217\267", Q_NULLPTR));
        lineEdit_5->setPlaceholderText(QApplication::translate("Insert", "\345\207\272\347\211\210\347\244\276", Q_NULLPTR));
        label->setText(QApplication::translate("Insert", "\345\272\223\345\255\230\346\200\273\346\225\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Insert", "\345\275\225\345\205\245", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Insert", "\351\207\215\347\275\256", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Insert", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Insert: public Ui_Insert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_H
