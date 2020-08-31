/********************************************************************************
** Form generated from reading UI file 'UpdateCheckDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATECHECKDIALOG_H
#define UI_UPDATECHECKDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UpdateCheckDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *changelog;
    QHBoxLayout *horizontalLayout;
    QPushButton *goToWebsiteButton;
    QPushButton *ignoreButton;

    void setupUi(QDialog *UpdateCheckDialog)
    {
        if (UpdateCheckDialog->objectName().isEmpty())
            UpdateCheckDialog->setObjectName(QString::fromUtf8("UpdateCheckDialog"));
        UpdateCheckDialog->resize(428, 468);
        verticalLayout = new QVBoxLayout(UpdateCheckDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(UpdateCheckDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        groupBox = new QGroupBox(UpdateCheckDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        changelog = new QTextEdit(groupBox);
        changelog->setObjectName(QString::fromUtf8("changelog"));
        changelog->setUndoRedoEnabled(false);
        changelog->setReadOnly(true);
        changelog->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse|Qt::TextBrowserInteraction|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(changelog);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        goToWebsiteButton = new QPushButton(UpdateCheckDialog);
        goToWebsiteButton->setObjectName(QString::fromUtf8("goToWebsiteButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/download16.png"), QSize(), QIcon::Normal, QIcon::Off);
        goToWebsiteButton->setIcon(icon);

        horizontalLayout->addWidget(goToWebsiteButton);

        ignoreButton = new QPushButton(UpdateCheckDialog);
        ignoreButton->setObjectName(QString::fromUtf8("ignoreButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/dialog-cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        ignoreButton->setIcon(icon1);

        horizontalLayout->addWidget(ignoreButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UpdateCheckDialog);
        QObject::connect(goToWebsiteButton, SIGNAL(clicked()), UpdateCheckDialog, SLOT(accept()));
        QObject::connect(ignoreButton, SIGNAL(clicked()), UpdateCheckDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UpdateCheckDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateCheckDialog)
    {
        UpdateCheckDialog->setWindowTitle(QApplication::translate("UpdateCheckDialog", "New Version Found", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("UpdateCheckDialog", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600;\">A new version of </span><span style=\" font-weight:600; font-style:italic;\">Nuclei</span><span style=\" font-weight:600;\"> is available!</span></p><p align=\"center\">Go to the Website to download the newest version.</p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("UpdateCheckDialog", "New Features", 0, QApplication::UnicodeUTF8));
        goToWebsiteButton->setText(QApplication::translate("UpdateCheckDialog", "Go to Website", 0, QApplication::UnicodeUTF8));
        ignoreButton->setText(QApplication::translate("UpdateCheckDialog", "Ignore", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UpdateCheckDialog: public Ui_UpdateCheckDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATECHECKDIALOG_H
