/********************************************************************************
** Form generated from reading UI file 'sanddicekWflLX.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SANDDICEKWFLLX_H
#define SANDDICEKWFLLX_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QSpinBox *nmin;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *roll;
    QLCDNumber *numop;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpinBox *nmax;
    QSpacerItem *verticalSpacer;
    QLabel *ttl1;
    QLabel *label;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_4;
    QPushButton *clear_btn;
    QLabel *astring;
    QLabel *ttl2;
    QLineEdit *strings;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QLabel *ttl2_2;
    QSpacerItem *verticalSpacer_6;
    QLabel *coin_current;
    QSpacerItem *verticalSpacer_5;
    QPushButton *cflip_btn;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(621, 621);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../usr/share/sandpotnoodles/sanddice.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Form->setWindowIcon(icon);
        Form->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.548, y1:0, x2:0.527, y2:1, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(78, 78, 78, 255));\n"
"color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(Form);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(Form);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        nmin = new QSpinBox(tab);
        nmin->setObjectName("nmin");
        nmin->setMaximum(99999);

        gridLayout_2->addWidget(nmin, 5, 1, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(25, 16777215));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_2->addWidget(label_2, 5, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 5, 0, 1, 1);

        roll = new QPushButton(tab);
        roll->setObjectName("roll");
        roll->setMinimumSize(QSize(300, 0));
        roll->setFont(font);

        gridLayout_2->addWidget(roll, 6, 1, 1, 3);

        numop = new QLCDNumber(tab);
        numop->setObjectName("numop");
        numop->setMinimumSize(QSize(0, 141));
        numop->setMaximumSize(QSize(16777215, 141));
        numop->setDigitCount(1);
        numop->setProperty("intValue", QVariant(0));

        gridLayout_2->addWidget(numop, 1, 0, 1, 5);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 5, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 1, 1, 1);

        nmax = new QSpinBox(tab);
        nmax->setObjectName("nmax");
        nmax->setMaximum(9999999);
        nmax->setValue(6);
        nmax->setDisplayIntegerBase(10);

        gridLayout_2->addWidget(nmax, 5, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 7, 1, 1, 3);

        ttl1 = new QLabel(tab);
        ttl1->setObjectName("ttl1");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Inter Display Light")});
        font1.setPointSize(38);
        font1.setItalic(true);
        ttl1->setFont(font1);
        ttl1->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);"));

        gridLayout_2->addWidget(ttl1, 0, 0, 1, 4);

        label = new QLabel(tab);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Inter Display ExtraLight")});
        font2.setPointSize(27);
        font2.setItalic(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);"));

        gridLayout_2->addWidget(label, 4, 1, 1, 3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalSpacer_4 = new QSpacerItem(20, 90, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_4, 5, 1, 1, 1);

        clear_btn = new QPushButton(tab_2);
        clear_btn->setObjectName("clear_btn");
        clear_btn->setMinimumSize(QSize(50, 50));
        clear_btn->setMaximumSize(QSize(50, 50));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        clear_btn->setIcon(icon1);
        clear_btn->setIconSize(QSize(40, 40));

        gridLayout_3->addWidget(clear_btn, 6, 2, 1, 1);

        astring = new QLabel(tab_2);
        astring->setObjectName("astring");
        QFont font3;
        font3.setPointSize(32);
        font3.setBold(true);
        astring->setFont(font3);
        astring->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);"));
        astring->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(astring, 4, 0, 1, 3);

        ttl2 = new QLabel(tab_2);
        ttl2->setObjectName("ttl2");
        ttl2->setFont(font1);
        ttl2->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);"));

        gridLayout_3->addWidget(ttl2, 0, 0, 1, 2);

        strings = new QLineEdit(tab_2);
        strings->setObjectName("strings");
        strings->setMinimumSize(QSize(0, 50));
        strings->setMaximumSize(QSize(16777215, 50));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Adwaita Mono")});
        strings->setFont(font4);

        gridLayout_3->addWidget(strings, 6, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 90, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 3, 0, 1, 1);

        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);

        gridLayout_3->addWidget(pushButton, 7, 0, 1, 3);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName("gridLayout_4");
        ttl2_2 = new QLabel(tab_3);
        ttl2_2->setObjectName("ttl2_2");
        ttl2_2->setFont(font1);
        ttl2_2->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);"));

        gridLayout_4->addWidget(ttl2_2, 0, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 97, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_6, 4, 0, 1, 1);

        coin_current = new QLabel(tab_3);
        coin_current->setObjectName("coin_current");
        coin_current->setFont(font3);
        coin_current->setStyleSheet(QString::fromUtf8("background-color: rgba(191, 64, 64, 0);"));
        coin_current->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(coin_current, 3, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_5, 2, 0, 1, 1);

        cflip_btn = new QPushButton(tab_3);
        cflip_btn->setObjectName("cflip_btn");
        cflip_btn->setFont(font);

        gridLayout_4->addWidget(cflip_btn, 5, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(Form);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "SandDice", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "-", nullptr));
        roll->setText(QCoreApplication::translate("Form", "Roll", nullptr));
        ttl1->setText(QCoreApplication::translate("Form", "Numer Dice", nullptr));
        label->setText(QCoreApplication::translate("Form", "Range", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Form", "Numbers", nullptr));
        clear_btn->setText(QString());
        astring->setText(QCoreApplication::translate("Form", "", nullptr));
        ttl2->setText(QCoreApplication::translate("Form", "Strings", nullptr));
        strings->setText(QCoreApplication::translate("Form", "Will, Jac, George, Peter Day, Cookie", nullptr));
        pushButton->setText(QCoreApplication::translate("Form", "Pick", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Form", "Strings", nullptr));
        ttl2_2->setText(QCoreApplication::translate("Form", "Flip A Coin", nullptr));
        coin_current->setText(QString(""));
        cflip_btn->setText(QCoreApplication::translate("Form", "Flip", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Form", "Flip A Coin", nullptr));
    } // retranslateUi

};


namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SANDDICEKWFLLX_H
