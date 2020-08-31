/********************************************************************************
** Form generated from reading UI file 'Nuclei.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUCLEI_H
#define UI_NUCLEI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "LineEdit.h"
#include "TreeView.h"

QT_BEGIN_NAMESPACE

class Ui_NucleiMainWindow
{
public:
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionShow_all;
    QAction *actionOriginal_Size;
    QAction *actionAbout;
    QAction *actionLinear;
    QAction *actionLogarithmic;
    QAction *actionSVG_Export;
    QAction *actionPDF_Export;
    QAction *actionPreferences;
    QAction *actionFind_Decay;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *decayCascadeTab;
    QVBoxLayout *verticalLayout_4;
    QGraphicsView *decayView;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *anisotropyLabel;
    QFrame *line;
    QLabel *a22Label;
    QLabel *a22;
    QLabel *a24Label;
    QLabel *a24;
    QLabel *a42Label;
    QLabel *a42;
    QLabel *a44Label;
    QLabel *a44;
    QWidget *energySpectrumTab;
    QVBoxLayout *energySpectrumLayout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *decaySelectorDock;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QTabWidget *selectionTabWidget;
    QWidget *allDecayTab;
    QGridLayout *gridLayout_2;
    LineEdit *decayFilterLineEdit;
    QToolButton *decayTreeExpandButton;
    QToolButton *decayTreeCollapseButton;
    TreeView *decayTreeView;
    QWidget *searchResultTab;
    QGridLayout *gridLayout;
    LineEdit *searchFilterLineEdit;
    QToolButton *searchTreeCollapseButton;
    QToolButton *searchTreeExpandButton;
    TreeView *searchTreeView;
    QDockWidget *decayInfoDock;
    QWidget *dockWidgetContents;
    QFormLayout *formLayout;
    QLabel *startEnergyLabel;
    QLabel *startSpinLabel;
    QLabel *popGammaLabel;
    QFrame *line_4;
    QLabel *popEnergyLabel;
    QLabel *popEnergy;
    QLabel *popIntensityLabel;
    QLabel *popIntensity;
    QLabel *popMultipolarityLabel;
    QLabel *popMultipolarity;
    QLabel *popMixingLabel;
    QLabel *popMixing;
    QSpacerItem *verticalSpacer;
    QLabel *intermedLevelLabel;
    QFrame *line_3;
    QLabel *intEnergyLabel;
    QLabel *intEnergy;
    QLabel *intHalfLifeLabel;
    QLabel *intHalfLife;
    QLabel *intSpin;
    QSpacerItem *verticalSpacer_2;
    QLabel *depopGammaLabel;
    QFrame *line_5;
    QLabel *depopEnergyLabel;
    QLabel *depopEnergy;
    QLabel *depopIntensityLabel;
    QLabel *depopIntensity;
    QLabel *depopMultipolarityLabel;
    QLabel *depopMultipolarity;
    QLabel *depopMixing;
    QFrame *line_6;
    QLabel *startLevelLabel;
    QSpacerItem *verticalSpacer_3;
    QLabel *endLevelLabel;
    QSpacerItem *verticalSpacer_4;
    QFrame *line_7;
    QLabel *endEnergyLabel;
    QLabel *endSpinLabel;
    QLabel *endEnergy;
    QLabel *endSpin;
    QLabel *startEnergy;
    QLabel *startSpin;
    QLabel *intSpinLabel;
    QLabel *depopMixingLabel;
    QLabel *intMuLabel;
    QLabel *intQLabel;
    QLabel *intMu;
    QLabel *intQ;
    QToolBar *energySpectrumBar;
    QToolBar *extrasBar;

    void setupUi(QMainWindow *NucleiMainWindow)
    {
        if (NucleiMainWindow->objectName().isEmpty())
            NucleiMainWindow->setObjectName(QString::fromUtf8("NucleiMainWindow"));
        NucleiMainWindow->resize(1200, 884);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/nuclei.png"), QSize(), QIcon::Normal, QIcon::Off);
        NucleiMainWindow->setWindowIcon(icon);
        NucleiMainWindow->setDockNestingEnabled(true);
        actionZoom_In = new QAction(NucleiMainWindow);
        actionZoom_In->setObjectName(QString::fromUtf8("actionZoom_In"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/toolbar/zoom-in.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_In->setIcon(icon1);
        actionZoom_Out = new QAction(NucleiMainWindow);
        actionZoom_Out->setObjectName(QString::fromUtf8("actionZoom_Out"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/toolbar/zoom-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_Out->setIcon(icon2);
        actionShow_all = new QAction(NucleiMainWindow);
        actionShow_all->setObjectName(QString::fromUtf8("actionShow_all"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/toolbar/zoom-fit-best.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShow_all->setIcon(icon3);
        actionOriginal_Size = new QAction(NucleiMainWindow);
        actionOriginal_Size->setObjectName(QString::fromUtf8("actionOriginal_Size"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/toolbar/zoom-original.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOriginal_Size->setIcon(icon4);
        actionAbout = new QAction(NucleiMainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/toolbar/help-about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon5);
        actionLinear = new QAction(NucleiMainWindow);
        actionLinear->setObjectName(QString::fromUtf8("actionLinear"));
        actionLinear->setCheckable(true);
        actionLinear->setChecked(true);
        actionLogarithmic = new QAction(NucleiMainWindow);
        actionLogarithmic->setObjectName(QString::fromUtf8("actionLogarithmic"));
        actionLogarithmic->setCheckable(true);
        actionSVG_Export = new QAction(NucleiMainWindow);
        actionSVG_Export->setObjectName(QString::fromUtf8("actionSVG_Export"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/toolbar/image-svg+xml.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSVG_Export->setIcon(icon6);
        actionPDF_Export = new QAction(NucleiMainWindow);
        actionPDF_Export->setObjectName(QString::fromUtf8("actionPDF_Export"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/toolbar/application-pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPDF_Export->setIcon(icon7);
        actionPreferences = new QAction(NucleiMainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/toolbar/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPreferences->setIcon(icon8);
        actionFind_Decay = new QAction(NucleiMainWindow);
        actionFind_Decay->setObjectName(QString::fromUtf8("actionFind_Decay"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/toolbar/edit-find.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFind_Decay->setIcon(icon9);
        centralWidget = new QWidget(NucleiMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        decayCascadeTab = new QWidget();
        decayCascadeTab->setObjectName(QString::fromUtf8("decayCascadeTab"));
        verticalLayout_4 = new QVBoxLayout(decayCascadeTab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(4, 4, 4, 4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        decayView = new QGraphicsView(decayCascadeTab);
        decayView->setObjectName(QString::fromUtf8("decayView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(decayView->sizePolicy().hasHeightForWidth());
        decayView->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(decayView);

        frame = new QFrame(decayCascadeTab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        anisotropyLabel = new QLabel(frame);
        anisotropyLabel->setObjectName(QString::fromUtf8("anisotropyLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        anisotropyLabel->setFont(font);
        anisotropyLabel->setWordWrap(true);

        horizontalLayout->addWidget(anisotropyLabel);

        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        a22Label = new QLabel(frame);
        a22Label->setObjectName(QString::fromUtf8("a22Label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(a22Label->sizePolicy().hasHeightForWidth());
        a22Label->setSizePolicy(sizePolicy1);
        a22Label->setFont(font);
        a22Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(a22Label);

        a22 = new QLabel(frame);
        a22->setObjectName(QString::fromUtf8("a22"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        a22->setFont(font1);
        a22->setWordWrap(true);
        a22->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(a22);

        a24Label = new QLabel(frame);
        a24Label->setObjectName(QString::fromUtf8("a24Label"));
        sizePolicy1.setHeightForWidth(a24Label->sizePolicy().hasHeightForWidth());
        a24Label->setSizePolicy(sizePolicy1);
        a24Label->setMinimumSize(QSize(50, 0));
        a24Label->setFont(font);
        a24Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(a24Label);

        a24 = new QLabel(frame);
        a24->setObjectName(QString::fromUtf8("a24"));
        a24->setFont(font1);
        a24->setWordWrap(true);
        a24->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(a24);

        a42Label = new QLabel(frame);
        a42Label->setObjectName(QString::fromUtf8("a42Label"));
        sizePolicy1.setHeightForWidth(a42Label->sizePolicy().hasHeightForWidth());
        a42Label->setSizePolicy(sizePolicy1);
        a42Label->setMinimumSize(QSize(50, 0));
        a42Label->setFont(font);
        a42Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(a42Label);

        a42 = new QLabel(frame);
        a42->setObjectName(QString::fromUtf8("a42"));
        a42->setFont(font1);
        a42->setWordWrap(true);
        a42->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(a42);

        a44Label = new QLabel(frame);
        a44Label->setObjectName(QString::fromUtf8("a44Label"));
        sizePolicy1.setHeightForWidth(a44Label->sizePolicy().hasHeightForWidth());
        a44Label->setSizePolicy(sizePolicy1);
        a44Label->setMinimumSize(QSize(50, 0));
        a44Label->setFont(font);
        a44Label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(a44Label);

        a44 = new QLabel(frame);
        a44->setObjectName(QString::fromUtf8("a44"));
        a44->setFont(font1);
        a44->setWordWrap(true);
        a44->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(a44);


        verticalLayout_4->addWidget(frame);

        tabWidget->addTab(decayCascadeTab, QString());
        energySpectrumTab = new QWidget();
        energySpectrumTab->setObjectName(QString::fromUtf8("energySpectrumTab"));
        energySpectrumLayout = new QVBoxLayout(energySpectrumTab);
        energySpectrumLayout->setSpacing(6);
        energySpectrumLayout->setContentsMargins(11, 11, 11, 11);
        energySpectrumLayout->setObjectName(QString::fromUtf8("energySpectrumLayout"));
        tabWidget->addTab(energySpectrumTab, QString());

        verticalLayout_3->addWidget(tabWidget);

        NucleiMainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(NucleiMainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setIconSize(QSize(32, 32));
        NucleiMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NucleiMainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        NucleiMainWindow->setStatusBar(statusBar);
        decaySelectorDock = new QDockWidget(NucleiMainWindow);
        decaySelectorDock->setObjectName(QString::fromUtf8("decaySelectorDock"));
        decaySelectorDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        selectionTabWidget = new QTabWidget(dockWidgetContents_2);
        selectionTabWidget->setObjectName(QString::fromUtf8("selectionTabWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(selectionTabWidget->sizePolicy().hasHeightForWidth());
        selectionTabWidget->setSizePolicy(sizePolicy2);
        allDecayTab = new QWidget();
        allDecayTab->setObjectName(QString::fromUtf8("allDecayTab"));
        gridLayout_2 = new QGridLayout(allDecayTab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(1, 1, 1, 1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(1);
        decayFilterLineEdit = new LineEdit(allDecayTab);
        decayFilterLineEdit->setObjectName(QString::fromUtf8("decayFilterLineEdit"));

        gridLayout_2->addWidget(decayFilterLineEdit, 0, 0, 1, 1);

        decayTreeExpandButton = new QToolButton(allDecayTab);
        decayTreeExpandButton->setObjectName(QString::fromUtf8("decayTreeExpandButton"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/format-indent-more.png"), QSize(), QIcon::Normal, QIcon::Off);
        decayTreeExpandButton->setIcon(icon10);
        decayTreeExpandButton->setAutoRaise(true);

        gridLayout_2->addWidget(decayTreeExpandButton, 0, 2, 1, 1);

        decayTreeCollapseButton = new QToolButton(allDecayTab);
        decayTreeCollapseButton->setObjectName(QString::fromUtf8("decayTreeCollapseButton"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/format-justify-fill.png"), QSize(), QIcon::Normal, QIcon::Off);
        decayTreeCollapseButton->setIcon(icon11);
        decayTreeCollapseButton->setAutoRaise(true);

        gridLayout_2->addWidget(decayTreeCollapseButton, 0, 1, 1, 1);

        decayTreeView = new TreeView(allDecayTab);
        decayTreeView->setObjectName(QString::fromUtf8("decayTreeView"));
        decayTreeView->setAlternatingRowColors(true);
        decayTreeView->setAllColumnsShowFocus(true);
        decayTreeView->header()->setVisible(false);

        gridLayout_2->addWidget(decayTreeView, 1, 0, 1, 3);

        selectionTabWidget->addTab(allDecayTab, QString());
        searchResultTab = new QWidget();
        searchResultTab->setObjectName(QString::fromUtf8("searchResultTab"));
        gridLayout = new QGridLayout(searchResultTab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(1, 1, 1, 1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(1);
        searchFilterLineEdit = new LineEdit(searchResultTab);
        searchFilterLineEdit->setObjectName(QString::fromUtf8("searchFilterLineEdit"));

        gridLayout->addWidget(searchFilterLineEdit, 0, 0, 1, 1);

        searchTreeCollapseButton = new QToolButton(searchResultTab);
        searchTreeCollapseButton->setObjectName(QString::fromUtf8("searchTreeCollapseButton"));
        searchTreeCollapseButton->setIcon(icon11);
        searchTreeCollapseButton->setAutoRaise(true);

        gridLayout->addWidget(searchTreeCollapseButton, 0, 1, 1, 1);

        searchTreeExpandButton = new QToolButton(searchResultTab);
        searchTreeExpandButton->setObjectName(QString::fromUtf8("searchTreeExpandButton"));
        searchTreeExpandButton->setIcon(icon10);
        searchTreeExpandButton->setAutoRaise(true);

        gridLayout->addWidget(searchTreeExpandButton, 0, 2, 1, 1);

        searchTreeView = new TreeView(searchResultTab);
        searchTreeView->setObjectName(QString::fromUtf8("searchTreeView"));
        searchTreeView->setAlternatingRowColors(true);
        searchTreeView->setAllColumnsShowFocus(true);
        searchTreeView->header()->setVisible(false);

        gridLayout->addWidget(searchTreeView, 1, 0, 1, 3);

        selectionTabWidget->addTab(searchResultTab, QString());

        verticalLayout->addWidget(selectionTabWidget);

        decaySelectorDock->setWidget(dockWidgetContents_2);
        NucleiMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), decaySelectorDock);
        decayInfoDock = new QDockWidget(NucleiMainWindow);
        decayInfoDock->setObjectName(QString::fromUtf8("decayInfoDock"));
        decayInfoDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        formLayout = new QFormLayout(dockWidgetContents);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setHorizontalSpacing(15);
        startEnergyLabel = new QLabel(dockWidgetContents);
        startEnergyLabel->setObjectName(QString::fromUtf8("startEnergyLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, startEnergyLabel);

        startSpinLabel = new QLabel(dockWidgetContents);
        startSpinLabel->setObjectName(QString::fromUtf8("startSpinLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, startSpinLabel);

        popGammaLabel = new QLabel(dockWidgetContents);
        popGammaLabel->setObjectName(QString::fromUtf8("popGammaLabel"));
        popGammaLabel->setFont(font);
        popGammaLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(5, QFormLayout::SpanningRole, popGammaLabel);

        line_4 = new QFrame(dockWidgetContents);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(7, QFormLayout::SpanningRole, line_4);

        popEnergyLabel = new QLabel(dockWidgetContents);
        popEnergyLabel->setObjectName(QString::fromUtf8("popEnergyLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, popEnergyLabel);

        popEnergy = new QLabel(dockWidgetContents);
        popEnergy->setObjectName(QString::fromUtf8("popEnergy"));

        formLayout->setWidget(8, QFormLayout::FieldRole, popEnergy);

        popIntensityLabel = new QLabel(dockWidgetContents);
        popIntensityLabel->setObjectName(QString::fromUtf8("popIntensityLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, popIntensityLabel);

        popIntensity = new QLabel(dockWidgetContents);
        popIntensity->setObjectName(QString::fromUtf8("popIntensity"));

        formLayout->setWidget(9, QFormLayout::FieldRole, popIntensity);

        popMultipolarityLabel = new QLabel(dockWidgetContents);
        popMultipolarityLabel->setObjectName(QString::fromUtf8("popMultipolarityLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, popMultipolarityLabel);

        popMultipolarity = new QLabel(dockWidgetContents);
        popMultipolarity->setObjectName(QString::fromUtf8("popMultipolarity"));

        formLayout->setWidget(10, QFormLayout::FieldRole, popMultipolarity);

        popMixingLabel = new QLabel(dockWidgetContents);
        popMixingLabel->setObjectName(QString::fromUtf8("popMixingLabel"));

        formLayout->setWidget(11, QFormLayout::LabelRole, popMixingLabel);

        popMixing = new QLabel(dockWidgetContents);
        popMixing->setObjectName(QString::fromUtf8("popMixing"));

        formLayout->setWidget(11, QFormLayout::FieldRole, popMixing);

        verticalSpacer = new QSpacerItem(0, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(12, QFormLayout::SpanningRole, verticalSpacer);

        intermedLevelLabel = new QLabel(dockWidgetContents);
        intermedLevelLabel->setObjectName(QString::fromUtf8("intermedLevelLabel"));
        intermedLevelLabel->setFont(font);
        intermedLevelLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(13, QFormLayout::SpanningRole, intermedLevelLabel);

        line_3 = new QFrame(dockWidgetContents);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(14, QFormLayout::SpanningRole, line_3);

        intEnergyLabel = new QLabel(dockWidgetContents);
        intEnergyLabel->setObjectName(QString::fromUtf8("intEnergyLabel"));

        formLayout->setWidget(15, QFormLayout::LabelRole, intEnergyLabel);

        intEnergy = new QLabel(dockWidgetContents);
        intEnergy->setObjectName(QString::fromUtf8("intEnergy"));

        formLayout->setWidget(15, QFormLayout::FieldRole, intEnergy);

        intHalfLifeLabel = new QLabel(dockWidgetContents);
        intHalfLifeLabel->setObjectName(QString::fromUtf8("intHalfLifeLabel"));

        formLayout->setWidget(16, QFormLayout::LabelRole, intHalfLifeLabel);

        intHalfLife = new QLabel(dockWidgetContents);
        intHalfLife->setObjectName(QString::fromUtf8("intHalfLife"));

        formLayout->setWidget(16, QFormLayout::FieldRole, intHalfLife);

        intSpin = new QLabel(dockWidgetContents);
        intSpin->setObjectName(QString::fromUtf8("intSpin"));

        formLayout->setWidget(17, QFormLayout::FieldRole, intSpin);

        verticalSpacer_2 = new QSpacerItem(0, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(20, QFormLayout::SpanningRole, verticalSpacer_2);

        depopGammaLabel = new QLabel(dockWidgetContents);
        depopGammaLabel->setObjectName(QString::fromUtf8("depopGammaLabel"));
        depopGammaLabel->setFont(font);
        depopGammaLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(21, QFormLayout::SpanningRole, depopGammaLabel);

        line_5 = new QFrame(dockWidgetContents);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(22, QFormLayout::SpanningRole, line_5);

        depopEnergyLabel = new QLabel(dockWidgetContents);
        depopEnergyLabel->setObjectName(QString::fromUtf8("depopEnergyLabel"));

        formLayout->setWidget(23, QFormLayout::LabelRole, depopEnergyLabel);

        depopEnergy = new QLabel(dockWidgetContents);
        depopEnergy->setObjectName(QString::fromUtf8("depopEnergy"));

        formLayout->setWidget(23, QFormLayout::FieldRole, depopEnergy);

        depopIntensityLabel = new QLabel(dockWidgetContents);
        depopIntensityLabel->setObjectName(QString::fromUtf8("depopIntensityLabel"));

        formLayout->setWidget(24, QFormLayout::LabelRole, depopIntensityLabel);

        depopIntensity = new QLabel(dockWidgetContents);
        depopIntensity->setObjectName(QString::fromUtf8("depopIntensity"));

        formLayout->setWidget(24, QFormLayout::FieldRole, depopIntensity);

        depopMultipolarityLabel = new QLabel(dockWidgetContents);
        depopMultipolarityLabel->setObjectName(QString::fromUtf8("depopMultipolarityLabel"));

        formLayout->setWidget(25, QFormLayout::LabelRole, depopMultipolarityLabel);

        depopMultipolarity = new QLabel(dockWidgetContents);
        depopMultipolarity->setObjectName(QString::fromUtf8("depopMultipolarity"));

        formLayout->setWidget(25, QFormLayout::FieldRole, depopMultipolarity);

        depopMixing = new QLabel(dockWidgetContents);
        depopMixing->setObjectName(QString::fromUtf8("depopMixing"));

        formLayout->setWidget(27, QFormLayout::FieldRole, depopMixing);

        line_6 = new QFrame(dockWidgetContents);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(1, QFormLayout::SpanningRole, line_6);

        startLevelLabel = new QLabel(dockWidgetContents);
        startLevelLabel->setObjectName(QString::fromUtf8("startLevelLabel"));
        startLevelLabel->setFont(font);
        startLevelLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::SpanningRole, startLevelLabel);

        verticalSpacer_3 = new QSpacerItem(0, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(4, QFormLayout::SpanningRole, verticalSpacer_3);

        endLevelLabel = new QLabel(dockWidgetContents);
        endLevelLabel->setObjectName(QString::fromUtf8("endLevelLabel"));
        endLevelLabel->setFont(font);
        endLevelLabel->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(29, QFormLayout::SpanningRole, endLevelLabel);

        verticalSpacer_4 = new QSpacerItem(0, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(28, QFormLayout::SpanningRole, verticalSpacer_4);

        line_7 = new QFrame(dockWidgetContents);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(30, QFormLayout::SpanningRole, line_7);

        endEnergyLabel = new QLabel(dockWidgetContents);
        endEnergyLabel->setObjectName(QString::fromUtf8("endEnergyLabel"));

        formLayout->setWidget(31, QFormLayout::LabelRole, endEnergyLabel);

        endSpinLabel = new QLabel(dockWidgetContents);
        endSpinLabel->setObjectName(QString::fromUtf8("endSpinLabel"));

        formLayout->setWidget(32, QFormLayout::LabelRole, endSpinLabel);

        endEnergy = new QLabel(dockWidgetContents);
        endEnergy->setObjectName(QString::fromUtf8("endEnergy"));

        formLayout->setWidget(31, QFormLayout::FieldRole, endEnergy);

        endSpin = new QLabel(dockWidgetContents);
        endSpin->setObjectName(QString::fromUtf8("endSpin"));

        formLayout->setWidget(32, QFormLayout::FieldRole, endSpin);

        startEnergy = new QLabel(dockWidgetContents);
        startEnergy->setObjectName(QString::fromUtf8("startEnergy"));

        formLayout->setWidget(2, QFormLayout::FieldRole, startEnergy);

        startSpin = new QLabel(dockWidgetContents);
        startSpin->setObjectName(QString::fromUtf8("startSpin"));

        formLayout->setWidget(3, QFormLayout::FieldRole, startSpin);

        intSpinLabel = new QLabel(dockWidgetContents);
        intSpinLabel->setObjectName(QString::fromUtf8("intSpinLabel"));

        formLayout->setWidget(17, QFormLayout::LabelRole, intSpinLabel);

        depopMixingLabel = new QLabel(dockWidgetContents);
        depopMixingLabel->setObjectName(QString::fromUtf8("depopMixingLabel"));

        formLayout->setWidget(27, QFormLayout::LabelRole, depopMixingLabel);

        intMuLabel = new QLabel(dockWidgetContents);
        intMuLabel->setObjectName(QString::fromUtf8("intMuLabel"));

        formLayout->setWidget(18, QFormLayout::LabelRole, intMuLabel);

        intQLabel = new QLabel(dockWidgetContents);
        intQLabel->setObjectName(QString::fromUtf8("intQLabel"));

        formLayout->setWidget(19, QFormLayout::LabelRole, intQLabel);

        intMu = new QLabel(dockWidgetContents);
        intMu->setObjectName(QString::fromUtf8("intMu"));

        formLayout->setWidget(18, QFormLayout::FieldRole, intMu);

        intQ = new QLabel(dockWidgetContents);
        intQ->setObjectName(QString::fromUtf8("intQ"));

        formLayout->setWidget(19, QFormLayout::FieldRole, intQ);

        decayInfoDock->setWidget(dockWidgetContents);
        NucleiMainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), decayInfoDock);
        energySpectrumBar = new QToolBar(NucleiMainWindow);
        energySpectrumBar->setObjectName(QString::fromUtf8("energySpectrumBar"));
        energySpectrumBar->setIconSize(QSize(32, 32));
        NucleiMainWindow->addToolBar(Qt::TopToolBarArea, energySpectrumBar);
        extrasBar = new QToolBar(NucleiMainWindow);
        extrasBar->setObjectName(QString::fromUtf8("extrasBar"));
        extrasBar->setIconSize(QSize(32, 32));
        NucleiMainWindow->addToolBar(Qt::TopToolBarArea, extrasBar);
        QWidget::setTabOrder(tabWidget, decayView);

        mainToolBar->addAction(actionPDF_Export);
        mainToolBar->addAction(actionSVG_Export);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionZoom_In);
        mainToolBar->addAction(actionZoom_Out);
        mainToolBar->addAction(actionOriginal_Size);
        mainToolBar->addAction(actionShow_all);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionFind_Decay);
        energySpectrumBar->addAction(actionLinear);
        energySpectrumBar->addAction(actionLogarithmic);
        extrasBar->addAction(actionPreferences);
        extrasBar->addAction(actionAbout);

        retranslateUi(NucleiMainWindow);

        tabWidget->setCurrentIndex(0);
        selectionTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(NucleiMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NucleiMainWindow)
    {
        NucleiMainWindow->setWindowTitle(QApplication::translate("NucleiMainWindow", "Nuclei", 0, QApplication::UnicodeUTF8));
        actionZoom_In->setText(QApplication::translate("NucleiMainWindow", "Zoom In", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoom_In->setToolTip(QApplication::translate("NucleiMainWindow", "Zoom In", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoom_In->setShortcut(QApplication::translate("NucleiMainWindow", "Ctrl++", 0, QApplication::UnicodeUTF8));
        actionZoom_Out->setText(QApplication::translate("NucleiMainWindow", "Zoom Out", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionZoom_Out->setToolTip(QApplication::translate("NucleiMainWindow", "Zoom Out", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionZoom_Out->setShortcut(QApplication::translate("NucleiMainWindow", "Ctrl+-", 0, QApplication::UnicodeUTF8));
        actionShow_all->setText(QApplication::translate("NucleiMainWindow", "Show all", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShow_all->setToolTip(QApplication::translate("NucleiMainWindow", "Show all", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOriginal_Size->setText(QApplication::translate("NucleiMainWindow", "Original Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOriginal_Size->setToolTip(QApplication::translate("NucleiMainWindow", "Zoom to Original Size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAbout->setText(QApplication::translate("NucleiMainWindow", "About", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("NucleiMainWindow", "About Nuclei", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAbout->setShortcut(QApplication::translate("NucleiMainWindow", "Ctrl+I", 0, QApplication::UnicodeUTF8));
        actionLinear->setText(QApplication::translate("NucleiMainWindow", "Lin", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLinear->setToolTip(QApplication::translate("NucleiMainWindow", "Linear Y-Axis Scaling", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionLogarithmic->setText(QApplication::translate("NucleiMainWindow", "Log", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLogarithmic->setToolTip(QApplication::translate("NucleiMainWindow", "Logarithmic Y-Axis Scaling", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSVG_Export->setText(QApplication::translate("NucleiMainWindow", "SVG Export", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSVG_Export->setToolTip(QApplication::translate("NucleiMainWindow", "Export as SVG File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPDF_Export->setText(QApplication::translate("NucleiMainWindow", "PDF Export", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPDF_Export->setToolTip(QApplication::translate("NucleiMainWindow", "Export as PDF File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPDF_Export->setShortcut(QApplication::translate("NucleiMainWindow", "Ctrl+P", 0, QApplication::UnicodeUTF8));
        actionPreferences->setText(QApplication::translate("NucleiMainWindow", "Preferences", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPreferences->setToolTip(QApplication::translate("NucleiMainWindow", "Change application preferences", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFind_Decay->setText(QApplication::translate("NucleiMainWindow", "Find Decay", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFind_Decay->setToolTip(QApplication::translate("NucleiMainWindow", "Parametric decay cascade search", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionFind_Decay->setShortcut(QApplication::translate("NucleiMainWindow", "Ctrl+F", 0, QApplication::UnicodeUTF8));
        anisotropyLabel->setText(QApplication::translate("NucleiMainWindow", "Angular correlation coefficients", 0, QApplication::UnicodeUTF8));
        a22Label->setText(QApplication::translate("NucleiMainWindow", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">22</span>:</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        a22->setToolTip(QApplication::translate("NucleiMainWindow", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">22</span></p><p>If the sign of \316\264<sub>1</sub> or \316\264<sub>2</sub> is unknown all possible combinations are shown. Results are then tagged with the signs of \316\264<sub>1</sub> and \316\264<sub>2</sub>.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        a22->setText(QApplication::translate("NucleiMainWindow", "-", 0, QApplication::UnicodeUTF8));
        a24Label->setText(QApplication::translate("NucleiMainWindow", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">24</span>:</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        a24->setToolTip(QApplication::translate("NucleiMainWindow", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">24</span></p><p>If the sign of \316\264<sub>1</sub> or \316\264<sub>2</sub> is unknown all possible combinations are shown. Results are then tagged with the signs of \316\264<sub>1</sub> and \316\264<sub>2</sub>.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        a24->setText(QApplication::translate("NucleiMainWindow", "-", 0, QApplication::UnicodeUTF8));
        a42Label->setText(QApplication::translate("NucleiMainWindow", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">42</span>:</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        a42->setToolTip(QApplication::translate("NucleiMainWindow", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">42</span></p><p>If the sign of \316\264<sub>1</sub> or \316\264<sub>2</sub> is unknown all possible combinations are shown. Results are then tagged with the signs of \316\264<sub>1</sub> and \316\264<sub>2</sub>.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        a42->setText(QApplication::translate("NucleiMainWindow", "-", 0, QApplication::UnicodeUTF8));
        a44Label->setText(QApplication::translate("NucleiMainWindow", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">44</span>:</p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        a44->setToolTip(QApplication::translate("NucleiMainWindow", "<html><head/><body><p>A<span style=\" vertical-align:sub;\">44</span></p><p>If the sign of \316\264<sub>1</sub> or \316\264<sub>2</sub> is unknown all possible combinations are shown. Results are then tagged with the signs of \316\264<sub>1</sub> and \316\264<sub>2</sub>.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        a44->setText(QApplication::translate("NucleiMainWindow", "-", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(decayCascadeTab), QApplication::translate("NucleiMainWindow", "Decay Level Scheme", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(energySpectrumTab), QApplication::translate("NucleiMainWindow", "Photo Peaks", 0, QApplication::UnicodeUTF8));
        mainToolBar->setWindowTitle(QApplication::translate("NucleiMainWindow", "Common Tool Bar", 0, QApplication::UnicodeUTF8));
        decaySelectorDock->setWindowTitle(QApplication::translate("NucleiMainWindow", "Decay Selection", 0, QApplication::UnicodeUTF8));
        decayFilterLineEdit->setPlaceholderText(QApplication::translate("NucleiMainWindow", "Enter Filter Text", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        decayTreeExpandButton->setToolTip(QApplication::translate("NucleiMainWindow", "Expand Tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        decayTreeExpandButton->setText(QApplication::translate("NucleiMainWindow", "X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        decayTreeCollapseButton->setToolTip(QApplication::translate("NucleiMainWindow", "Collapse Tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        decayTreeCollapseButton->setText(QApplication::translate("NucleiMainWindow", "C", 0, QApplication::UnicodeUTF8));
        selectionTabWidget->setTabText(selectionTabWidget->indexOf(allDecayTab), QApplication::translate("NucleiMainWindow", "All Decays", 0, QApplication::UnicodeUTF8));
        searchFilterLineEdit->setPlaceholderText(QApplication::translate("NucleiMainWindow", "Enter Filter Text", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        searchTreeCollapseButton->setToolTip(QApplication::translate("NucleiMainWindow", "Collapse Tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        searchTreeCollapseButton->setText(QApplication::translate("NucleiMainWindow", "C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        searchTreeExpandButton->setToolTip(QApplication::translate("NucleiMainWindow", "Expand Tree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        searchTreeExpandButton->setText(QApplication::translate("NucleiMainWindow", "X", 0, QApplication::UnicodeUTF8));
        selectionTabWidget->setTabText(selectionTabWidget->indexOf(searchResultTab), QApplication::translate("NucleiMainWindow", "Search Results", 0, QApplication::UnicodeUTF8));
        decayInfoDock->setWindowTitle(QApplication::translate("NucleiMainWindow", "Decay Data", 0, QApplication::UnicodeUTF8));
        startEnergyLabel->setText(QApplication::translate("NucleiMainWindow", "Energy:", 0, QApplication::UnicodeUTF8));
        startSpinLabel->setText(QApplication::translate("NucleiMainWindow", "Spin/Parity:", 0, QApplication::UnicodeUTF8));
        popGammaLabel->setText(QApplication::translate("NucleiMainWindow", "Populating Gamma", 0, QApplication::UnicodeUTF8));
        popEnergyLabel->setText(QApplication::translate("NucleiMainWindow", "Energy:", 0, QApplication::UnicodeUTF8));
        popEnergy->setText(QApplication::translate("NucleiMainWindow", "- keV", 0, QApplication::UnicodeUTF8));
        popIntensityLabel->setText(QApplication::translate("NucleiMainWindow", "Relative Intensity:", 0, QApplication::UnicodeUTF8));
        popIntensity->setText(QApplication::translate("NucleiMainWindow", "- %", 0, QApplication::UnicodeUTF8));
        popMultipolarityLabel->setText(QApplication::translate("NucleiMainWindow", "Multipolarity:", 0, QApplication::UnicodeUTF8));
        popMultipolarity->setText(QApplication::translate("NucleiMainWindow", "<i>unknown</i>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        popMixingLabel->setToolTip(QApplication::translate("NucleiMainWindow", "\316\264", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        popMixingLabel->setText(QApplication::translate("NucleiMainWindow", "Mixing Ratio:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        popMixing->setToolTip(QApplication::translate("NucleiMainWindow", "\316\264", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        popMixing->setText(QApplication::translate("NucleiMainWindow", "-", 0, QApplication::UnicodeUTF8));
        intermedLevelLabel->setText(QApplication::translate("NucleiMainWindow", "Intermediate Level", 0, QApplication::UnicodeUTF8));
        intEnergyLabel->setText(QApplication::translate("NucleiMainWindow", "Energy:", 0, QApplication::UnicodeUTF8));
        intEnergy->setText(QApplication::translate("NucleiMainWindow", " - keV", 0, QApplication::UnicodeUTF8));
        intHalfLifeLabel->setText(QApplication::translate("NucleiMainWindow", "Half Life:", 0, QApplication::UnicodeUTF8));
        intHalfLife->setText(QApplication::translate("NucleiMainWindow", "- ns", 0, QApplication::UnicodeUTF8));
        intSpin->setText(QApplication::translate("NucleiMainWindow", "/", 0, QApplication::UnicodeUTF8));
        depopGammaLabel->setText(QApplication::translate("NucleiMainWindow", "Depopulating Gamma", 0, QApplication::UnicodeUTF8));
        depopEnergyLabel->setText(QApplication::translate("NucleiMainWindow", "Energy:", 0, QApplication::UnicodeUTF8));
        depopEnergy->setText(QApplication::translate("NucleiMainWindow", "- keV", 0, QApplication::UnicodeUTF8));
        depopIntensityLabel->setText(QApplication::translate("NucleiMainWindow", "Relative Intensity:", 0, QApplication::UnicodeUTF8));
        depopIntensity->setText(QApplication::translate("NucleiMainWindow", "- %", 0, QApplication::UnicodeUTF8));
        depopMultipolarityLabel->setText(QApplication::translate("NucleiMainWindow", "Multipolarity:", 0, QApplication::UnicodeUTF8));
        depopMultipolarity->setText(QApplication::translate("NucleiMainWindow", "<i>unknown</i>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        depopMixing->setToolTip(QApplication::translate("NucleiMainWindow", "\316\264", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        depopMixing->setText(QApplication::translate("NucleiMainWindow", "-", 0, QApplication::UnicodeUTF8));
        startLevelLabel->setText(QApplication::translate("NucleiMainWindow", "Initial Level", 0, QApplication::UnicodeUTF8));
        endLevelLabel->setText(QApplication::translate("NucleiMainWindow", "Final Level", 0, QApplication::UnicodeUTF8));
        endEnergyLabel->setText(QApplication::translate("NucleiMainWindow", "Energy:", 0, QApplication::UnicodeUTF8));
        endSpinLabel->setText(QApplication::translate("NucleiMainWindow", "Spin/Parity:", 0, QApplication::UnicodeUTF8));
        endEnergy->setText(QApplication::translate("NucleiMainWindow", "- keV", 0, QApplication::UnicodeUTF8));
        endSpin->setText(QApplication::translate("NucleiMainWindow", "/", 0, QApplication::UnicodeUTF8));
        startEnergy->setText(QApplication::translate("NucleiMainWindow", "- keV", 0, QApplication::UnicodeUTF8));
        startSpin->setText(QApplication::translate("NucleiMainWindow", "/", 0, QApplication::UnicodeUTF8));
        intSpinLabel->setText(QApplication::translate("NucleiMainWindow", "Spin/Parity:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        depopMixingLabel->setToolTip(QApplication::translate("NucleiMainWindow", "\316\264", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        depopMixingLabel->setText(QApplication::translate("NucleiMainWindow", "Mixing Ratio:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        intMuLabel->setToolTip(QApplication::translate("NucleiMainWindow", "Magnetic dipole moment of the intermediate level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        intMuLabel->setText(QApplication::translate("NucleiMainWindow", "\302\265:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        intQLabel->setToolTip(QApplication::translate("NucleiMainWindow", "Electric quadrupole moment of the intermediate level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        intQLabel->setText(QApplication::translate("NucleiMainWindow", "Q:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        intMu->setToolTip(QApplication::translate("NucleiMainWindow", "Magnetic dipole moment of the intermediate level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        intMu->setText(QApplication::translate("NucleiMainWindow", "-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        intQ->setToolTip(QApplication::translate("NucleiMainWindow", "Electric quadrupole moment of the intermediate level", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        intQ->setText(QApplication::translate("NucleiMainWindow", "-", 0, QApplication::UnicodeUTF8));
        energySpectrumBar->setWindowTitle(QApplication::translate("NucleiMainWindow", "Energy Spectrum Tool Bar", 0, QApplication::UnicodeUTF8));
        extrasBar->setWindowTitle(QApplication::translate("NucleiMainWindow", "About Tool Bar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class NucleiMainWindow: public Ui_NucleiMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUCLEI_H
