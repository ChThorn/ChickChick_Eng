/********************************************************************************
** Form generated from reading UI file 'DialogRobot.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGROBOT_H
#define UI_DIALOGROBOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_DialogRobot
{
public:
    QGroupBox *GB_ROBOT;
    QLabel *label_110;
    QPushButton *BTN_ROBOT_TASK_STOP;
    QLabel *label_4;
    QLineEdit *LE_TCP_REF_RX;
    QLineEdit *LE_JNT_REF_3;
    QLineEdit *LE_ROBOT_STATUS_SOS;
    QLineEdit *LE_ROBOT_STATUS_EMS;
    QFrame *frame_3;
    QRadioButton *RB_ROBOT_SPEED_NORMAL;
    QRadioButton *RB_ROBOT_SPEED_SLOW;
    QLabel *label_52;
    QLabel *label_46;
    QLineEdit *LE_JNT_REF_2;
    QLabel *label_49;
    QLineEdit *LE_ROBOT_INIT_STAT_1;
    QLabel *label_50;
    QPushButton *BTN_ROBOT_RESUME_OUTCOL;
    QLineEdit *LE_ROBOT_CONNECTION_DATA;
    QLineEdit *LE_JNT_REF_1;
    QLabel *label_43;
    QLineEdit *LE_JNT_ENC_5;
    QFrame *line_11;
    QLineEdit *LE_ROBOT_INIT_STAT_4;
    QPushButton *BTN_ROBOT_TASK_START;
    QPushButton *BTN_ROBOT_REAL;
    QLabel *label_42;
    QLineEdit *LE_JNT_REF_6;
    QLabel *label_6;
    QLabel *label_56;
    QLabel *label_45;
    QLabel *label_58;
    QLineEdit *LE_TCP_REF_RY;
    QPushButton *BTN_ROBOT_SIMUL;
    QLabel *label_8;
    QLineEdit *LE_PG_MODE_REAL;
    QLineEdit *LE_ROBOT_CONNECTION_CMD;
    QLineEdit *LE_ROBOT_STATE_MOVING;
    QLineEdit *LE_ROBOT_STATE_IDLE;
    QLineEdit *LE_ROBOT_STATUS_SELF_COLLISION;
    QLabel *label_92;
    QLineEdit *LE_ROBOT_PRG_CONNECT;
    QPushButton *BTN_ROBOT_HALT;
    QLabel *label_53;
    QLineEdit *LE_JNT_ENC_6;
    QLabel *label_91;
    QPushButton *BTN_ROBOT_PAUSE;
    QLineEdit *LE_JNT_REF_4;
    QLineEdit *LE_JNT_ENC_2;
    QLineEdit *LE_TCP_REF_Z;
    QLineEdit *LE_TCP_REF_Y;
    QLabel *label_60;
    QLabel *label_57;
    QPushButton *BTN_ROBOT_RESUME_PAUSED;
    QLineEdit *LE_ROBOT_INIT_STAT_3;
    QLineEdit *LE_JNT_ENC_4;
    QLabel *label_7;
    QLabel *label_48;
    QLabel *label_54;
    QLabel *label_51;
    QLineEdit *LE_ROBOT_STATUS_EXT_COLLISION;
    QLineEdit *LE_ROBOT_STATUS_PAUSED;
    QLineEdit *LE_ROBOT_INIT_STAT_2;
    QLabel *label_55;
    QLabel *label_5;
    QLabel *label_59;
    QLineEdit *LE_JNT_ENC_1;
    QLineEdit *LE_TCP_REF_X;
    QLineEdit *LE_JNT_ENC_3;
    QLineEdit *LE_TCP_REF_RZ;
    QLineEdit *LE_ROBOT_STATUS_TEACHING;
    QLineEdit *LE_ROBOT_PRG_WORKING_STATUS;
    QLineEdit *LE_PG_MODE_SIMULATION;
    QLabel *label_47;
    QLineEdit *LE_JNT_REF_5;
    QLabel *label_84;
    QLabel *label_44;
    QLabel *label_93;
    QFrame *line_12;
    QFrame *line_13;
    QFrame *line_14;
    QLabel *label_94;
    QLabel *label_95;
    QLineEdit *LE_ROBOT_INIT_POSITION;
    QLineEdit *LE_ROBOT_INIT_BASE_ANGLE;
    QLabel *label_96;
    QLabel *label_97;

    void setupUi(QDialog *DialogRobot)
    {
        if (DialogRobot->objectName().isEmpty())
            DialogRobot->setObjectName(QString::fromUtf8("DialogRobot"));
        DialogRobot->resize(300, 690);
        GB_ROBOT = new QGroupBox(DialogRobot);
        GB_ROBOT->setObjectName(QString::fromUtf8("GB_ROBOT"));
        GB_ROBOT->setGeometry(QRect(0, 0, 300, 691));
        QFont font;
        font.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        GB_ROBOT->setFont(font);
        GB_ROBOT->setStyleSheet(QString::fromUtf8("QGroupBox  {\n"
"    margin-top: 10px;\n"
"	font: 20pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"\n"
"QGroupBox::title  {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 10px 8000px 10px 8000px;\n"
"    background-color: #595959;\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"QLabel {\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"}\n"
"QComboBox{\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"QPushButton{\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"QLineEdit{\n"
"	font: 10pt \"\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200\";\n"
"	background-color: #ffffff\n"
"}\n"
"\n"
"\n"
"\n"
""));
        label_110 = new QLabel(GB_ROBOT);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        label_110->setGeometry(QRect(10, 60, 131, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\355\225\250\354\264\210\353\241\254\353\217\213\354\233\200"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_110->setFont(font1);
        label_110->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        BTN_ROBOT_TASK_STOP = new QPushButton(GB_ROBOT);
        BTN_ROBOT_TASK_STOP->setObjectName(QString::fromUtf8("BTN_ROBOT_TASK_STOP"));
        BTN_ROBOT_TASK_STOP->setGeometry(QRect(160, 140, 111, 41));
        BTN_ROBOT_TASK_STOP->setFont(font1);
        label_4 = new QLabel(GB_ROBOT);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 560, 21, 21));
        label_4->setMinimumSize(QSize(21, 0));
        label_4->setMaximumSize(QSize(21, 21));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        LE_TCP_REF_RX = new QLineEdit(GB_ROBOT);
        LE_TCP_REF_RX->setObjectName(QString::fromUtf8("LE_TCP_REF_RX"));
        LE_TCP_REF_RX->setGeometry(QRect(230, 620, 61, 21));
        LE_TCP_REF_RX->setFont(font1);
        LE_TCP_REF_RX->setReadOnly(true);
        LE_JNT_REF_3 = new QLineEdit(GB_ROBOT);
        LE_JNT_REF_3->setObjectName(QString::fromUtf8("LE_JNT_REF_3"));
        LE_JNT_REF_3->setGeometry(QRect(30, 600, 61, 21));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LE_JNT_REF_3->sizePolicy().hasHeightForWidth());
        LE_JNT_REF_3->setSizePolicy(sizePolicy);
        LE_JNT_REF_3->setMaximumSize(QSize(61, 21));
        LE_JNT_REF_3->setFont(font1);
        LE_JNT_REF_3->setReadOnly(true);
        LE_ROBOT_STATUS_SOS = new QLineEdit(GB_ROBOT);
        LE_ROBOT_STATUS_SOS->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_SOS"));
        LE_ROBOT_STATUS_SOS->setGeometry(QRect(150, 490, 71, 21));
        LE_ROBOT_STATUS_SOS->setFont(font1);
        LE_ROBOT_STATUS_SOS->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_SOS->setReadOnly(true);
        LE_ROBOT_STATUS_EMS = new QLineEdit(GB_ROBOT);
        LE_ROBOT_STATUS_EMS->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_EMS"));
        LE_ROBOT_STATUS_EMS->setGeometry(QRect(150, 470, 71, 21));
        LE_ROBOT_STATUS_EMS->setFont(font1);
        LE_ROBOT_STATUS_EMS->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_EMS->setReadOnly(true);
        frame_3 = new QFrame(GB_ROBOT);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(90, 320, 191, 31));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        RB_ROBOT_SPEED_NORMAL = new QRadioButton(frame_3);
        RB_ROBOT_SPEED_NORMAL->setObjectName(QString::fromUtf8("RB_ROBOT_SPEED_NORMAL"));
        RB_ROBOT_SPEED_NORMAL->setGeometry(QRect(10, 0, 81, 31));
        RB_ROBOT_SPEED_NORMAL->setFont(font1);
        RB_ROBOT_SPEED_NORMAL->setChecked(true);
        RB_ROBOT_SPEED_SLOW = new QRadioButton(frame_3);
        RB_ROBOT_SPEED_SLOW->setObjectName(QString::fromUtf8("RB_ROBOT_SPEED_SLOW"));
        RB_ROBOT_SPEED_SLOW->setGeometry(QRect(100, 0, 81, 31));
        RB_ROBOT_SPEED_SLOW->setFont(font1);
        label_52 = new QLabel(GB_ROBOT);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(110, 620, 21, 21));
        label_52->setMinimumSize(QSize(21, 0));
        label_52->setFont(font1);
        label_52->setAlignment(Qt::AlignCenter);
        label_46 = new QLabel(GB_ROBOT);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(210, 620, 21, 21));
        label_46->setMinimumSize(QSize(21, 0));
        label_46->setFont(font1);
        label_46->setAlignment(Qt::AlignCenter);
        LE_JNT_REF_2 = new QLineEdit(GB_ROBOT);
        LE_JNT_REF_2->setObjectName(QString::fromUtf8("LE_JNT_REF_2"));
        LE_JNT_REF_2->setGeometry(QRect(30, 580, 61, 21));
        sizePolicy.setHeightForWidth(LE_JNT_REF_2->sizePolicy().hasHeightForWidth());
        LE_JNT_REF_2->setSizePolicy(sizePolicy);
        LE_JNT_REF_2->setMaximumSize(QSize(61, 21));
        LE_JNT_REF_2->setFont(font1);
        LE_JNT_REF_2->setReadOnly(true);
        label_49 = new QLabel(GB_ROBOT);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(210, 540, 81, 20));
        label_49->setFont(font1);
        label_49->setAlignment(Qt::AlignCenter);
        LE_ROBOT_INIT_STAT_1 = new QLineEdit(GB_ROBOT);
        LE_ROBOT_INIT_STAT_1->setObjectName(QString::fromUtf8("LE_ROBOT_INIT_STAT_1"));
        LE_ROBOT_INIT_STAT_1->setGeometry(QRect(110, 290, 31, 21));
        LE_ROBOT_INIT_STAT_1->setReadOnly(true);
        label_50 = new QLabel(GB_ROBOT);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(110, 560, 21, 21));
        label_50->setMinimumSize(QSize(21, 0));
        label_50->setFont(font1);
        label_50->setAlignment(Qt::AlignCenter);
        BTN_ROBOT_RESUME_OUTCOL = new QPushButton(GB_ROBOT);
        BTN_ROBOT_RESUME_OUTCOL->setObjectName(QString::fromUtf8("BTN_ROBOT_RESUME_OUTCOL"));
        BTN_ROBOT_RESUME_OUTCOL->setGeometry(QRect(235, 440, 61, 31));
        BTN_ROBOT_RESUME_OUTCOL->setFont(font1);
        LE_ROBOT_CONNECTION_DATA = new QLineEdit(GB_ROBOT);
        LE_ROBOT_CONNECTION_DATA->setObjectName(QString::fromUtf8("LE_ROBOT_CONNECTION_DATA"));
        LE_ROBOT_CONNECTION_DATA->setGeometry(QRect(230, 60, 61, 21));
        LE_ROBOT_CONNECTION_DATA->setAlignment(Qt::AlignCenter);
        LE_ROBOT_CONNECTION_DATA->setReadOnly(true);
        LE_JNT_REF_1 = new QLineEdit(GB_ROBOT);
        LE_JNT_REF_1->setObjectName(QString::fromUtf8("LE_JNT_REF_1"));
        LE_JNT_REF_1->setGeometry(QRect(30, 560, 61, 21));
        sizePolicy.setHeightForWidth(LE_JNT_REF_1->sizePolicy().hasHeightForWidth());
        LE_JNT_REF_1->setSizePolicy(sizePolicy);
        LE_JNT_REF_1->setMaximumSize(QSize(61, 21));
        LE_JNT_REF_1->setFont(font1);
        LE_JNT_REF_1->setReadOnly(true);
        label_43 = new QLabel(GB_ROBOT);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(210, 660, 21, 21));
        label_43->setMinimumSize(QSize(21, 0));
        label_43->setFont(font1);
        label_43->setAlignment(Qt::AlignCenter);
        LE_JNT_ENC_5 = new QLineEdit(GB_ROBOT);
        LE_JNT_ENC_5->setObjectName(QString::fromUtf8("LE_JNT_ENC_5"));
        LE_JNT_ENC_5->setGeometry(QRect(130, 640, 61, 21));
        LE_JNT_ENC_5->setFont(font1);
        LE_JNT_ENC_5->setReadOnly(true);
        line_11 = new QFrame(GB_ROBOT);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(10, 120, 271, 20));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        LE_ROBOT_INIT_STAT_4 = new QLineEdit(GB_ROBOT);
        LE_ROBOT_INIT_STAT_4->setObjectName(QString::fromUtf8("LE_ROBOT_INIT_STAT_4"));
        LE_ROBOT_INIT_STAT_4->setGeometry(QRect(230, 290, 31, 21));
        LE_ROBOT_INIT_STAT_4->setReadOnly(true);
        BTN_ROBOT_TASK_START = new QPushButton(GB_ROBOT);
        BTN_ROBOT_TASK_START->setObjectName(QString::fromUtf8("BTN_ROBOT_TASK_START"));
        BTN_ROBOT_TASK_START->setGeometry(QRect(10, 140, 111, 41));
        BTN_ROBOT_TASK_START->setFont(font1);
        BTN_ROBOT_REAL = new QPushButton(GB_ROBOT);
        BTN_ROBOT_REAL->setObjectName(QString::fromUtf8("BTN_ROBOT_REAL"));
        BTN_ROBOT_REAL->setGeometry(QRect(80, 370, 61, 31));
        BTN_ROBOT_REAL->setFont(font1);
        label_42 = new QLabel(GB_ROBOT);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(210, 640, 21, 21));
        label_42->setMinimumSize(QSize(21, 0));
        label_42->setFont(font1);
        label_42->setAlignment(Qt::AlignCenter);
        LE_JNT_REF_6 = new QLineEdit(GB_ROBOT);
        LE_JNT_REF_6->setObjectName(QString::fromUtf8("LE_JNT_REF_6"));
        LE_JNT_REF_6->setGeometry(QRect(30, 660, 61, 21));
        sizePolicy.setHeightForWidth(LE_JNT_REF_6->sizePolicy().hasHeightForWidth());
        LE_JNT_REF_6->setSizePolicy(sizePolicy);
        LE_JNT_REF_6->setMaximumSize(QSize(61, 21));
        LE_JNT_REF_6->setFont(font1);
        LE_JNT_REF_6->setReadOnly(true);
        label_6 = new QLabel(GB_ROBOT);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 660, 21, 21));
        label_6->setMinimumSize(QSize(21, 0));
        label_6->setMaximumSize(QSize(21, 21));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);
        label_56 = new QLabel(GB_ROBOT);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(100, 540, 101, 20));
        label_56->setFont(font1);
        label_56->setAlignment(Qt::AlignCenter);
        label_45 = new QLabel(GB_ROBOT);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(210, 580, 21, 21));
        label_45->setMinimumSize(QSize(21, 0));
        label_45->setFont(font1);
        label_45->setAlignment(Qt::AlignCenter);
        label_58 = new QLabel(GB_ROBOT);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(10, 620, 21, 21));
        label_58->setMinimumSize(QSize(21, 0));
        label_58->setMaximumSize(QSize(21, 21));
        label_58->setFont(font1);
        label_58->setAlignment(Qt::AlignCenter);
        LE_TCP_REF_RY = new QLineEdit(GB_ROBOT);
        LE_TCP_REF_RY->setObjectName(QString::fromUtf8("LE_TCP_REF_RY"));
        LE_TCP_REF_RY->setGeometry(QRect(230, 640, 61, 21));
        LE_TCP_REF_RY->setFont(font1);
        LE_TCP_REF_RY->setReadOnly(true);
        BTN_ROBOT_SIMUL = new QPushButton(GB_ROBOT);
        BTN_ROBOT_SIMUL->setObjectName(QString::fromUtf8("BTN_ROBOT_SIMUL"));
        BTN_ROBOT_SIMUL->setGeometry(QRect(80, 410, 61, 31));
        BTN_ROBOT_SIMUL->setFont(font1);
        label_8 = new QLabel(GB_ROBOT);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(110, 660, 21, 21));
        label_8->setMinimumSize(QSize(21, 0));
        label_8->setFont(font1);
        label_8->setAlignment(Qt::AlignCenter);
        LE_PG_MODE_REAL = new QLineEdit(GB_ROBOT);
        LE_PG_MODE_REAL->setObjectName(QString::fromUtf8("LE_PG_MODE_REAL"));
        LE_PG_MODE_REAL->setGeometry(QRect(10, 380, 61, 21));
        LE_PG_MODE_REAL->setFont(font1);
        LE_PG_MODE_REAL->setAlignment(Qt::AlignCenter);
        LE_PG_MODE_REAL->setReadOnly(true);
        LE_ROBOT_CONNECTION_CMD = new QLineEdit(GB_ROBOT);
        LE_ROBOT_CONNECTION_CMD->setObjectName(QString::fromUtf8("LE_ROBOT_CONNECTION_CMD"));
        LE_ROBOT_CONNECTION_CMD->setGeometry(QRect(170, 60, 61, 21));
        LE_ROBOT_CONNECTION_CMD->setAlignment(Qt::AlignCenter);
        LE_ROBOT_CONNECTION_CMD->setReadOnly(true);
        LE_ROBOT_STATE_MOVING = new QLineEdit(GB_ROBOT);
        LE_ROBOT_STATE_MOVING->setObjectName(QString::fromUtf8("LE_ROBOT_STATE_MOVING"));
        LE_ROBOT_STATE_MOVING->setGeometry(QRect(10, 490, 61, 21));
        LE_ROBOT_STATE_MOVING->setFont(font1);
        LE_ROBOT_STATE_MOVING->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATE_MOVING->setReadOnly(true);
        LE_ROBOT_STATE_IDLE = new QLineEdit(GB_ROBOT);
        LE_ROBOT_STATE_IDLE->setObjectName(QString::fromUtf8("LE_ROBOT_STATE_IDLE"));
        LE_ROBOT_STATE_IDLE->setGeometry(QRect(10, 470, 61, 21));
        LE_ROBOT_STATE_IDLE->setFont(font1);
        LE_ROBOT_STATE_IDLE->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATE_IDLE->setReadOnly(true);
        LE_ROBOT_STATUS_SELF_COLLISION = new QLineEdit(GB_ROBOT);
        LE_ROBOT_STATUS_SELF_COLLISION->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_SELF_COLLISION"));
        LE_ROBOT_STATUS_SELF_COLLISION->setGeometry(QRect(150, 430, 71, 21));
        LE_ROBOT_STATUS_SELF_COLLISION->setFont(font1);
        LE_ROBOT_STATUS_SELF_COLLISION->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_SELF_COLLISION->setReadOnly(true);
        label_92 = new QLabel(GB_ROBOT);
        label_92->setObjectName(QString::fromUtf8("label_92"));
        label_92->setGeometry(QRect(10, 320, 71, 31));
        label_92->setFont(font1);
        label_92->setAlignment(Qt::AlignCenter);
        LE_ROBOT_PRG_CONNECT = new QLineEdit(GB_ROBOT);
        LE_ROBOT_PRG_CONNECT->setObjectName(QString::fromUtf8("LE_ROBOT_PRG_CONNECT"));
        LE_ROBOT_PRG_CONNECT->setGeometry(QRect(170, 100, 121, 21));
        LE_ROBOT_PRG_CONNECT->setReadOnly(true);
        BTN_ROBOT_HALT = new QPushButton(GB_ROBOT);
        BTN_ROBOT_HALT->setObjectName(QString::fromUtf8("BTN_ROBOT_HALT"));
        BTN_ROBOT_HALT->setGeometry(QRect(235, 480, 61, 31));
        BTN_ROBOT_HALT->setFont(font1);
        label_53 = new QLabel(GB_ROBOT);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(110, 600, 21, 21));
        label_53->setMinimumSize(QSize(21, 0));
        label_53->setFont(font1);
        label_53->setAlignment(Qt::AlignCenter);
        LE_JNT_ENC_6 = new QLineEdit(GB_ROBOT);
        LE_JNT_ENC_6->setObjectName(QString::fromUtf8("LE_JNT_ENC_6"));
        LE_JNT_ENC_6->setGeometry(QRect(130, 660, 61, 21));
        LE_JNT_ENC_6->setFont(font1);
        LE_JNT_ENC_6->setReadOnly(true);
        label_91 = new QLabel(GB_ROBOT);
        label_91->setObjectName(QString::fromUtf8("label_91"));
        label_91->setGeometry(QRect(10, 80, 141, 21));
        label_91->setFont(font1);
        label_91->setAlignment(Qt::AlignCenter);
        BTN_ROBOT_PAUSE = new QPushButton(GB_ROBOT);
        BTN_ROBOT_PAUSE->setObjectName(QString::fromUtf8("BTN_ROBOT_PAUSE"));
        BTN_ROBOT_PAUSE->setGeometry(QRect(235, 360, 61, 31));
        BTN_ROBOT_PAUSE->setFont(font1);
        LE_JNT_REF_4 = new QLineEdit(GB_ROBOT);
        LE_JNT_REF_4->setObjectName(QString::fromUtf8("LE_JNT_REF_4"));
        LE_JNT_REF_4->setGeometry(QRect(30, 620, 61, 21));
        sizePolicy.setHeightForWidth(LE_JNT_REF_4->sizePolicy().hasHeightForWidth());
        LE_JNT_REF_4->setSizePolicy(sizePolicy);
        LE_JNT_REF_4->setMaximumSize(QSize(61, 21));
        LE_JNT_REF_4->setFont(font1);
        LE_JNT_REF_4->setReadOnly(true);
        LE_JNT_ENC_2 = new QLineEdit(GB_ROBOT);
        LE_JNT_ENC_2->setObjectName(QString::fromUtf8("LE_JNT_ENC_2"));
        LE_JNT_ENC_2->setGeometry(QRect(130, 580, 61, 21));
        LE_JNT_ENC_2->setFont(font1);
        LE_JNT_ENC_2->setReadOnly(true);
        LE_TCP_REF_Z = new QLineEdit(GB_ROBOT);
        LE_TCP_REF_Z->setObjectName(QString::fromUtf8("LE_TCP_REF_Z"));
        LE_TCP_REF_Z->setGeometry(QRect(230, 600, 61, 21));
        LE_TCP_REF_Z->setFont(font1);
        LE_TCP_REF_Z->setReadOnly(true);
        LE_TCP_REF_Y = new QLineEdit(GB_ROBOT);
        LE_TCP_REF_Y->setObjectName(QString::fromUtf8("LE_TCP_REF_Y"));
        LE_TCP_REF_Y->setGeometry(QRect(230, 580, 61, 21));
        LE_TCP_REF_Y->setFont(font1);
        LE_TCP_REF_Y->setReadOnly(true);
        label_60 = new QLabel(GB_ROBOT);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setGeometry(QRect(10, 100, 151, 21));
        label_60->setFont(font1);
        label_60->setAlignment(Qt::AlignCenter);
        label_57 = new QLabel(GB_ROBOT);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(10, 580, 21, 21));
        label_57->setMinimumSize(QSize(21, 0));
        label_57->setMaximumSize(QSize(21, 21));
        label_57->setFont(font1);
        label_57->setAlignment(Qt::AlignCenter);
        BTN_ROBOT_RESUME_PAUSED = new QPushButton(GB_ROBOT);
        BTN_ROBOT_RESUME_PAUSED->setObjectName(QString::fromUtf8("BTN_ROBOT_RESUME_PAUSED"));
        BTN_ROBOT_RESUME_PAUSED->setGeometry(QRect(235, 400, 61, 31));
        BTN_ROBOT_RESUME_PAUSED->setFont(font1);
        LE_ROBOT_INIT_STAT_3 = new QLineEdit(GB_ROBOT);
        LE_ROBOT_INIT_STAT_3->setObjectName(QString::fromUtf8("LE_ROBOT_INIT_STAT_3"));
        LE_ROBOT_INIT_STAT_3->setGeometry(QRect(190, 290, 31, 21));
        LE_ROBOT_INIT_STAT_3->setReadOnly(true);
        LE_JNT_ENC_4 = new QLineEdit(GB_ROBOT);
        LE_JNT_ENC_4->setObjectName(QString::fromUtf8("LE_JNT_ENC_4"));
        LE_JNT_ENC_4->setGeometry(QRect(130, 620, 61, 21));
        LE_JNT_ENC_4->setFont(font1);
        LE_JNT_ENC_4->setReadOnly(true);
        label_7 = new QLabel(GB_ROBOT);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 640, 21, 21));
        label_7->setMinimumSize(QSize(21, 0));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        label_48 = new QLabel(GB_ROBOT);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(7, 360, 71, 21));
        label_48->setFont(font1);
        label_48->setAlignment(Qt::AlignCenter);
        label_54 = new QLabel(GB_ROBOT);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(10, 450, 61, 21));
        label_54->setFont(font1);
        label_54->setAlignment(Qt::AlignCenter);
        label_51 = new QLabel(GB_ROBOT);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(110, 580, 21, 21));
        label_51->setMinimumSize(QSize(21, 0));
        label_51->setFont(font1);
        label_51->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_EXT_COLLISION = new QLineEdit(GB_ROBOT);
        LE_ROBOT_STATUS_EXT_COLLISION->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_EXT_COLLISION"));
        LE_ROBOT_STATUS_EXT_COLLISION->setGeometry(QRect(150, 410, 71, 21));
        LE_ROBOT_STATUS_EXT_COLLISION->setFont(font1);
        LE_ROBOT_STATUS_EXT_COLLISION->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_EXT_COLLISION->setReadOnly(true);
        LE_ROBOT_STATUS_PAUSED = new QLineEdit(GB_ROBOT);
        LE_ROBOT_STATUS_PAUSED->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_PAUSED"));
        LE_ROBOT_STATUS_PAUSED->setGeometry(QRect(150, 450, 71, 21));
        LE_ROBOT_STATUS_PAUSED->setFont(font1);
        LE_ROBOT_STATUS_PAUSED->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_PAUSED->setReadOnly(true);
        LE_ROBOT_INIT_STAT_2 = new QLineEdit(GB_ROBOT);
        LE_ROBOT_INIT_STAT_2->setObjectName(QString::fromUtf8("LE_ROBOT_INIT_STAT_2"));
        LE_ROBOT_INIT_STAT_2->setGeometry(QRect(150, 290, 31, 21));
        LE_ROBOT_INIT_STAT_2->setReadOnly(true);
        label_55 = new QLabel(GB_ROBOT);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(10, 540, 81, 21));
        label_55->setFont(font1);
        label_55->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(GB_ROBOT);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 640, 21, 21));
        label_5->setMinimumSize(QSize(21, 0));
        label_5->setMaximumSize(QSize(21, 21));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        label_59 = new QLabel(GB_ROBOT);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(10, 600, 21, 21));
        label_59->setMinimumSize(QSize(21, 0));
        label_59->setMaximumSize(QSize(21, 21));
        label_59->setFont(font1);
        label_59->setAlignment(Qt::AlignCenter);
        LE_JNT_ENC_1 = new QLineEdit(GB_ROBOT);
        LE_JNT_ENC_1->setObjectName(QString::fromUtf8("LE_JNT_ENC_1"));
        LE_JNT_ENC_1->setGeometry(QRect(130, 560, 61, 21));
        LE_JNT_ENC_1->setFont(font1);
        LE_JNT_ENC_1->setReadOnly(true);
        LE_TCP_REF_X = new QLineEdit(GB_ROBOT);
        LE_TCP_REF_X->setObjectName(QString::fromUtf8("LE_TCP_REF_X"));
        LE_TCP_REF_X->setGeometry(QRect(230, 560, 61, 21));
        LE_TCP_REF_X->setFont(font1);
        LE_TCP_REF_X->setReadOnly(true);
        LE_JNT_ENC_3 = new QLineEdit(GB_ROBOT);
        LE_JNT_ENC_3->setObjectName(QString::fromUtf8("LE_JNT_ENC_3"));
        LE_JNT_ENC_3->setGeometry(QRect(130, 600, 61, 21));
        LE_JNT_ENC_3->setFont(font1);
        LE_JNT_ENC_3->setReadOnly(true);
        LE_TCP_REF_RZ = new QLineEdit(GB_ROBOT);
        LE_TCP_REF_RZ->setObjectName(QString::fromUtf8("LE_TCP_REF_RZ"));
        LE_TCP_REF_RZ->setGeometry(QRect(230, 660, 61, 21));
        LE_TCP_REF_RZ->setFont(font1);
        LE_TCP_REF_RZ->setReadOnly(true);
        LE_ROBOT_STATUS_TEACHING = new QLineEdit(GB_ROBOT);
        LE_ROBOT_STATUS_TEACHING->setObjectName(QString::fromUtf8("LE_ROBOT_STATUS_TEACHING"));
        LE_ROBOT_STATUS_TEACHING->setGeometry(QRect(150, 390, 71, 21));
        LE_ROBOT_STATUS_TEACHING->setFont(font1);
        LE_ROBOT_STATUS_TEACHING->setAlignment(Qt::AlignCenter);
        LE_ROBOT_STATUS_TEACHING->setReadOnly(true);
        LE_ROBOT_PRG_WORKING_STATUS = new QLineEdit(GB_ROBOT);
        LE_ROBOT_PRG_WORKING_STATUS->setObjectName(QString::fromUtf8("LE_ROBOT_PRG_WORKING_STATUS"));
        LE_ROBOT_PRG_WORKING_STATUS->setGeometry(QRect(170, 80, 121, 21));
        LE_ROBOT_PRG_WORKING_STATUS->setReadOnly(true);
        LE_PG_MODE_SIMULATION = new QLineEdit(GB_ROBOT);
        LE_PG_MODE_SIMULATION->setObjectName(QString::fromUtf8("LE_PG_MODE_SIMULATION"));
        LE_PG_MODE_SIMULATION->setGeometry(QRect(10, 400, 61, 21));
        LE_PG_MODE_SIMULATION->setFont(font1);
        LE_PG_MODE_SIMULATION->setAlignment(Qt::AlignCenter);
        LE_PG_MODE_SIMULATION->setReadOnly(true);
        label_47 = new QLabel(GB_ROBOT);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(210, 600, 21, 21));
        label_47->setMinimumSize(QSize(21, 0));
        label_47->setFont(font1);
        label_47->setAlignment(Qt::AlignCenter);
        LE_JNT_REF_5 = new QLineEdit(GB_ROBOT);
        LE_JNT_REF_5->setObjectName(QString::fromUtf8("LE_JNT_REF_5"));
        LE_JNT_REF_5->setGeometry(QRect(30, 640, 61, 21));
        sizePolicy.setHeightForWidth(LE_JNT_REF_5->sizePolicy().hasHeightForWidth());
        LE_JNT_REF_5->setSizePolicy(sizePolicy);
        LE_JNT_REF_5->setMaximumSize(QSize(61, 21));
        LE_JNT_REF_5->setFont(font1);
        LE_JNT_REF_5->setReadOnly(true);
        label_84 = new QLabel(GB_ROBOT);
        label_84->setObjectName(QString::fromUtf8("label_84"));
        label_84->setGeometry(QRect(143, 360, 81, 21));
        label_84->setFont(font1);
        label_84->setAlignment(Qt::AlignCenter);
        label_44 = new QLabel(GB_ROBOT);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(210, 560, 21, 21));
        label_44->setMinimumSize(QSize(21, 0));
        label_44->setFont(font1);
        label_44->setAlignment(Qt::AlignCenter);
        label_93 = new QLabel(GB_ROBOT);
        label_93->setObjectName(QString::fromUtf8("label_93"));
        label_93->setGeometry(QRect(10, 290, 91, 21));
        label_93->setFont(font1);
        label_93->setAlignment(Qt::AlignCenter);
        line_12 = new QFrame(GB_ROBOT);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(10, 260, 281, 20));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(GB_ROBOT);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(10, 520, 281, 20));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(GB_ROBOT);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(10, 190, 281, 20));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        label_94 = new QLabel(GB_ROBOT);
        label_94->setObjectName(QString::fromUtf8("label_94"));
        label_94->setGeometry(QRect(10, 210, 111, 21));
        label_94->setFont(font1);
        label_94->setAlignment(Qt::AlignCenter);
        label_95 = new QLabel(GB_ROBOT);
        label_95->setObjectName(QString::fromUtf8("label_95"));
        label_95->setGeometry(QRect(10, 230, 111, 21));
        label_95->setFont(font1);
        label_95->setAlignment(Qt::AlignCenter);
        LE_ROBOT_INIT_POSITION = new QLineEdit(GB_ROBOT);
        LE_ROBOT_INIT_POSITION->setObjectName(QString::fromUtf8("LE_ROBOT_INIT_POSITION"));
        LE_ROBOT_INIT_POSITION->setGeometry(QRect(120, 230, 71, 21));
        LE_ROBOT_INIT_POSITION->setReadOnly(true);
        LE_ROBOT_INIT_BASE_ANGLE = new QLineEdit(GB_ROBOT);
        LE_ROBOT_INIT_BASE_ANGLE->setObjectName(QString::fromUtf8("LE_ROBOT_INIT_BASE_ANGLE"));
        LE_ROBOT_INIT_BASE_ANGLE->setGeometry(QRect(120, 210, 71, 21));
        LE_ROBOT_INIT_BASE_ANGLE->setReadOnly(true);
        label_96 = new QLabel(GB_ROBOT);
        label_96->setObjectName(QString::fromUtf8("label_96"));
        label_96->setGeometry(QRect(191, 210, 101, 21));
        label_96->setFont(font1);
        label_96->setAlignment(Qt::AlignCenter);
        label_97 = new QLabel(GB_ROBOT);
        label_97->setObjectName(QString::fromUtf8("label_97"));
        label_97->setGeometry(QRect(190, 230, 81, 21));
        label_97->setFont(font1);
        label_97->setAlignment(Qt::AlignCenter);

        retranslateUi(DialogRobot);

        QMetaObject::connectSlotsByName(DialogRobot);
    } // setupUi

    void retranslateUi(QDialog *DialogRobot)
    {
        DialogRobot->setWindowTitle(QCoreApplication::translate("DialogRobot", "Dialog", nullptr));
        GB_ROBOT->setTitle(QCoreApplication::translate("DialogRobot", "Robot", nullptr));
        label_110->setText(QCoreApplication::translate("DialogRobot", "Connection status", nullptr));
        BTN_ROBOT_TASK_STOP->setText(QCoreApplication::translate("DialogRobot", "Motion Stop", nullptr));
        label_4->setText(QCoreApplication::translate("DialogRobot", "J0", nullptr));
        LE_ROBOT_STATUS_SOS->setText(QCoreApplication::translate("DialogRobot", "SOS", nullptr));
        LE_ROBOT_STATUS_EMS->setText(QCoreApplication::translate("DialogRobot", "EMS", nullptr));
        RB_ROBOT_SPEED_NORMAL->setText(QCoreApplication::translate("DialogRobot", "Normal", nullptr));
        RB_ROBOT_SPEED_SLOW->setText(QCoreApplication::translate("DialogRobot", "Slow", nullptr));
        label_52->setText(QCoreApplication::translate("DialogRobot", "J3", nullptr));
        label_46->setText(QCoreApplication::translate("DialogRobot", "RX", nullptr));
        label_49->setText(QCoreApplication::translate("DialogRobot", "TCP Ref", nullptr));
        label_50->setText(QCoreApplication::translate("DialogRobot", "J0", nullptr));
        BTN_ROBOT_RESUME_OUTCOL->setText(QCoreApplication::translate("DialogRobot", "Colision", nullptr));
        LE_ROBOT_CONNECTION_DATA->setText(QCoreApplication::translate("DialogRobot", "DATA", nullptr));
        LE_JNT_REF_1->setText(QString());
        label_43->setText(QCoreApplication::translate("DialogRobot", "RZ", nullptr));
        BTN_ROBOT_TASK_START->setText(QCoreApplication::translate("DialogRobot", "Motion Start", nullptr));
        BTN_ROBOT_REAL->setText(QCoreApplication::translate("DialogRobot", "Real", nullptr));
        label_42->setText(QCoreApplication::translate("DialogRobot", "RY", nullptr));
        label_6->setText(QCoreApplication::translate("DialogRobot", "J5", nullptr));
        label_56->setText(QCoreApplication::translate("DialogRobot", "Joint Encoder", nullptr));
        label_45->setText(QCoreApplication::translate("DialogRobot", "Y", nullptr));
        label_58->setText(QCoreApplication::translate("DialogRobot", "J3", nullptr));
        BTN_ROBOT_SIMUL->setText(QCoreApplication::translate("DialogRobot", "Sim.", nullptr));
        label_8->setText(QCoreApplication::translate("DialogRobot", "J5", nullptr));
        LE_PG_MODE_REAL->setText(QCoreApplication::translate("DialogRobot", "Real", nullptr));
        LE_ROBOT_CONNECTION_CMD->setText(QCoreApplication::translate("DialogRobot", "CMD", nullptr));
        LE_ROBOT_STATE_MOVING->setText(QCoreApplication::translate("DialogRobot", "Working", nullptr));
        LE_ROBOT_STATE_IDLE->setText(QCoreApplication::translate("DialogRobot", "Waiting", nullptr));
        LE_ROBOT_STATUS_SELF_COLLISION->setText(QCoreApplication::translate("DialogRobot", "Self-Coli.", nullptr));
        label_92->setText(QCoreApplication::translate("DialogRobot", "Robot sp", nullptr));
        BTN_ROBOT_HALT->setText(QCoreApplication::translate("DialogRobot", "Stop", nullptr));
        label_53->setText(QCoreApplication::translate("DialogRobot", "J2", nullptr));
        label_91->setText(QCoreApplication::translate("DialogRobot", "Program operation", nullptr));
        BTN_ROBOT_PAUSE->setText(QCoreApplication::translate("DialogRobot", "Pause", nullptr));
        label_60->setText(QCoreApplication::translate("DialogRobot", "Program communicate", nullptr));
        label_57->setText(QCoreApplication::translate("DialogRobot", "J1", nullptr));
        BTN_ROBOT_RESUME_PAUSED->setText(QCoreApplication::translate("DialogRobot", "Resume", nullptr));
        label_7->setText(QCoreApplication::translate("DialogRobot", "J4", nullptr));
        label_48->setText(QCoreApplication::translate("DialogRobot", "Operate", nullptr));
        label_54->setText(QCoreApplication::translate("DialogRobot", "Status", nullptr));
        label_51->setText(QCoreApplication::translate("DialogRobot", "J1", nullptr));
        LE_ROBOT_STATUS_EXT_COLLISION->setText(QCoreApplication::translate("DialogRobot", "Exter Coli.", nullptr));
        LE_ROBOT_STATUS_PAUSED->setText(QCoreApplication::translate("DialogRobot", "Pause", nullptr));
        label_55->setText(QCoreApplication::translate("DialogRobot", "Joint Ref", nullptr));
        label_5->setText(QCoreApplication::translate("DialogRobot", "J4", nullptr));
        label_59->setText(QCoreApplication::translate("DialogRobot", "J2", nullptr));
        LE_ROBOT_STATUS_TEACHING->setText(QCoreApplication::translate("DialogRobot", "Teaching", nullptr));
        LE_PG_MODE_SIMULATION->setText(QCoreApplication::translate("DialogRobot", "Sim.", nullptr));
        label_47->setText(QCoreApplication::translate("DialogRobot", "Z", nullptr));
        label_84->setText(QCoreApplication::translate("DialogRobot", "Robot status", nullptr));
        label_44->setText(QCoreApplication::translate("DialogRobot", "X", nullptr));
        label_93->setText(QCoreApplication::translate("DialogRobot", "Init. process", nullptr));
        label_94->setText(QCoreApplication::translate("DialogRobot", "Base angle", nullptr));
        label_95->setText(QCoreApplication::translate("DialogRobot", "Position", nullptr));
        label_96->setText(QCoreApplication::translate("DialogRobot", "(100 ~ 150deg)", nullptr));
        label_97->setText(QCoreApplication::translate("DialogRobot", "pos.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRobot: public Ui_DialogRobot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGROBOT_H
