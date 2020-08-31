/********************************************************************************
** Form generated from reading UI file 'ENSDFDownloader.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENSDFDOWNLOADER_H
#define UI_ENSDFDOWNLOADER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ENSDFDownloader
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *downloadButton;
    QStackedWidget *stackedWidget;
    QWidget *buttonPage;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *localButton;
    QPushButton *setupButton;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;
    QWidget *progressPage;
    QVBoxLayout *verticalLayout_2;
    QLabel *progressLabel;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ftpCancelButton;

    void setupUi(QDialog *ENSDFDownloader)
    {
        if (ENSDFDownloader->objectName().isEmpty())
            ENSDFDownloader->setObjectName(QString::fromUtf8("ENSDFDownloader"));
        ENSDFDownloader->resize(443, 266);
        verticalLayout = new QVBoxLayout(ENSDFDownloader);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(20, 20, 20, -1);
        label = new QLabel(ENSDFDownloader);
        label->setObjectName(QString::fromUtf8("label"));
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        verticalLayout->addWidget(label);

        downloadButton = new QPushButton(ENSDFDownloader);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));
        downloadButton->setMinimumSize(QSize(0, 50));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        downloadButton->setIcon(icon);
        downloadButton->setIconSize(QSize(32, 32));
        downloadButton->setDefault(true);

        verticalLayout->addWidget(downloadButton);

        stackedWidget = new QStackedWidget(ENSDFDownloader);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        buttonPage = new QWidget();
        buttonPage->setObjectName(QString::fromUtf8("buttonPage"));
        verticalLayout_4 = new QVBoxLayout(buttonPage);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        localButton = new QPushButton(buttonPage);
        localButton->setObjectName(QString::fromUtf8("localButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/document-open-folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        localButton->setIcon(icon1);

        horizontalLayout->addWidget(localButton);

        setupButton = new QPushButton(buttonPage);
        setupButton->setObjectName(QString::fromUtf8("setupButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        setupButton->setIcon(icon2);

        horizontalLayout->addWidget(setupButton);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        closeButton = new QPushButton(buttonPage);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/dialog-close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon3);

        horizontalLayout_2->addWidget(closeButton);


        verticalLayout_4->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(buttonPage);
        progressPage = new QWidget();
        progressPage->setObjectName(QString::fromUtf8("progressPage"));
        verticalLayout_2 = new QVBoxLayout(progressPage);
        verticalLayout_2->setSpacing(8);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        progressLabel = new QLabel(progressPage);
        progressLabel->setObjectName(QString::fromUtf8("progressLabel"));

        verticalLayout_2->addWidget(progressLabel);

        progressBar = new QProgressBar(progressPage);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        verticalLayout_2->addWidget(progressBar);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ftpCancelButton = new QPushButton(progressPage);
        ftpCancelButton->setObjectName(QString::fromUtf8("ftpCancelButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ftpCancelButton->sizePolicy().hasHeightForWidth());
        ftpCancelButton->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/dialog-cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        ftpCancelButton->setIcon(icon4);

        horizontalLayout_3->addWidget(ftpCancelButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        stackedWidget->addWidget(progressPage);

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(ENSDFDownloader);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ENSDFDownloader);
    } // setupUi

    void retranslateUi(QDialog *ENSDFDownloader)
    {
        ENSDFDownloader->setWindowTitle(QApplication::translate("ENSDFDownloader", "Database Download", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ENSDFDownloader", "<html><head/><body><p><span style=\" font-style:italic;\">Nuclei</span> uses the <a href=\"http://www.nndc.bnl.gov/ensdf/\"><span style=\" text-decoration: underline; color:#0057ae;\">ENSDF database</span></a> as source for nuclear decay information. Please press the download button to automatically retrieve the necessary files.</p><p>If you already have a copy of the ENSDF files and do not want to download it again you can also select the appropriate local folder.</p></body></html>", 0, QApplication::UnicodeUTF8));
        downloadButton->setText(QApplication::translate("ENSDFDownloader", "Automatically Download Database", 0, QApplication::UnicodeUTF8));
        localButton->setText(QApplication::translate("ENSDFDownloader", "Select Local Copy", 0, QApplication::UnicodeUTF8));
        setupButton->setText(QApplication::translate("ENSDFDownloader", "Adjust Download Settings", 0, QApplication::UnicodeUTF8));
        closeButton->setText(QApplication::translate("ENSDFDownloader", "Close", 0, QApplication::UnicodeUTF8));
        progressLabel->setText(QString());
        ftpCancelButton->setText(QApplication::translate("ENSDFDownloader", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ENSDFDownloader: public Ui_ENSDFDownloader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENSDFDOWNLOADER_H
