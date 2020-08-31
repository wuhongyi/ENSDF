/********************************************************************************
** Form generated from reading UI file 'PreferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *fontGroupBox;
    QFormLayout *formLayout;
    QLabel *fontFamilyLabel;
    QFontComboBox *fontFamily;
    QLabel *fontSizeLabel;
    QSpinBox *fontSize;
    QGroupBox *matchingGroupBox;
    QFormLayout *formLayout_2;
    QLabel *levelDiffLabel;
    QDoubleSpinBox *levelDiff;
    QLabel *gammaDiffLabel;
    QDoubleSpinBox *gammaDiff;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *ensdfVersionLabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *resetCacheButton;
    QPushButton *resetDatabaseButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(436, 362);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        PreferencesDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        fontGroupBox = new QGroupBox(PreferencesDialog);
        fontGroupBox->setObjectName(QString::fromUtf8("fontGroupBox"));
        formLayout = new QFormLayout(fontGroupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        fontFamilyLabel = new QLabel(fontGroupBox);
        fontFamilyLabel->setObjectName(QString::fromUtf8("fontFamilyLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, fontFamilyLabel);

        fontFamily = new QFontComboBox(fontGroupBox);
        fontFamily->setObjectName(QString::fromUtf8("fontFamily"));

        formLayout->setWidget(0, QFormLayout::FieldRole, fontFamily);

        fontSizeLabel = new QLabel(fontGroupBox);
        fontSizeLabel->setObjectName(QString::fromUtf8("fontSizeLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, fontSizeLabel);

        fontSize = new QSpinBox(fontGroupBox);
        fontSize->setObjectName(QString::fromUtf8("fontSize"));
        fontSize->setMinimum(1);
        fontSize->setValue(14);

        formLayout->setWidget(1, QFormLayout::FieldRole, fontSize);


        verticalLayout->addWidget(fontGroupBox);

        matchingGroupBox = new QGroupBox(PreferencesDialog);
        matchingGroupBox->setObjectName(QString::fromUtf8("matchingGroupBox"));
        formLayout_2 = new QFormLayout(matchingGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        levelDiffLabel = new QLabel(matchingGroupBox);
        levelDiffLabel->setObjectName(QString::fromUtf8("levelDiffLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, levelDiffLabel);

        levelDiff = new QDoubleSpinBox(matchingGroupBox);
        levelDiff->setObjectName(QString::fromUtf8("levelDiff"));
        levelDiff->setMaximum(100);
        levelDiff->setValue(1);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, levelDiff);

        gammaDiffLabel = new QLabel(matchingGroupBox);
        gammaDiffLabel->setObjectName(QString::fromUtf8("gammaDiffLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, gammaDiffLabel);

        gammaDiff = new QDoubleSpinBox(matchingGroupBox);
        gammaDiff->setObjectName(QString::fromUtf8("gammaDiff"));
        gammaDiff->setMaximum(100);
        gammaDiff->setValue(1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, gammaDiff);


        verticalLayout->addWidget(matchingGroupBox);

        groupBox = new QGroupBox(PreferencesDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ensdfVersionLabel = new QLabel(groupBox);
        ensdfVersionLabel->setObjectName(QString::fromUtf8("ensdfVersionLabel"));

        verticalLayout_2->addWidget(ensdfVersionLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        resetCacheButton = new QPushButton(groupBox);
        resetCacheButton->setObjectName(QString::fromUtf8("resetCacheButton"));

        horizontalLayout->addWidget(resetCacheButton);

        resetDatabaseButton = new QPushButton(groupBox);
        resetDatabaseButton->setObjectName(QString::fromUtf8("resetDatabaseButton"));

        horizontalLayout->addWidget(resetDatabaseButton);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences", 0, QApplication::UnicodeUTF8));
        fontGroupBox->setTitle(QApplication::translate("PreferencesDialog", "Font Settings", 0, QApplication::UnicodeUTF8));
        fontFamilyLabel->setText(QApplication::translate("PreferencesDialog", "Font Family:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fontSizeLabel->setToolTip(QApplication::translate("PreferencesDialog", "Primary font size in units of the primary line width", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        fontSizeLabel->setText(QApplication::translate("PreferencesDialog", "Font Size:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fontSize->setToolTip(QApplication::translate("PreferencesDialog", "Primary font size in units of the primary line width", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        matchingGroupBox->setTitle(QApplication::translate("PreferencesDialog", "Energy Matching", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        levelDiffLabel->setToolTip(QApplication::translate("PreferencesDialog", "Max. difference between level energies in decay records and adopted levels records", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        levelDiffLabel->setText(QApplication::translate("PreferencesDialog", "Max. Level Energy Difference:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        levelDiff->setToolTip(QApplication::translate("PreferencesDialog", "Max. difference between level energies in decay records and adopted levels records", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        levelDiff->setSuffix(QApplication::translate("PreferencesDialog", "\342\200\260", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gammaDiffLabel->setToolTip(QApplication::translate("PreferencesDialog", "Max. difference between gamma energies in decay records and adopted levels records", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        gammaDiffLabel->setText(QApplication::translate("PreferencesDialog", "Max. Gamma Energy Difference:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        gammaDiff->setToolTip(QApplication::translate("PreferencesDialog", "Max. difference between gamma energies in decay records and adopted levels records", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        gammaDiff->setSuffix(QApplication::translate("PreferencesDialog", "\342\200\260", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("PreferencesDialog", "Reset Data Sources", 0, QApplication::UnicodeUTF8));
        ensdfVersionLabel->setText(QString());
        resetCacheButton->setText(QApplication::translate("PreferencesDialog", "Reset Cache && Restart", 0, QApplication::UnicodeUTF8));
        resetDatabaseButton->setText(QApplication::translate("PreferencesDialog", "Reset Database && Restart", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
