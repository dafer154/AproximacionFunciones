/********************************************************************************
** Form generated from reading UI file 'interfaz.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFAZ_H
#define UI_INTERFAZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Interfaz
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_8;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lb_funcion;
    QLineEdit *tb_funcion;
    QPushButton *bt_validarFuncion;
    QGroupBox *gBox_algoritmoLagrange;
    QVBoxLayout *verticalLayout_5;
    QLabel *lb_tituloParametros;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *rB_cargarArchivo;
    QSpacerItem *horizontalSpacer;
    QPushButton *bt_abrirArchivo;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rB_generarPuntos;
    QSpinBox *sb_puntos;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lb_intervalo;
    QLabel *lb_corchete1;
    QLineEdit *tb_intervarlo1;
    QLabel *lb_simboloComa;
    QLineEdit *tb_intervarlo2;
    QLabel *lb_corchete2;
    QPushButton *bt_validarParametros;
    QWidget *wid_cont_tablaScroll;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tabla_puntos;
    QScrollBar *sc_scrolldeTabla;
    QPushButton *bt_graficar;
    QVBoxLayout *verticalLayout;
    QGroupBox *gb_verificacionError;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lb_valordeX;
    QLineEdit *tb_valordeX;
    QPushButton *bt_validarX;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *lb_funcionEvaluada;
    QLabel *lb_segunLagrange;
    QLabel *lb_errorAbsoluto;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *tb_funcionEvaluada;
    QLineEdit *tb_segunLagrange;
    QLineEdit *tb_errorAbsoluto;
    QPushButton *bt_limpiarTodo;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *verticalSpacer;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_16;
    QLabel *lb_tituloGraficas;
    QWidget *wg_grafica;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Interfaz)
    {
        if (Interfaz->objectName().isEmpty())
            Interfaz->setObjectName(QStringLiteral("Interfaz"));
        Interfaz->resize(1037, 650);
        centralWidget = new QWidget(Interfaz);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_8 = new QHBoxLayout(centralWidget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(5);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(433, 612));
        verticalLayout_7 = new QVBoxLayout(widget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lb_funcion = new QLabel(widget);
        lb_funcion->setObjectName(QStringLiteral("lb_funcion"));
        lb_funcion->setMinimumSize(QSize(49, 21));
        lb_funcion->setMaximumSize(QSize(49, 21));

        horizontalLayout_3->addWidget(lb_funcion);

        tb_funcion = new QLineEdit(widget);
        tb_funcion->setObjectName(QStringLiteral("tb_funcion"));
        tb_funcion->setMinimumSize(QSize(237, 20));
        tb_funcion->setMaximumSize(QSize(315, 20));
        tb_funcion->setDragEnabled(false);
        tb_funcion->setReadOnly(false);

        horizontalLayout_3->addWidget(tb_funcion);

        bt_validarFuncion = new QPushButton(widget);
        bt_validarFuncion->setObjectName(QStringLiteral("bt_validarFuncion"));
        bt_validarFuncion->setMinimumSize(QSize(32, 23));
        bt_validarFuncion->setMaximumSize(QSize(32, 23));
        bt_validarFuncion->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon;
        icon.addFile(QStringLiteral(":/AproximacionFunciones/IconosInterfaz/validar.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QStringLiteral(":/AproximacionFunciones/IconosInterfaz/validar_deshabilitado.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QStringLiteral(":/AproximacionFunciones/IconosInterfaz/validar_deshabilitado.png"), QSize(), QIcon::Selected, QIcon::On);
        bt_validarFuncion->setIcon(icon);
        bt_validarFuncion->setIconSize(QSize(20, 20));
        bt_validarFuncion->setAutoDefault(false);
        bt_validarFuncion->setDefault(false);
        bt_validarFuncion->setFlat(true);

        horizontalLayout_3->addWidget(bt_validarFuncion);


        verticalLayout_7->addLayout(horizontalLayout_3);

        gBox_algoritmoLagrange = new QGroupBox(widget);
        gBox_algoritmoLagrange->setObjectName(QStringLiteral("gBox_algoritmoLagrange"));
        gBox_algoritmoLagrange->setMinimumSize(QSize(327, 319));
        gBox_algoritmoLagrange->setMaximumSize(QSize(427, 319));
        gBox_algoritmoLagrange->setStyleSheet(QStringLiteral(""));
        verticalLayout_5 = new QVBoxLayout(gBox_algoritmoLagrange);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        lb_tituloParametros = new QLabel(gBox_algoritmoLagrange);
        lb_tituloParametros->setObjectName(QStringLiteral("lb_tituloParametros"));
        lb_tituloParametros->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 20px;\n"
"padding: 2px;\n"
"border-color: rgb(0, 0, 0);"));

        verticalLayout_5->addWidget(lb_tituloParametros);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        rB_cargarArchivo = new QRadioButton(gBox_algoritmoLagrange);
        rB_cargarArchivo->setObjectName(QStringLiteral("rB_cargarArchivo"));
        rB_cargarArchivo->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 20px;\n"
"padding: 2px;\n"
"border-color: rgb(0, 0, 0);"));

        horizontalLayout_6->addWidget(rB_cargarArchivo);

        horizontalSpacer = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        bt_abrirArchivo = new QPushButton(gBox_algoritmoLagrange);
        bt_abrirArchivo->setObjectName(QStringLiteral("bt_abrirArchivo"));
        bt_abrirArchivo->setEnabled(true);
        bt_abrirArchivo->setMinimumSize(QSize(32, 23));
        bt_abrirArchivo->setMaximumSize(QSize(32, 23));
        bt_abrirArchivo->setCursor(QCursor(Qt::PointingHandCursor));
        bt_abrirArchivo->setMouseTracking(false);
        bt_abrirArchivo->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/AproximacionFunciones/IconosInterfaz/abrir.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QStringLiteral(":/AproximacionFunciones/IconosInterfaz/abrir_deshabilitado.png"), QSize(), QIcon::Normal, QIcon::On);
        icon1.addFile(QStringLiteral(":/AproximacionFunciones/IconosInterfaz/abrir.png"), QSize(), QIcon::Active, QIcon::Off);
        icon1.addFile(QStringLiteral(":/AproximacionFunciones/IconosInterfaz/abrir_deshabilitado.png"), QSize(), QIcon::Active, QIcon::On);
        icon1.addFile(QStringLiteral(":/AproximacionFunciones/IconosInterfaz/abrir.png"), QSize(), QIcon::Selected, QIcon::Off);
        icon1.addFile(QStringLiteral(":/AproximacionFunciones/IconosInterfaz/abrir_deshabilitado.png"), QSize(), QIcon::Selected, QIcon::On);
        bt_abrirArchivo->setIcon(icon1);
        bt_abrirArchivo->setIconSize(QSize(22, 22));
        bt_abrirArchivo->setFlat(true);

        horizontalLayout_6->addWidget(bt_abrirArchivo);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        rB_generarPuntos = new QRadioButton(gBox_algoritmoLagrange);
        rB_generarPuntos->setObjectName(QStringLiteral("rB_generarPuntos"));
        rB_generarPuntos->setMaximumSize(QSize(16777215, 17));
        rB_generarPuntos->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 20px;\n"
"padding: 2px;\n"
"border-color: rgb(0, 0, 0);"));

        horizontalLayout_4->addWidget(rB_generarPuntos);

        sb_puntos = new QSpinBox(gBox_algoritmoLagrange);
        sb_puntos->setObjectName(QStringLiteral("sb_puntos"));
        sb_puntos->setMaximumSize(QSize(101, 20));
        sb_puntos->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(sb_puntos);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lb_intervalo = new QLabel(gBox_algoritmoLagrange);
        lb_intervalo->setObjectName(QStringLiteral("lb_intervalo"));
        lb_intervalo->setMaximumSize(QSize(16777215, 22));
        lb_intervalo->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 20px;\n"
"padding: 2px;\n"
"border-color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(lb_intervalo);

        lb_corchete1 = new QLabel(gBox_algoritmoLagrange);
        lb_corchete1->setObjectName(QStringLiteral("lb_corchete1"));
        lb_corchete1->setMaximumSize(QSize(16777215, 22));
        lb_corchete1->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 20px;\n"
"padding: 2px;\n"
"border-color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(lb_corchete1);

        tb_intervarlo1 = new QLineEdit(gBox_algoritmoLagrange);
        tb_intervarlo1->setObjectName(QStringLiteral("tb_intervarlo1"));
        tb_intervarlo1->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(tb_intervarlo1);

        lb_simboloComa = new QLabel(gBox_algoritmoLagrange);
        lb_simboloComa->setObjectName(QStringLiteral("lb_simboloComa"));
        lb_simboloComa->setMinimumSize(QSize(13, 20));
        lb_simboloComa->setMaximumSize(QSize(16777215, 22));
        lb_simboloComa->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 20px;\n"
"padding: 2px;\n"
"border-color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(lb_simboloComa);

        tb_intervarlo2 = new QLineEdit(gBox_algoritmoLagrange);
        tb_intervarlo2->setObjectName(QStringLiteral("tb_intervarlo2"));
        tb_intervarlo2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_5->addWidget(tb_intervarlo2);

        lb_corchete2 = new QLabel(gBox_algoritmoLagrange);
        lb_corchete2->setObjectName(QStringLiteral("lb_corchete2"));
        lb_corchete2->setMaximumSize(QSize(16777215, 22));
        lb_corchete2->setStyleSheet(QLatin1String("border: none;\n"
"border-radius: 20px;\n"
"padding: 2px;\n"
"border-color: rgb(0, 0, 0);"));

        horizontalLayout_5->addWidget(lb_corchete2);


        verticalLayout_5->addLayout(horizontalLayout_5);

        bt_validarParametros = new QPushButton(gBox_algoritmoLagrange);
        bt_validarParametros->setObjectName(QStringLiteral("bt_validarParametros"));
        bt_validarParametros->setMinimumSize(QSize(32, 23));
        bt_validarParametros->setMaximumSize(QSize(32, 23));
        bt_validarParametros->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/AproximacionFunciones/IconosInterfaz/validar.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QStringLiteral(":/AproximacionFunciones/IconosInterfaz/validar_deshabilitado.png"), QSize(), QIcon::Normal, QIcon::On);
        bt_validarParametros->setIcon(icon2);
        bt_validarParametros->setIconSize(QSize(22, 22));
        bt_validarParametros->setFlat(true);

        verticalLayout_5->addWidget(bt_validarParametros, 0, Qt::AlignRight);

        wid_cont_tablaScroll = new QWidget(gBox_algoritmoLagrange);
        wid_cont_tablaScroll->setObjectName(QStringLiteral("wid_cont_tablaScroll"));
        wid_cont_tablaScroll->setMinimumSize(QSize(295, 113));
        wid_cont_tablaScroll->setStyleSheet(QLatin1String("QWidget#wid_cont_tablaScroll\n"
"{\n"
"  border: 2px solid green;\n"
"\n"
"border-radius: 15px;\n"
"border-color: rgb(0, 0, 0);\n"
"}"));
        verticalLayout_8 = new QVBoxLayout(wid_cont_tablaScroll);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tabla_puntos = new QTableWidget(wid_cont_tablaScroll);
        tabla_puntos->setObjectName(QStringLiteral("tabla_puntos"));
        tabla_puntos->setMinimumSize(QSize(0, 70));
        tabla_puntos->setMaximumSize(QSize(16777215, 70));
        tabla_puntos->setStyleSheet(QStringLiteral(""));

        verticalLayout_4->addWidget(tabla_puntos);

        sc_scrolldeTabla = new QScrollBar(wid_cont_tablaScroll);
        sc_scrolldeTabla->setObjectName(QStringLiteral("sc_scrolldeTabla"));
        sc_scrolldeTabla->setStyleSheet(QStringLiteral(""));
        sc_scrolldeTabla->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(sc_scrolldeTabla);


        verticalLayout_8->addLayout(verticalLayout_4);


        verticalLayout_5->addWidget(wid_cont_tablaScroll);

        bt_graficar = new QPushButton(gBox_algoritmoLagrange);
        bt_graficar->setObjectName(QStringLiteral("bt_graficar"));
        bt_graficar->setMaximumSize(QSize(75, 23));
        bt_graficar->setCursor(QCursor(Qt::PointingHandCursor));
        bt_graficar->setStyleSheet(QStringLiteral(""));
        bt_graficar->setCheckable(false);

        verticalLayout_5->addWidget(bt_graficar, 0, Qt::AlignRight);


        verticalLayout_7->addWidget(gBox_algoritmoLagrange);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gb_verificacionError = new QGroupBox(widget);
        gb_verificacionError->setObjectName(QStringLiteral("gb_verificacionError"));
        gb_verificacionError->setMinimumSize(QSize(315, 149));
        gb_verificacionError->setMaximumSize(QSize(425, 149));
        gb_verificacionError->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(gb_verificacionError);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lb_valordeX = new QLabel(gb_verificacionError);
        lb_valordeX->setObjectName(QStringLiteral("lb_valordeX"));
        lb_valordeX->setStyleSheet(QLatin1String("border: none;\n"
""));

        horizontalLayout_2->addWidget(lb_valordeX);

        tb_valordeX = new QLineEdit(gb_verificacionError);
        tb_valordeX->setObjectName(QStringLiteral("tb_valordeX"));
        tb_valordeX->setStyleSheet(QStringLiteral(""));
        tb_valordeX->setDragEnabled(false);
        tb_valordeX->setReadOnly(false);

        horizontalLayout_2->addWidget(tb_valordeX);

        bt_validarX = new QPushButton(gb_verificacionError);
        bt_validarX->setObjectName(QStringLiteral("bt_validarX"));
        bt_validarX->setMinimumSize(QSize(32, 23));
        bt_validarX->setMaximumSize(QSize(32, 23));
        bt_validarX->setCursor(QCursor(Qt::PointingHandCursor));
        bt_validarX->setIcon(icon2);
        bt_validarX->setIconSize(QSize(22, 22));
        bt_validarX->setFlat(true);

        horizontalLayout_2->addWidget(bt_validarX);


        verticalLayout_3->addLayout(horizontalLayout_2);

        line = new QFrame(gb_verificacionError);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lb_funcionEvaluada = new QLabel(gb_verificacionError);
        lb_funcionEvaluada->setObjectName(QStringLiteral("lb_funcionEvaluada"));
        lb_funcionEvaluada->setStyleSheet(QLatin1String("border: none;\n"
""));

        verticalLayout_2->addWidget(lb_funcionEvaluada);

        lb_segunLagrange = new QLabel(gb_verificacionError);
        lb_segunLagrange->setObjectName(QStringLiteral("lb_segunLagrange"));
        lb_segunLagrange->setStyleSheet(QLatin1String("border: none;\n"
""));

        verticalLayout_2->addWidget(lb_segunLagrange);

        lb_errorAbsoluto = new QLabel(gb_verificacionError);
        lb_errorAbsoluto->setObjectName(QStringLiteral("lb_errorAbsoluto"));
        lb_errorAbsoluto->setStyleSheet(QLatin1String("border: none;\n"
""));

        verticalLayout_2->addWidget(lb_errorAbsoluto);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        tb_funcionEvaluada = new QLineEdit(gb_verificacionError);
        tb_funcionEvaluada->setObjectName(QStringLiteral("tb_funcionEvaluada"));
        tb_funcionEvaluada->setStyleSheet(QStringLiteral(""));
        tb_funcionEvaluada->setDragEnabled(false);
        tb_funcionEvaluada->setReadOnly(false);

        verticalLayout_10->addWidget(tb_funcionEvaluada);

        tb_segunLagrange = new QLineEdit(gb_verificacionError);
        tb_segunLagrange->setObjectName(QStringLiteral("tb_segunLagrange"));
        tb_segunLagrange->setStyleSheet(QStringLiteral(""));
        tb_segunLagrange->setDragEnabled(false);
        tb_segunLagrange->setReadOnly(false);

        verticalLayout_10->addWidget(tb_segunLagrange);

        tb_errorAbsoluto = new QLineEdit(gb_verificacionError);
        tb_errorAbsoluto->setObjectName(QStringLiteral("tb_errorAbsoluto"));
        tb_errorAbsoluto->setStyleSheet(QStringLiteral(""));
        tb_errorAbsoluto->setDragEnabled(false);
        tb_errorAbsoluto->setReadOnly(false);

        verticalLayout_10->addWidget(tb_errorAbsoluto);


        horizontalLayout->addLayout(verticalLayout_10);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout->addWidget(gb_verificacionError);

        bt_limpiarTodo = new QPushButton(widget);
        bt_limpiarTodo->setObjectName(QStringLiteral("bt_limpiarTodo"));
        bt_limpiarTodo->setMaximumSize(QSize(75, 23));
        bt_limpiarTodo->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(bt_limpiarTodo, 0, Qt::AlignRight);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));

        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_7->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        splitter->addWidget(widget);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout_16 = new QVBoxLayout(layoutWidget);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        lb_tituloGraficas = new QLabel(layoutWidget);
        lb_tituloGraficas->setObjectName(QStringLiteral("lb_tituloGraficas"));
        lb_tituloGraficas->setMaximumSize(QSize(16777215, 23));

        verticalLayout_16->addWidget(lb_tituloGraficas);

        wg_grafica = new QWidget(layoutWidget);
        wg_grafica->setObjectName(QStringLiteral("wg_grafica"));
        wg_grafica->setMinimumSize(QSize(579, 550));
        wg_grafica->setStyleSheet(QLatin1String("QWidget#wg_grafica\n"
"{\n"
"  border: 2px solid green;\n"
"\n"
"border-radius: 15px;\n"
"border-color: rgb(0, 0, 0);\n"
"}"));

        verticalLayout_16->addWidget(wg_grafica);

        splitter->addWidget(layoutWidget);

        horizontalLayout_8->addWidget(splitter);

        Interfaz->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Interfaz);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Interfaz->setStatusBar(statusBar);

        retranslateUi(Interfaz);

        QMetaObject::connectSlotsByName(Interfaz);
    } // setupUi

    void retranslateUi(QMainWindow *Interfaz)
    {
        Interfaz->setWindowTitle(QApplication::translate("Interfaz", "Interfaz", 0));
        lb_funcion->setText(QApplication::translate("Interfaz", "<html><head/><body><p><span style=\" font-size:11pt;\">Funci\303\263n</span></p></body></html>", 0));
        tb_funcion->setText(QApplication::translate("Interfaz", "Ej: sin(x)", 0));
        bt_validarFuncion->setText(QString());
        gBox_algoritmoLagrange->setTitle(QApplication::translate("Interfaz", "Algoritmo de Lagrange", 0));
        lb_tituloParametros->setText(QApplication::translate("Interfaz", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600;\">Parametros iniciales</span></p></body></html>", 0));
        rB_cargarArchivo->setText(QApplication::translate("Interfaz", "Cargar desde archivo", 0));
        bt_abrirArchivo->setText(QString());
        rB_generarPuntos->setText(QApplication::translate("Interfaz", "Generar puntos", 0));
        lb_intervalo->setText(QApplication::translate("Interfaz", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Intervalo:</span></p></body></html>", 0));
        lb_corchete1->setText(QApplication::translate("Interfaz", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">[</span></p></body></html>", 0));
        lb_simboloComa->setText(QApplication::translate("Interfaz", "<html><head/><body><p><span style=\" font-weight:600;\">,</span></p></body></html>", 0));
        lb_corchete2->setText(QApplication::translate("Interfaz", "<html><head/><body><p><span style=\" font-weight:600;\">]</span></p></body></html>", 0));
        bt_validarParametros->setText(QString());
#ifndef QT_NO_TOOLTIP
        bt_graficar->setToolTip(QApplication::translate("Interfaz", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        bt_graficar->setText(QApplication::translate("Interfaz", "Graficar", 0));
        gb_verificacionError->setTitle(QApplication::translate("Interfaz", "Verificacion de error", 0));
        lb_valordeX->setText(QApplication::translate("Interfaz", "<html><head/><body><p><span style=\" font-size:11pt;\">Valor de x:</span></p></body></html>", 0));
        tb_valordeX->setText(QString());
        bt_validarX->setText(QString());
        lb_funcionEvaluada->setText(QApplication::translate("Interfaz", "<html><head/><body><p><span style=\" font-size:11pt;\">F(x):</span></p></body></html>", 0));
        lb_segunLagrange->setText(QApplication::translate("Interfaz", "<html><head/><body><p><span style=\" font-size:11pt;\">Segun Lagrange:</span></p></body></html>", 0));
        lb_errorAbsoluto->setText(QApplication::translate("Interfaz", "<html><head/><body><p><span style=\" font-size:11pt;\">Error absoluto:</span></p></body></html>", 0));
        tb_funcionEvaluada->setText(QString());
        tb_segunLagrange->setText(QString());
        tb_errorAbsoluto->setText(QString());
        bt_limpiarTodo->setText(QApplication::translate("Interfaz", "Limpiar todo", 0));
        lb_tituloGraficas->setText(QApplication::translate("Interfaz", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">Graficas</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Interfaz: public Ui_Interfaz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFAZ_H
