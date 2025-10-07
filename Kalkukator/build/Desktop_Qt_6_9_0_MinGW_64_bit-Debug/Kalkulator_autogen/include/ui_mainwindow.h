/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *Main_layout;
    QHBoxLayout *Sum_layout;
    QPushButton *Guzik_plus;
    QPushButton *Guzik_minus;
    QLCDNumber *Ekran;
    QPushButton *Guzik_nr7;
    QPushButton *Guzik_nr2;
    QPushButton *Guzik_kropka;
    QPushButton *Guzik_nr3;
    QPushButton *Guzik_nr9;
    QHBoxLayout *Mult_layout;
    QPushButton *Guzik_mnozenie;
    QPushButton *Guzik_dzielenie;
    QPushButton *Guzik_nr6;
    QPushButton *Guzik_nr4;
    QPushButton *Guzik_nr5;
    QPushButton *Guzik_rowny;
    QPushButton *Guzik_nr8;
    QPushButton *Guzik_nr1;
    QPushButton *Guzik_nr0;
    QHBoxLayout *Extra_layout;
    QPushButton *Guzik_modulo;
    QPushButton *Guzik_clear;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(460, 580);
        MainWindow->setMinimumSize(QSize(460, 580));
        MainWindow->setMaximumSize(QSize(460, 580));
        MainWindow->setBaseSize(QSize(100, 100));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(135, 135, 135, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        QBrush brush2(QColor(202, 202, 202, 255));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush2);
        QBrush brush3(QColor(168, 168, 168, 255));
        brush3.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush3);
        QBrush brush4(QColor(67, 67, 67, 255));
        brush4.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush4);
        QBrush brush5(QColor(90, 90, 90, 255));
        brush5.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        QBrush brush7(QColor(195, 195, 195, 255));
        brush7.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush9(QColor(0, 0, 0, 127));
        brush9.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush6);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush7);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush9);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush6);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush2);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush3);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush5);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush4);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush10(QColor(67, 67, 67, 127));
        brush10.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(175, 175, 175, 255));
        brush11.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush11);
#endif
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 30, 431, 541));
        Main_layout = new QGridLayout(gridLayoutWidget);
        Main_layout->setSpacing(5);
        Main_layout->setObjectName("Main_layout");
        Main_layout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        Main_layout->setContentsMargins(0, 0, 0, 0);
        Sum_layout = new QHBoxLayout();
        Sum_layout->setSpacing(5);
        Sum_layout->setObjectName("Sum_layout");
        Guzik_plus = new QPushButton(gridLayoutWidget);
        Guzik_plus->setObjectName("Guzik_plus");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Guzik_plus->sizePolicy().hasHeightForWidth());
        Guzik_plus->setSizePolicy(sizePolicy);
        Guzik_plus->setMinimumSize(QSize(50, 100));
        Guzik_plus->setMaximumSize(QSize(50, 100));
        Guzik_plus->setBaseSize(QSize(50, 100));
        QPalette palette1;
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        QBrush brush12(QColor(77, 77, 77, 255));
        brush12.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        QBrush brush13(QColor(115, 115, 115, 255));
        brush13.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        QBrush brush14(QColor(96, 96, 96, 255));
        brush14.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        QBrush brush15(QColor(38, 38, 38, 255));
        brush15.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        QBrush brush16(QColor(51, 51, 51, 255));
        brush16.setStyle(Qt::BrushStyle::SolidPattern);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush17(QColor(255, 255, 255, 127));
        brush17.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush18(QColor(38, 38, 38, 127));
        brush18.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
        QBrush brush19(QColor(54, 54, 54, 255));
        brush19.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette1.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_plus->setPalette(palette1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic")});
        font.setPointSize(18);
        Guzik_plus->setFont(font);

        Sum_layout->addWidget(Guzik_plus);

        Guzik_minus = new QPushButton(gridLayoutWidget);
        Guzik_minus->setObjectName("Guzik_minus");
        sizePolicy.setHeightForWidth(Guzik_minus->sizePolicy().hasHeightForWidth());
        Guzik_minus->setSizePolicy(sizePolicy);
        Guzik_minus->setMinimumSize(QSize(50, 100));
        Guzik_minus->setMaximumSize(QSize(50, 100));
        Guzik_minus->setBaseSize(QSize(50, 100));
        QPalette palette2;
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette2.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_minus->setPalette(palette2);
        Guzik_minus->setFont(font);

        Sum_layout->addWidget(Guzik_minus);


        Main_layout->addLayout(Sum_layout, 3, 3, 1, 1);

        Ekran = new QLCDNumber(gridLayoutWidget);
        Ekran->setObjectName("Ekran");
        Ekran->setMinimumSize(QSize(425, 100));
        Ekran->setMaximumSize(QSize(425, 100));
        QPalette palette3;
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        QBrush brush20(QColor(109, 109, 109, 255));
        brush20.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush20);
        QBrush brush21(QColor(163, 163, 163, 255));
        brush21.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush21);
        QBrush brush22(QColor(136, 136, 136, 255));
        brush22.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush22);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush19);
        QBrush brush23(QColor(73, 73, 73, 255));
        brush23.setStyle(Qt::BrushStyle::SolidPattern);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush23);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush20);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush19);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush20);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush21);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush22);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush19);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush23);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush20);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush19);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush19);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush20);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush21);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush22);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush19);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush23);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush19);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush19);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush20);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush20);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush20);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
        QBrush brush24(QColor(54, 54, 54, 127));
        brush24.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush24);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette3.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush12);
#endif
        Ekran->setPalette(palette3);
        Ekran->setLineWidth(2);
        Ekran->setSmallDecimalPoint(true);
        Ekran->setDigitCount(8);
        Ekran->setSegmentStyle(QLCDNumber::SegmentStyle::Filled);

        Main_layout->addWidget(Ekran, 0, 0, 1, 4);

        Guzik_nr7 = new QPushButton(gridLayoutWidget);
        Guzik_nr7->setObjectName("Guzik_nr7");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Guzik_nr7->sizePolicy().hasHeightForWidth());
        Guzik_nr7->setSizePolicy(sizePolicy1);
        Guzik_nr7->setMinimumSize(QSize(100, 100));
        Guzik_nr7->setMaximumSize(QSize(100, 100));
        QPalette palette4;
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette4.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_nr7->setPalette(palette4);
        Guzik_nr7->setFont(font);

        Main_layout->addWidget(Guzik_nr7, 3, 0, 1, 1);

        Guzik_nr2 = new QPushButton(gridLayoutWidget);
        Guzik_nr2->setObjectName("Guzik_nr2");
        sizePolicy1.setHeightForWidth(Guzik_nr2->sizePolicy().hasHeightForWidth());
        Guzik_nr2->setSizePolicy(sizePolicy1);
        Guzik_nr2->setMinimumSize(QSize(100, 100));
        Guzik_nr2->setMaximumSize(QSize(100, 100));
        QPalette palette5;
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette5.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette5.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette5.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_nr2->setPalette(palette5);
        Guzik_nr2->setFont(font);

        Main_layout->addWidget(Guzik_nr2, 1, 1, 1, 1);

        Guzik_kropka = new QPushButton(gridLayoutWidget);
        Guzik_kropka->setObjectName("Guzik_kropka");
        sizePolicy1.setHeightForWidth(Guzik_kropka->sizePolicy().hasHeightForWidth());
        Guzik_kropka->setSizePolicy(sizePolicy1);
        Guzik_kropka->setMinimumSize(QSize(100, 100));
        Guzik_kropka->setMaximumSize(QSize(100, 100));
        QPalette palette6;
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette6.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette6.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette6.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_kropka->setPalette(palette6);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Yu Gothic")});
        font1.setPointSize(24);
        Guzik_kropka->setFont(font1);

        Main_layout->addWidget(Guzik_kropka, 4, 1, 1, 1);

        Guzik_nr3 = new QPushButton(gridLayoutWidget);
        Guzik_nr3->setObjectName("Guzik_nr3");
        sizePolicy1.setHeightForWidth(Guzik_nr3->sizePolicy().hasHeightForWidth());
        Guzik_nr3->setSizePolicy(sizePolicy1);
        Guzik_nr3->setMinimumSize(QSize(100, 100));
        Guzik_nr3->setMaximumSize(QSize(100, 100));
        QPalette palette7;
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette7.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette7.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette7.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_nr3->setPalette(palette7);
        Guzik_nr3->setFont(font);

        Main_layout->addWidget(Guzik_nr3, 1, 2, 1, 1);

        Guzik_nr9 = new QPushButton(gridLayoutWidget);
        Guzik_nr9->setObjectName("Guzik_nr9");
        sizePolicy1.setHeightForWidth(Guzik_nr9->sizePolicy().hasHeightForWidth());
        Guzik_nr9->setSizePolicy(sizePolicy1);
        Guzik_nr9->setMinimumSize(QSize(100, 100));
        Guzik_nr9->setMaximumSize(QSize(100, 100));
        QPalette palette8;
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette8.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette8.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette8.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_nr9->setPalette(palette8);
        Guzik_nr9->setFont(font);

        Main_layout->addWidget(Guzik_nr9, 3, 2, 1, 1);

        Mult_layout = new QHBoxLayout();
        Mult_layout->setSpacing(5);
        Mult_layout->setObjectName("Mult_layout");
        Guzik_mnozenie = new QPushButton(gridLayoutWidget);
        Guzik_mnozenie->setObjectName("Guzik_mnozenie");
        sizePolicy.setHeightForWidth(Guzik_mnozenie->sizePolicy().hasHeightForWidth());
        Guzik_mnozenie->setSizePolicy(sizePolicy);
        Guzik_mnozenie->setMinimumSize(QSize(50, 100));
        Guzik_mnozenie->setMaximumSize(QSize(50, 100));
        Guzik_mnozenie->setBaseSize(QSize(50, 100));
        QPalette palette9;
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette9.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_mnozenie->setPalette(palette9);
        Guzik_mnozenie->setFont(font);

        Mult_layout->addWidget(Guzik_mnozenie);

        Guzik_dzielenie = new QPushButton(gridLayoutWidget);
        Guzik_dzielenie->setObjectName("Guzik_dzielenie");
        sizePolicy.setHeightForWidth(Guzik_dzielenie->sizePolicy().hasHeightForWidth());
        Guzik_dzielenie->setSizePolicy(sizePolicy);
        Guzik_dzielenie->setMinimumSize(QSize(50, 100));
        Guzik_dzielenie->setMaximumSize(QSize(50, 100));
        Guzik_dzielenie->setBaseSize(QSize(50, 100));
        QPalette palette10;
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette10.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette10.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette10.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_dzielenie->setPalette(palette10);
        Guzik_dzielenie->setFont(font);
        Guzik_dzielenie->setStyleSheet(QString::fromUtf8(""));

        Mult_layout->addWidget(Guzik_dzielenie);


        Main_layout->addLayout(Mult_layout, 2, 3, 1, 1);

        Guzik_nr6 = new QPushButton(gridLayoutWidget);
        Guzik_nr6->setObjectName("Guzik_nr6");
        sizePolicy1.setHeightForWidth(Guzik_nr6->sizePolicy().hasHeightForWidth());
        Guzik_nr6->setSizePolicy(sizePolicy1);
        Guzik_nr6->setMinimumSize(QSize(100, 100));
        Guzik_nr6->setMaximumSize(QSize(100, 100));
        QPalette palette11;
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette11.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette11.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette11.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_nr6->setPalette(palette11);
        Guzik_nr6->setFont(font);

        Main_layout->addWidget(Guzik_nr6, 2, 2, 1, 1);

        Guzik_nr4 = new QPushButton(gridLayoutWidget);
        Guzik_nr4->setObjectName("Guzik_nr4");
        sizePolicy1.setHeightForWidth(Guzik_nr4->sizePolicy().hasHeightForWidth());
        Guzik_nr4->setSizePolicy(sizePolicy1);
        Guzik_nr4->setMinimumSize(QSize(100, 100));
        Guzik_nr4->setMaximumSize(QSize(100, 100));
        QPalette palette12;
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette12.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_nr4->setPalette(palette12);
        Guzik_nr4->setFont(font);

        Main_layout->addWidget(Guzik_nr4, 2, 0, 1, 1);

        Guzik_nr5 = new QPushButton(gridLayoutWidget);
        Guzik_nr5->setObjectName("Guzik_nr5");
        sizePolicy1.setHeightForWidth(Guzik_nr5->sizePolicy().hasHeightForWidth());
        Guzik_nr5->setSizePolicy(sizePolicy1);
        Guzik_nr5->setMinimumSize(QSize(100, 100));
        Guzik_nr5->setMaximumSize(QSize(100, 100));
        QPalette palette13;
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette13.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette13.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette13.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_nr5->setPalette(palette13);
        Guzik_nr5->setFont(font);

        Main_layout->addWidget(Guzik_nr5, 2, 1, 1, 1);

        Guzik_rowny = new QPushButton(gridLayoutWidget);
        Guzik_rowny->setObjectName("Guzik_rowny");
        Guzik_rowny->setMinimumSize(QSize(215, 100));
        Guzik_rowny->setMaximumSize(QSize(215, 100));
        QPalette palette14;
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette14.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette14.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette14.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_rowny->setPalette(palette14);
        Guzik_rowny->setFont(font1);

        Main_layout->addWidget(Guzik_rowny, 4, 2, 1, 2);

        Guzik_nr8 = new QPushButton(gridLayoutWidget);
        Guzik_nr8->setObjectName("Guzik_nr8");
        sizePolicy1.setHeightForWidth(Guzik_nr8->sizePolicy().hasHeightForWidth());
        Guzik_nr8->setSizePolicy(sizePolicy1);
        Guzik_nr8->setMinimumSize(QSize(100, 100));
        Guzik_nr8->setMaximumSize(QSize(100, 100));
        QPalette palette15;
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette15.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette15.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette15.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_nr8->setPalette(palette15);
        Guzik_nr8->setFont(font);

        Main_layout->addWidget(Guzik_nr8, 3, 1, 1, 1);

        Guzik_nr1 = new QPushButton(gridLayoutWidget);
        Guzik_nr1->setObjectName("Guzik_nr1");
        sizePolicy1.setHeightForWidth(Guzik_nr1->sizePolicy().hasHeightForWidth());
        Guzik_nr1->setSizePolicy(sizePolicy1);
        Guzik_nr1->setMinimumSize(QSize(100, 100));
        Guzik_nr1->setMaximumSize(QSize(100, 100));
        QPalette palette16;
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette16.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette16.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette16.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_nr1->setPalette(palette16);
        Guzik_nr1->setFont(font);

        Main_layout->addWidget(Guzik_nr1, 1, 0, 1, 1);

        Guzik_nr0 = new QPushButton(gridLayoutWidget);
        Guzik_nr0->setObjectName("Guzik_nr0");
        sizePolicy1.setHeightForWidth(Guzik_nr0->sizePolicy().hasHeightForWidth());
        Guzik_nr0->setSizePolicy(sizePolicy1);
        Guzik_nr0->setMinimumSize(QSize(100, 100));
        Guzik_nr0->setMaximumSize(QSize(100, 100));
        QPalette palette17;
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette17.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette17.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette17.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_nr0->setPalette(palette17);
        Guzik_nr0->setFont(font);

        Main_layout->addWidget(Guzik_nr0, 4, 0, 1, 1);

        Extra_layout = new QHBoxLayout();
        Extra_layout->setSpacing(5);
        Extra_layout->setObjectName("Extra_layout");
        Guzik_modulo = new QPushButton(gridLayoutWidget);
        Guzik_modulo->setObjectName("Guzik_modulo");
        sizePolicy.setHeightForWidth(Guzik_modulo->sizePolicy().hasHeightForWidth());
        Guzik_modulo->setSizePolicy(sizePolicy);
        Guzik_modulo->setMinimumSize(QSize(50, 100));
        Guzik_modulo->setMaximumSize(QSize(50, 100));
        Guzik_modulo->setBaseSize(QSize(50, 100));
        QPalette palette18;
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette18.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette18.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette18.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_modulo->setPalette(palette18);
        Guzik_modulo->setFont(font);

        Extra_layout->addWidget(Guzik_modulo);

        Guzik_clear = new QPushButton(gridLayoutWidget);
        Guzik_clear->setObjectName("Guzik_clear");
        sizePolicy.setHeightForWidth(Guzik_clear->sizePolicy().hasHeightForWidth());
        Guzik_clear->setSizePolicy(sizePolicy);
        Guzik_clear->setMinimumSize(QSize(50, 100));
        Guzik_clear->setMaximumSize(QSize(50, 100));
        Guzik_clear->setBaseSize(QSize(50, 100));
        QPalette palette19;
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush6);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush12);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Light, brush13);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Midlight, brush14);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Dark, brush15);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Mid, brush16);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush6);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::BrightText, brush6);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush6);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush12);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Shadow, brush);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::AlternateBase, brush15);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipBase, brush8);
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette19.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Accent, brush);
#endif
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush6);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush12);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Light, brush13);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Midlight, brush14);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Dark, brush15);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Mid, brush16);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush6);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::BrightText, brush6);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush6);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush12);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Shadow, brush);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::AlternateBase, brush15);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipBase, brush8);
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush17);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette19.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Accent, brush);
#endif
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush15);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush12);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Light, brush13);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Midlight, brush14);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Dark, brush15);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Mid, brush16);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush15);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::BrightText, brush6);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush15);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush12);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush12);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Shadow, brush);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::AlternateBase, brush12);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipBase, brush8);
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush18);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
        palette19.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Accent, brush19);
#endif
        Guzik_clear->setPalette(palette19);
        Guzik_clear->setFont(font);
        Guzik_clear->setStyleSheet(QString::fromUtf8(""));

        Extra_layout->addWidget(Guzik_clear);


        Main_layout->addLayout(Extra_layout, 1, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Guzik_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Guzik_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Guzik_nr7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Guzik_nr2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Guzik_kropka->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        Guzik_nr3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Guzik_nr9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Guzik_mnozenie->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Guzik_dzielenie->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Guzik_nr6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Guzik_nr4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Guzik_nr5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Guzik_rowny->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Guzik_nr8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Guzik_nr1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Guzik_nr0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Guzik_modulo->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        Guzik_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
