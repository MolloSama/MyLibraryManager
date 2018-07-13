/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_top;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QCheckBox *checkBox_3;
    QLabel *label_2;
    QLabel *label_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label;
    QPushButton *pushButton_9;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFrame *frame;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_16;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_18;
    QSpacerItem *verticalSpacer_2;
    QTableView *tableView;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_17;
    QSpacerItem *verticalSpacer_3;
    QTableView *tableView_2;
    QWidget *tab_3;
    QTableView *tableView_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_14;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_15;
    QWidget *tab_4;
    QHBoxLayout *horizontalLayout_6;
    QTableView *tableView_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1220, 689);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame_top = new QFrame(centralWidget);
        frame_top->setObjectName(QStringLiteral("frame_top"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_top->sizePolicy().hasHeightForWidth());
        frame_top->setSizePolicy(sizePolicy);
        frame_top->setMinimumSize(QSize(0, 80));
        frame_top->setFrameShape(QFrame::StyledPanel);
        frame_top->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_top);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(810, 10, 363, 34));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setClearButtonEnabled(true);

        horizontalLayout_4->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setEchoMode(QLineEdit::Password);
        lineEdit_5->setClearButtonEnabled(true);

        horizontalLayout_4->addWidget(lineEdit_5);

        checkBox_3 = new QCheckBox(layoutWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));

        horizontalLayout_4->addWidget(checkBox_3);

        label_2 = new QLabel(frame_top);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 10, 181, 71));
        label_2->setStyleSheet(QString::fromUtf8("font: 22pt \"\351\273\221\344\275\223\";"));
        label_2->setTextFormat(Qt::AutoText);
        label_2->setIndent(0);
        label_5 = new QLabel(frame_top);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(true);
        label_5->setGeometry(QRect(0, 0, 1201, 80));
        label_5->setFrameShadow(QFrame::Plain);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/pics/head.png")));
        pushButton_10 = new QPushButton(frame_top);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(892, 53, 75, 23));
        pushButton_11 = new QPushButton(frame_top);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(973, 53, 75, 23));
        label = new QLabel(frame_top);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1070, 50, 36, 31));
        pushButton_9 = new QPushButton(frame_top);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setEnabled(true);
        pushButton_9->setGeometry(QRect(811, 53, 75, 23));
        label_5->raise();
        label_2->raise();
        layoutWidget->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        pushButton_11->raise();
        label->raise();

        verticalLayout->addWidget(frame_top);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        frame = new QFrame(tab);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(990, 10, 200, 542));
        frame->setMinimumSize(QSize(200, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 161, 508));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(24);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFrame(true);
        lineEdit->setEchoMode(QLineEdit::Normal);
        lineEdit->setDragEnabled(true);
        lineEdit->setClearButtonEnabled(true);

        verticalLayout_3->addWidget(lineEdit);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_3->addWidget(pushButton);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setClearButtonEnabled(true);

        verticalLayout_3->addWidget(lineEdit_2);

        pushButton_16 = new QPushButton(layoutWidget1);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));

        verticalLayout_3->addWidget(pushButton_16);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_3->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_3->addWidget(pushButton_6);

        pushButton_18 = new QPushButton(layoutWidget1);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));

        verticalLayout_3->addWidget(pushButton_18);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 971, 541));
        tableView->setAutoScrollMargin(16);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableView->setTextElideMode(Qt::ElideRight);
        tableView->setSortingEnabled(true);
        tableView->setCornerButtonEnabled(true);
        tableView->horizontalHeader()->setDefaultSectionSize(120);
        tableView->horizontalHeader()->setMinimumSectionSize(40);
        tableView->verticalHeader()->setDefaultSectionSize(40);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setEnabled(true);
        horizontalLayout = new QHBoxLayout(tab_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame_2 = new QFrame(tab_2);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(200, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        layoutWidget_2 = new QWidget(frame_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 20, 161, 307));
        verticalLayout_4 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_4->setSpacing(24);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_3 = new QLineEdit(layoutWidget_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setFrame(true);
        lineEdit_3->setEchoMode(QLineEdit::Normal);
        lineEdit_3->setDragEnabled(true);
        lineEdit_3->setClearButtonEnabled(true);

        verticalLayout_4->addWidget(lineEdit_3);

        pushButton_8 = new QPushButton(layoutWidget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_4->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(layoutWidget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_4->addWidget(pushButton_7);

        pushButton_12 = new QPushButton(layoutWidget_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        verticalLayout_4->addWidget(pushButton_12);

        pushButton_13 = new QPushButton(layoutWidget_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));

        verticalLayout_4->addWidget(pushButton_13);

        pushButton_17 = new QPushButton(layoutWidget_2);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));

        verticalLayout_4->addWidget(pushButton_17);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(frame_2);

        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_2->setAlternatingRowColors(true);
        tableView_2->setSortingEnabled(true);
        tableView_2->horizontalHeader()->setDefaultSectionSize(150);
        tableView_2->verticalHeader()->setDefaultSectionSize(40);

        horizontalLayout->addWidget(tableView_2);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(20, 50, 1011, 331));
        tableView_3->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_3->setAlternatingRowColors(true);
        tableView_3->setSortingEnabled(true);
        tableView_3->horizontalHeader()->setDefaultSectionSize(150);
        tableView_3->verticalHeader()->setDefaultSectionSize(40);
        tableView_3->verticalHeader()->setStretchLastSection(false);
        layoutWidget2 = new QWidget(tab_3);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 10, 291, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_5->addWidget(label_4);

        layoutWidget3 = new QWidget(tab_3);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 400, 261, 31));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_14 = new QPushButton(layoutWidget3);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));

        horizontalLayout_7->addWidget(pushButton_14);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        pushButton_15 = new QPushButton(layoutWidget3);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));

        horizontalLayout_7->addWidget(pushButton_15);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        horizontalLayout_6 = new QHBoxLayout(tab_4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        tableView_4 = new QTableView(tab_4);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView_4->setAlternatingRowColors(true);
        tableView_4->setSortingEnabled(true);
        tableView_4->horizontalHeader()->setDefaultSectionSize(150);
        tableView_4->verticalHeader()->setDefaultSectionSize(40);

        horizontalLayout_6->addWidget(tableView_4);

        tabWidget->addTab(tab_4, QString());

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        tabWidget->raise();
        frame_top->raise();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        lineEdit_4->setPlaceholderText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        lineEdit_5->setPlaceholderText(QApplication::translate("MainWindow", "\345\257\206\347\240\201", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("MainWindow", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\233\276\344\271\246\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        label_5->setText(QString());
        pushButton_10->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "\346\263\250\351\224\200", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\234\252\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\344\271\246\345\220\215", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "\344\275\234\350\200\205", Q_NULLPTR));
        pushButton_16->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\200\237\351\230\205", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\345\275\225\345\205\245", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200\344\277\256\346\224\271", Q_NULLPTR));
        pushButton_18->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236\351\246\226\351\241\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\233\276\344\271\246\344\277\241\346\201\257", Q_NULLPTR));
        lineEdit_3->setInputMask(QString());
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QApplication::translate("MainWindow", "\347\224\250\346\210\267ID", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244\344\277\256\346\224\271/\345\210\267\346\226\260", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200\344\277\256\346\224\271", Q_NULLPTR));
        pushButton_17->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236\351\246\226\351\241\265", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\351\202\256\347\256\261", Q_NULLPTR));
        pushButton_14->setText(QApplication::translate("MainWindow", "\347\273\255\345\200\237", Q_NULLPTR));
        pushButton_15->setText(QApplication::translate("MainWindow", "\350\277\230\344\271\246", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\345\200\237\351\230\205\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
