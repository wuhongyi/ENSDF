/********************************************************************************
** Form generated from reading UI file 'ENSDFDownloaderSettings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENSDFDOWNLOADERSETTINGS_H
#define UI_ENSDFDOWNLOADERSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ENSDFDownloaderSettings
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *hostEdit;
    QLabel *label_2;
    QLineEdit *portEdit;
    QGroupBox *transferGroupBox;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *passiveRadio;
    QRadioButton *activeRadio;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *ENSDFDownloaderSettings)
    {
        if (ENSDFDownloaderSettings->objectName().isEmpty())
            ENSDFDownloaderSettings->setObjectName(QString::fromUtf8("ENSDFDownloaderSettings"));
        ENSDFDownloaderSettings->resize(366, 161);
        verticalLayout = new QVBoxLayout(ENSDFDownloaderSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(ENSDFDownloaderSettings);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        hostEdit = new QLineEdit(groupBox);
        hostEdit->setObjectName(QString::fromUtf8("hostEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(hostEdit->sizePolicy().hasHeightForWidth());
        hostEdit->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(hostEdit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        portEdit = new QLineEdit(groupBox);
        portEdit->setObjectName(QString::fromUtf8("portEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(portEdit->sizePolicy().hasHeightForWidth());
        portEdit->setSizePolicy(sizePolicy1);
        portEdit->setMaxLength(5);

        horizontalLayout->addWidget(portEdit);


        verticalLayout->addWidget(groupBox);

        transferGroupBox = new QGroupBox(ENSDFDownloaderSettings);
        transferGroupBox->setObjectName(QString::fromUtf8("transferGroupBox"));
        horizontalLayout_2 = new QHBoxLayout(transferGroupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        passiveRadio = new QRadioButton(transferGroupBox);
        passiveRadio->setObjectName(QString::fromUtf8("passiveRadio"));
        passiveRadio->setChecked(true);

        horizontalLayout_2->addWidget(passiveRadio);

        activeRadio = new QRadioButton(transferGroupBox);
        activeRadio->setObjectName(QString::fromUtf8("activeRadio"));

        horizontalLayout_2->addWidget(activeRadio);


        verticalLayout->addWidget(transferGroupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        okButton = new QPushButton(ENSDFDownloaderSettings);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/dialog-ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        okButton->setIcon(icon);

        horizontalLayout_3->addWidget(okButton);

        cancelButton = new QPushButton(ENSDFDownloaderSettings);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        sizePolicy2.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy2);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/dialog-cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton->setIcon(icon1);

        horizontalLayout_3->addWidget(cancelButton);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(ENSDFDownloaderSettings);

        QMetaObject::connectSlotsByName(ENSDFDownloaderSettings);
    } // setupUi

    void retranslateUi(QDialog *ENSDFDownloaderSettings)
    {
        ENSDFDownloaderSettings->setWindowTitle(QApplication::translate("ENSDFDownloaderSettings", "FTP Setup", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ENSDFDownloaderSettings", "Proxy Server", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ENSDFDownloaderSettings", "Host:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ENSDFDownloaderSettings", "Port:", 0, QApplication::UnicodeUTF8));
        transferGroupBox->setTitle(QApplication::translate("ENSDFDownloaderSettings", "Transfer Mode", 0, QApplication::UnicodeUTF8));
        passiveRadio->setText(QApplication::translate("ENSDFDownloaderSettings", "Passive", 0, QApplication::UnicodeUTF8));
        activeRadio->setText(QApplication::translate("ENSDFDownloaderSettings", "Active", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("ENSDFDownloaderSettings", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("ENSDFDownloaderSettings", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ENSDFDownloaderSettings: public Ui_ENSDFDownloaderSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENSDFDOWNLOADERSETTINGS_H
