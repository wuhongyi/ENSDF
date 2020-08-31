/********************************************************************************
** Form generated from reading UI file 'SearchDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include "HalfLifeSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *daughterGroupBox;
    QGridLayout *gridLayout;
    QLabel *minALabel;
    QSpinBox *minA;
    QSpinBox *maxA;
    QLabel *maxALabel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QLabel *parentHalfLifeLabel;
    QCheckBox *minParentHalfLifeCheck;
    HalfLifeSpinBox *minParentHalfLife;
    QCheckBox *maxParentHalfLifeCheck;
    HalfLifeSpinBox *maxParentHalfLife;
    QGroupBox *gammaGroupBox;
    QFormLayout *formLayout_2;
    QCheckBox *minIntensCheck;
    QDoubleSpinBox *minIntens;
    QGroupBox *intermediateGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *intHalfLifeLabel;
    QCheckBox *minIntHalfLifeCheck;
    HalfLifeSpinBox *minIntHalfLife;
    QCheckBox *maxIntHalfLifeCheck;
    HalfLifeSpinBox *maxIntHalfLife;
    QFrame *line;
    QCheckBox *muValCheck;
    QDoubleSpinBox *muVal;
    QCheckBox *muValSkip;
    QCheckBox *qValCheck;
    QDoubleSpinBox *qVal;
    QCheckBox *qValSkip;
    QHBoxLayout *horizontalLayout;
    QRadioButton *muQAnd;
    QRadioButton *muQOr;
    QGroupBox *anisotropyGroupBox;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *a42;
    QDoubleSpinBox *a24;
    QDoubleSpinBox *a22;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *anisotropyAnd;
    QRadioButton *anisotropyOr;
    QCheckBox *anisotropySkip;
    QCheckBox *a22Check;
    QLabel *a44Label;
    QLabel *a22Label;
    QDoubleSpinBox *a44;
    QCheckBox *a44Check;
    QLabel *a24Label;
    QFrame *line_3;
    QCheckBox *a24Check;
    QCheckBox *a42Check;
    QLabel *a42Label;
    QSpacerItem *verticalSpacer;
    QFrame *line_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName(QString::fromUtf8("SearchDialog"));
        SearchDialog->resize(580, 725);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        SearchDialog->setWindowIcon(icon);
        SearchDialog->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"    font-weight: bold;\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(SearchDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        daughterGroupBox = new QGroupBox(SearchDialog);
        daughterGroupBox->setObjectName(QString::fromUtf8("daughterGroupBox"));
        gridLayout = new QGridLayout(daughterGroupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        minALabel = new QLabel(daughterGroupBox);
        minALabel->setObjectName(QString::fromUtf8("minALabel"));
        minALabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(minALabel, 0, 0, 1, 1);

        minA = new QSpinBox(daughterGroupBox);
        minA->setObjectName(QString::fromUtf8("minA"));
        minA->setMinimum(1);
        minA->setMaximum(299);
        minA->setValue(1);

        gridLayout->addWidget(minA, 0, 1, 1, 1);

        maxA = new QSpinBox(daughterGroupBox);
        maxA->setObjectName(QString::fromUtf8("maxA"));
        maxA->setMinimum(1);
        maxA->setMaximum(299);
        maxA->setValue(299);

        gridLayout->addWidget(maxA, 0, 3, 1, 1);

        maxALabel = new QLabel(daughterGroupBox);
        maxALabel->setObjectName(QString::fromUtf8("maxALabel"));
        maxALabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(maxALabel, 0, 2, 1, 1);


        verticalLayout->addWidget(daughterGroupBox);

        groupBox = new QGroupBox(SearchDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        parentHalfLifeLabel = new QLabel(groupBox);
        parentHalfLifeLabel->setObjectName(QString::fromUtf8("parentHalfLifeLabel"));
        parentHalfLifeLabel->setMinimumSize(QSize(100, 0));
        parentHalfLifeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(parentHalfLifeLabel, 0, 0, 1, 1);

        minParentHalfLifeCheck = new QCheckBox(groupBox);
        minParentHalfLifeCheck->setObjectName(QString::fromUtf8("minParentHalfLifeCheck"));

        gridLayout_4->addWidget(minParentHalfLifeCheck, 0, 1, 1, 1);

        minParentHalfLife = new HalfLifeSpinBox(groupBox);
        minParentHalfLife->setObjectName(QString::fromUtf8("minParentHalfLife"));
        minParentHalfLife->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(minParentHalfLife->sizePolicy().hasHeightForWidth());
        minParentHalfLife->setSizePolicy(sizePolicy);
        minParentHalfLife->setDecimals(8);
        minParentHalfLife->setMaximum(1e+09);
        minParentHalfLife->setValue(86400);

        gridLayout_4->addWidget(minParentHalfLife, 0, 2, 1, 1);

        maxParentHalfLifeCheck = new QCheckBox(groupBox);
        maxParentHalfLifeCheck->setObjectName(QString::fromUtf8("maxParentHalfLifeCheck"));

        gridLayout_4->addWidget(maxParentHalfLifeCheck, 1, 1, 1, 1);

        maxParentHalfLife = new HalfLifeSpinBox(groupBox);
        maxParentHalfLife->setObjectName(QString::fromUtf8("maxParentHalfLife"));
        maxParentHalfLife->setEnabled(false);
        sizePolicy.setHeightForWidth(maxParentHalfLife->sizePolicy().hasHeightForWidth());
        maxParentHalfLife->setSizePolicy(sizePolicy);
        maxParentHalfLife->setDecimals(8);
        maxParentHalfLife->setMaximum(1e+09);
        maxParentHalfLife->setValue(2.592e+06);

        gridLayout_4->addWidget(maxParentHalfLife, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        gammaGroupBox = new QGroupBox(SearchDialog);
        gammaGroupBox->setObjectName(QString::fromUtf8("gammaGroupBox"));
        formLayout_2 = new QFormLayout(gammaGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        minIntensCheck = new QCheckBox(gammaGroupBox);
        minIntensCheck->setObjectName(QString::fromUtf8("minIntensCheck"));
        minIntensCheck->setChecked(true);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, minIntensCheck);

        minIntens = new QDoubleSpinBox(gammaGroupBox);
        minIntens->setObjectName(QString::fromUtf8("minIntens"));
        minIntens->setSuffix(QString::fromUtf8(" %"));
        minIntens->setMaximum(100);
        minIntens->setValue(5);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, minIntens);


        verticalLayout->addWidget(gammaGroupBox);

        intermediateGroupBox = new QGroupBox(SearchDialog);
        intermediateGroupBox->setObjectName(QString::fromUtf8("intermediateGroupBox"));
        gridLayout_2 = new QGridLayout(intermediateGroupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        intHalfLifeLabel = new QLabel(intermediateGroupBox);
        intHalfLifeLabel->setObjectName(QString::fromUtf8("intHalfLifeLabel"));
        intHalfLifeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(intHalfLifeLabel, 0, 0, 1, 1);

        minIntHalfLifeCheck = new QCheckBox(intermediateGroupBox);
        minIntHalfLifeCheck->setObjectName(QString::fromUtf8("minIntHalfLifeCheck"));
        minIntHalfLifeCheck->setChecked(true);

        gridLayout_2->addWidget(minIntHalfLifeCheck, 0, 1, 1, 1);

        minIntHalfLife = new HalfLifeSpinBox(intermediateGroupBox);
        minIntHalfLife->setObjectName(QString::fromUtf8("minIntHalfLife"));
        sizePolicy.setHeightForWidth(minIntHalfLife->sizePolicy().hasHeightForWidth());
        minIntHalfLife->setSizePolicy(sizePolicy);
        minIntHalfLife->setDecimals(8);
        minIntHalfLife->setMaximum(1e+09);
        minIntHalfLife->setValue(1e-06);

        gridLayout_2->addWidget(minIntHalfLife, 0, 2, 1, 1);

        maxIntHalfLifeCheck = new QCheckBox(intermediateGroupBox);
        maxIntHalfLifeCheck->setObjectName(QString::fromUtf8("maxIntHalfLifeCheck"));

        gridLayout_2->addWidget(maxIntHalfLifeCheck, 1, 1, 1, 1);

        maxIntHalfLife = new HalfLifeSpinBox(intermediateGroupBox);
        maxIntHalfLife->setObjectName(QString::fromUtf8("maxIntHalfLife"));
        maxIntHalfLife->setEnabled(false);
        sizePolicy.setHeightForWidth(maxIntHalfLife->sizePolicy().hasHeightForWidth());
        maxIntHalfLife->setSizePolicy(sizePolicy);
        maxIntHalfLife->setDecimals(8);
        maxIntHalfLife->setValue(1e-05);

        gridLayout_2->addWidget(maxIntHalfLife, 1, 2, 1, 1);

        line = new QFrame(intermediateGroupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 2, 0, 1, 3);

        muValCheck = new QCheckBox(intermediateGroupBox);
        muValCheck->setObjectName(QString::fromUtf8("muValCheck"));

        gridLayout_2->addWidget(muValCheck, 3, 0, 1, 1);

        muVal = new QDoubleSpinBox(intermediateGroupBox);
        muVal->setObjectName(QString::fromUtf8("muVal"));
        muVal->setEnabled(false);
        muVal->setDecimals(3);
        muVal->setSingleStep(0.1);

        gridLayout_2->addWidget(muVal, 3, 1, 1, 2);

        muValSkip = new QCheckBox(intermediateGroupBox);
        muValSkip->setObjectName(QString::fromUtf8("muValSkip"));
        muValSkip->setEnabled(false);

        gridLayout_2->addWidget(muValSkip, 3, 3, 1, 1);

        qValCheck = new QCheckBox(intermediateGroupBox);
        qValCheck->setObjectName(QString::fromUtf8("qValCheck"));

        gridLayout_2->addWidget(qValCheck, 4, 0, 1, 1);

        qVal = new QDoubleSpinBox(intermediateGroupBox);
        qVal->setObjectName(QString::fromUtf8("qVal"));
        qVal->setEnabled(false);
        qVal->setDecimals(3);
        qVal->setSingleStep(0.1);

        gridLayout_2->addWidget(qVal, 4, 1, 1, 2);

        qValSkip = new QCheckBox(intermediateGroupBox);
        qValSkip->setObjectName(QString::fromUtf8("qValSkip"));
        qValSkip->setEnabled(false);

        gridLayout_2->addWidget(qValSkip, 4, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        muQAnd = new QRadioButton(intermediateGroupBox);
        muQAnd->setObjectName(QString::fromUtf8("muQAnd"));
        muQAnd->setEnabled(false);
        muQAnd->setChecked(true);

        horizontalLayout->addWidget(muQAnd);

        muQOr = new QRadioButton(intermediateGroupBox);
        muQOr->setObjectName(QString::fromUtf8("muQOr"));
        muQOr->setEnabled(false);

        horizontalLayout->addWidget(muQOr);


        gridLayout_2->addLayout(horizontalLayout, 5, 0, 1, 4);


        verticalLayout->addWidget(intermediateGroupBox);

        anisotropyGroupBox = new QGroupBox(SearchDialog);
        anisotropyGroupBox->setObjectName(QString::fromUtf8("anisotropyGroupBox"));
        gridLayout_3 = new QGridLayout(anisotropyGroupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        a42 = new QDoubleSpinBox(anisotropyGroupBox);
        a42->setObjectName(QString::fromUtf8("a42"));
        a42->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(a42->sizePolicy().hasHeightForWidth());
        a42->setSizePolicy(sizePolicy1);
        a42->setDecimals(4);
        a42->setMinimum(-100);
        a42->setMaximum(100);
        a42->setSingleStep(0.01);
        a42->setValue(0.05);

        gridLayout_3->addWidget(a42, 1, 6, 1, 1);

        a24 = new QDoubleSpinBox(anisotropyGroupBox);
        a24->setObjectName(QString::fromUtf8("a24"));
        a24->setEnabled(false);
        sizePolicy1.setHeightForWidth(a24->sizePolicy().hasHeightForWidth());
        a24->setSizePolicy(sizePolicy1);
        a24->setDecimals(4);
        a24->setMinimum(-100);
        a24->setMaximum(100);
        a24->setSingleStep(0.01);
        a24->setValue(0.05);

        gridLayout_3->addWidget(a24, 0, 6, 1, 1);

        a22 = new QDoubleSpinBox(anisotropyGroupBox);
        a22->setObjectName(QString::fromUtf8("a22"));
        sizePolicy1.setHeightForWidth(a22->sizePolicy().hasHeightForWidth());
        a22->setSizePolicy(sizePolicy1);
        a22->setDecimals(4);
        a22->setMinimum(-100);
        a22->setMaximum(100);
        a22->setSingleStep(0.01);
        a22->setValue(0.05);

        gridLayout_3->addWidget(a22, 0, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        anisotropyAnd = new QRadioButton(anisotropyGroupBox);
        anisotropyAnd->setObjectName(QString::fromUtf8("anisotropyAnd"));
        anisotropyAnd->setEnabled(false);
        anisotropyAnd->setChecked(true);

        horizontalLayout_4->addWidget(anisotropyAnd);

        anisotropyOr = new QRadioButton(anisotropyGroupBox);
        anisotropyOr->setObjectName(QString::fromUtf8("anisotropyOr"));
        anisotropyOr->setEnabled(false);

        horizontalLayout_4->addWidget(anisotropyOr);


        gridLayout_3->addLayout(horizontalLayout_4, 3, 0, 1, 8);

        anisotropySkip = new QCheckBox(anisotropyGroupBox);
        anisotropySkip->setObjectName(QString::fromUtf8("anisotropySkip"));

        gridLayout_3->addWidget(anisotropySkip, 2, 0, 1, 8);

        a22Check = new QCheckBox(anisotropyGroupBox);
        a22Check->setObjectName(QString::fromUtf8("a22Check"));
        a22Check->setChecked(true);

        gridLayout_3->addWidget(a22Check, 0, 0, 1, 1);

        a44Label = new QLabel(anisotropyGroupBox);
        a44Label->setObjectName(QString::fromUtf8("a44Label"));

        gridLayout_3->addWidget(a44Label, 1, 1, 1, 1);

        a22Label = new QLabel(anisotropyGroupBox);
        a22Label->setObjectName(QString::fromUtf8("a22Label"));

        gridLayout_3->addWidget(a22Label, 0, 1, 1, 1);

        a44 = new QDoubleSpinBox(anisotropyGroupBox);
        a44->setObjectName(QString::fromUtf8("a44"));
        a44->setEnabled(false);
        sizePolicy1.setHeightForWidth(a44->sizePolicy().hasHeightForWidth());
        a44->setSizePolicy(sizePolicy1);
        a44->setDecimals(4);
        a44->setMinimum(-100);
        a44->setMaximum(100);
        a44->setSingleStep(0.01);
        a44->setValue(0.05);

        gridLayout_3->addWidget(a44, 1, 2, 1, 1);

        a44Check = new QCheckBox(anisotropyGroupBox);
        a44Check->setObjectName(QString::fromUtf8("a44Check"));

        gridLayout_3->addWidget(a44Check, 1, 0, 1, 1);

        a24Label = new QLabel(anisotropyGroupBox);
        a24Label->setObjectName(QString::fromUtf8("a24Label"));

        gridLayout_3->addWidget(a24Label, 0, 5, 1, 1);

        line_3 = new QFrame(anisotropyGroupBox);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 0, 3, 2, 1);

        a24Check = new QCheckBox(anisotropyGroupBox);
        a24Check->setObjectName(QString::fromUtf8("a24Check"));

        gridLayout_3->addWidget(a24Check, 0, 4, 1, 1);

        a42Check = new QCheckBox(anisotropyGroupBox);
        a42Check->setObjectName(QString::fromUtf8("a42Check"));

        gridLayout_3->addWidget(a42Check, 1, 4, 1, 1);

        a42Label = new QLabel(anisotropyGroupBox);
        a42Label->setObjectName(QString::fromUtf8("a42Label"));

        gridLayout_3->addWidget(a42Label, 1, 5, 1, 1);


        verticalLayout->addWidget(anisotropyGroupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        line_2 = new QFrame(SearchDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        buttonBox = new QDialogButtonBox(SearchDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#ifndef QT_NO_SHORTCUT
        minALabel->setBuddy(minA);
        maxALabel->setBuddy(maxA);
        a44Label->setBuddy(a44);
        a22Label->setBuddy(a22);
        a24Label->setBuddy(a24);
        a42Label->setBuddy(a42);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(minA, maxA);
        QWidget::setTabOrder(maxA, minParentHalfLifeCheck);
        QWidget::setTabOrder(minParentHalfLifeCheck, minParentHalfLife);
        QWidget::setTabOrder(minParentHalfLife, maxParentHalfLifeCheck);
        QWidget::setTabOrder(maxParentHalfLifeCheck, maxParentHalfLife);
        QWidget::setTabOrder(maxParentHalfLife, minIntensCheck);
        QWidget::setTabOrder(minIntensCheck, minIntens);
        QWidget::setTabOrder(minIntens, minIntHalfLifeCheck);
        QWidget::setTabOrder(minIntHalfLifeCheck, minIntHalfLife);
        QWidget::setTabOrder(minIntHalfLife, maxIntHalfLifeCheck);
        QWidget::setTabOrder(maxIntHalfLifeCheck, maxIntHalfLife);
        QWidget::setTabOrder(maxIntHalfLife, muValCheck);
        QWidget::setTabOrder(muValCheck, muVal);
        QWidget::setTabOrder(muVal, qValCheck);
        QWidget::setTabOrder(qValCheck, qVal);
        QWidget::setTabOrder(qVal, a22Check);
        QWidget::setTabOrder(a22Check, a22);
        QWidget::setTabOrder(a22, a44Check);
        QWidget::setTabOrder(a44Check, a44);
        QWidget::setTabOrder(a44, buttonBox);

        retranslateUi(SearchDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SearchDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SearchDialog, SLOT(reject()));
        QObject::connect(minParentHalfLifeCheck, SIGNAL(toggled(bool)), minParentHalfLife, SLOT(setEnabled(bool)));
        QObject::connect(maxParentHalfLifeCheck, SIGNAL(toggled(bool)), maxParentHalfLife, SLOT(setEnabled(bool)));
        QObject::connect(minIntensCheck, SIGNAL(toggled(bool)), minIntens, SLOT(setEnabled(bool)));
        QObject::connect(minIntHalfLifeCheck, SIGNAL(toggled(bool)), minIntHalfLife, SLOT(setEnabled(bool)));
        QObject::connect(maxIntHalfLifeCheck, SIGNAL(toggled(bool)), maxIntHalfLife, SLOT(setEnabled(bool)));
        QObject::connect(muValCheck, SIGNAL(toggled(bool)), muVal, SLOT(setEnabled(bool)));
        QObject::connect(qValCheck, SIGNAL(toggled(bool)), qVal, SLOT(setEnabled(bool)));
        QObject::connect(a22Check, SIGNAL(toggled(bool)), a22, SLOT(setEnabled(bool)));
        QObject::connect(a24Check, SIGNAL(toggled(bool)), a24, SLOT(setEnabled(bool)));
        QObject::connect(a42Check, SIGNAL(toggled(bool)), a42, SLOT(setEnabled(bool)));
        QObject::connect(a44Check, SIGNAL(toggled(bool)), a44, SLOT(setEnabled(bool)));
        QObject::connect(muValCheck, SIGNAL(toggled(bool)), muValSkip, SLOT(setEnabled(bool)));
        QObject::connect(qValCheck, SIGNAL(toggled(bool)), qValSkip, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QApplication::translate("SearchDialog", "Search Decay Cascades", 0, QApplication::UnicodeUTF8));
        daughterGroupBox->setTitle(QApplication::translate("SearchDialog", "Daughter Mass Range", 0, QApplication::UnicodeUTF8));
        minALabel->setText(QApplication::translate("SearchDialog", "Minimal A:", 0, QApplication::UnicodeUTF8));
        maxALabel->setText(QApplication::translate("SearchDialog", "Maximal A:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("SearchDialog", "Parent Constraints", 0, QApplication::UnicodeUTF8));
        parentHalfLifeLabel->setText(QApplication::translate("SearchDialog", "Half Life:", 0, QApplication::UnicodeUTF8));
        minParentHalfLifeCheck->setText(QApplication::translate("SearchDialog", "Min.", 0, QApplication::UnicodeUTF8));
        maxParentHalfLifeCheck->setText(QApplication::translate("SearchDialog", "Max.", 0, QApplication::UnicodeUTF8));
        gammaGroupBox->setTitle(QApplication::translate("SearchDialog", "Gamma Constraints", 0, QApplication::UnicodeUTF8));
        minIntensCheck->setText(QApplication::translate("SearchDialog", "Minimal Gamma Intensity:", 0, QApplication::UnicodeUTF8));
        intermediateGroupBox->setTitle(QApplication::translate("SearchDialog", "Intermediate Level Constraints", 0, QApplication::UnicodeUTF8));
        intHalfLifeLabel->setText(QApplication::translate("SearchDialog", "Half Life:", 0, QApplication::UnicodeUTF8));
        minIntHalfLifeCheck->setText(QApplication::translate("SearchDialog", "Min.", 0, QApplication::UnicodeUTF8));
        maxIntHalfLifeCheck->setText(QApplication::translate("SearchDialog", "Max.", 0, QApplication::UnicodeUTF8));
        muValCheck->setText(QApplication::translate("SearchDialog", "Minimal \302\265 Value:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        muValSkip->setToolTip(QApplication::translate("SearchDialog", "Skip check of this condition if value is unknown", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        muValSkip->setText(QApplication::translate("SearchDialog", "Skip if unknown", 0, QApplication::UnicodeUTF8));
        qValCheck->setText(QApplication::translate("SearchDialog", "Minimal Q Value:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        qValSkip->setToolTip(QApplication::translate("SearchDialog", "Skip check of this condition if value is unknown", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        qValSkip->setText(QApplication::translate("SearchDialog", "Skip if unknown", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        muQAnd->setToolTip(QApplication::translate("SearchDialog", "If checked only cascades fulfilling the \302\265 and Q constraints simultaneously will be added to the search results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        muQAnd->setText(QApplication::translate("SearchDialog", "Require \302\265 and Q conditions (AND)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        muQOr->setToolTip(QApplication::translate("SearchDialog", "If checked all cascades fulfilling the \302\265 or Q constraints or both will be added to the search results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        muQOr->setText(QApplication::translate("SearchDialog", "Require only one condition (OR)", 0, QApplication::UnicodeUTF8));
        anisotropyGroupBox->setTitle(QApplication::translate("SearchDialog", "Minimal Angular Correlation Coefficients", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        anisotropyAnd->setToolTip(QApplication::translate("SearchDialog", "<html><head/><body><p>If checked only cascades fulfilling all enabled angular correlation coefficient constraints simultaneously will be added to the search result</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        anisotropyAnd->setText(QApplication::translate("SearchDialog", "Require ALL conditions (AND)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        anisotropyOr->setToolTip(QApplication::translate("SearchDialog", "<html><head/><body><p>If checked all cascades fulfilling at least one of the angular correlation coefficient constraints will be added to the search result</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        anisotropyOr->setText(QApplication::translate("SearchDialog", "Require one condition (OR)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        anisotropySkip->setToolTip(QApplication::translate("SearchDialog", "If \316\264 or spin values are unknown and this box is checked the cascades will be added to the search results despite it is not possible to test the A<sub>kk</sub> constraints.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        anisotropySkip->setText(QApplication::translate("SearchDialog", "Skip checking these conditions if angular correlation coefficients are unknown", 0, QApplication::UnicodeUTF8));
        a22Check->setText(QString());
        a44Label->setText(QApplication::translate("SearchDialog", "A<sub>44</sub>", 0, QApplication::UnicodeUTF8));
        a22Label->setText(QApplication::translate("SearchDialog", "A<sub>22</sub>", 0, QApplication::UnicodeUTF8));
        a44Check->setText(QString());
        a24Label->setText(QApplication::translate("SearchDialog", "A<sub>24</sub>", 0, QApplication::UnicodeUTF8));
        a24Check->setText(QString());
        a42Check->setText(QString());
        a42Label->setText(QApplication::translate("SearchDialog", "A<sub>42</sub>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
