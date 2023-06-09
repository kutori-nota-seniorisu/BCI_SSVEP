/********************************************************************************
** Form generated from reading UI file 'panel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANEL_H
#define UI_PANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Robotiq3FingerForm
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *group_activation;
    QPushButton *button_on;
    QPushButton *button_off;
    QGroupBox *group_mode;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *button_basic;
    QPushButton *button_wide;
    QPushButton *button_pinch;
    QPushButton *button_scissor;
    QGroupBox *group_position;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *layout_position;
    QHBoxLayout *layout_full;
    QPushButton *button_open;
    QPushButton *button_close;
    QSlider *slider_position;
    QVBoxLayout *layout_send;
    QPushButton *button_send;
    QCheckBox *check_send;
    QGridLayout *group_sliders;
    QLabel *label_force;
    QLabel *force_unit;
    QLabel *label_speed;
    QLabel *force_value;
    QSlider *slider_force;
    QSlider *slider_speed;
    QLabel *speed_value;
    QLabel *speed_unit;
    QFrame *group_status;
    QGridLayout *layout_status;
    QLabel *pos_a;
    QFrame *line_b;
    QLabel *cur_a;
    QLabel *pos_c;
    QLabel *label_status_pos;
    QFrame *line_c;
    QFrame *line_a;
    QLabel *label_status_cur;
    QLabel *label;
    QLabel *pos_b;
    QLabel *label_fb;
    QLabel *cur_b;
    QLabel *label_fc;
    QLabel *label_fa;
    QLabel *cur_c;
    QLabel *label_s;
    QLabel *pos_s;
    QLabel *cur_s;
    QFrame *line_s;

    void setupUi(QWidget *Robotiq3FingerForm)
    {
        if (Robotiq3FingerForm->objectName().isEmpty())
            Robotiq3FingerForm->setObjectName(QStringLiteral("Robotiq3FingerForm"));
        Robotiq3FingerForm->resize(400, 368);
        verticalLayout_4 = new QVBoxLayout(Robotiq3FingerForm);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        group_activation = new QHBoxLayout();
        group_activation->setObjectName(QStringLiteral("group_activation"));
        button_on = new QPushButton(Robotiq3FingerForm);
        button_on->setObjectName(QStringLiteral("button_on"));

        group_activation->addWidget(button_on);

        button_off = new QPushButton(Robotiq3FingerForm);
        button_off->setObjectName(QStringLiteral("button_off"));

        group_activation->addWidget(button_off);


        verticalLayout_4->addLayout(group_activation);

        group_mode = new QGroupBox(Robotiq3FingerForm);
        group_mode->setObjectName(QStringLiteral("group_mode"));
        horizontalLayout_4 = new QHBoxLayout(group_mode);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        button_basic = new QPushButton(group_mode);
        button_basic->setObjectName(QStringLiteral("button_basic"));

        horizontalLayout_4->addWidget(button_basic);

        button_wide = new QPushButton(group_mode);
        button_wide->setObjectName(QStringLiteral("button_wide"));

        horizontalLayout_4->addWidget(button_wide);

        button_pinch = new QPushButton(group_mode);
        button_pinch->setObjectName(QStringLiteral("button_pinch"));

        horizontalLayout_4->addWidget(button_pinch);

        button_scissor = new QPushButton(group_mode);
        button_scissor->setObjectName(QStringLiteral("button_scissor"));

        horizontalLayout_4->addWidget(button_scissor);


        verticalLayout_4->addWidget(group_mode);

        group_position = new QGroupBox(Robotiq3FingerForm);
        group_position->setObjectName(QStringLiteral("group_position"));
        horizontalLayout_2 = new QHBoxLayout(group_position);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        layout_position = new QVBoxLayout();
        layout_position->setObjectName(QStringLiteral("layout_position"));
        layout_full = new QHBoxLayout();
        layout_full->setObjectName(QStringLiteral("layout_full"));
        button_open = new QPushButton(group_position);
        button_open->setObjectName(QStringLiteral("button_open"));

        layout_full->addWidget(button_open);

        button_close = new QPushButton(group_position);
        button_close->setObjectName(QStringLiteral("button_close"));

        layout_full->addWidget(button_close);


        layout_position->addLayout(layout_full);

        slider_position = new QSlider(group_position);
        slider_position->setObjectName(QStringLiteral("slider_position"));
        slider_position->setMaximum(255);
        slider_position->setOrientation(Qt::Horizontal);
        slider_position->setTickPosition(QSlider::TicksBothSides);
        slider_position->setTickInterval(50);

        layout_position->addWidget(slider_position);


        horizontalLayout_2->addLayout(layout_position);

        layout_send = new QVBoxLayout();
        layout_send->setObjectName(QStringLiteral("layout_send"));
        button_send = new QPushButton(group_position);
        button_send->setObjectName(QStringLiteral("button_send"));

        layout_send->addWidget(button_send);

        check_send = new QCheckBox(group_position);
        check_send->setObjectName(QStringLiteral("check_send"));

        layout_send->addWidget(check_send);


        horizontalLayout_2->addLayout(layout_send);


        verticalLayout_4->addWidget(group_position);

        group_sliders = new QGridLayout();
        group_sliders->setObjectName(QStringLiteral("group_sliders"));
        label_force = new QLabel(Robotiq3FingerForm);
        label_force->setObjectName(QStringLiteral("label_force"));

        group_sliders->addWidget(label_force, 0, 0, 1, 1);

        force_unit = new QLabel(Robotiq3FingerForm);
        force_unit->setObjectName(QStringLiteral("force_unit"));

        group_sliders->addWidget(force_unit, 0, 3, 1, 1);

        label_speed = new QLabel(Robotiq3FingerForm);
        label_speed->setObjectName(QStringLiteral("label_speed"));

        group_sliders->addWidget(label_speed, 1, 0, 1, 1);

        force_value = new QLabel(Robotiq3FingerForm);
        force_value->setObjectName(QStringLiteral("force_value"));
        force_value->setMinimumSize(QSize(40, 0));
        force_value->setMaximumSize(QSize(40, 16777215));
        force_value->setFrameShape(QFrame::Box);
        force_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        group_sliders->addWidget(force_value, 0, 2, 1, 1);

        slider_force = new QSlider(Robotiq3FingerForm);
        slider_force->setObjectName(QStringLiteral("slider_force"));
        slider_force->setMaximum(255);
        slider_force->setOrientation(Qt::Horizontal);

        group_sliders->addWidget(slider_force, 0, 1, 1, 1);

        slider_speed = new QSlider(Robotiq3FingerForm);
        slider_speed->setObjectName(QStringLiteral("slider_speed"));
        slider_speed->setMaximum(255);
        slider_speed->setOrientation(Qt::Horizontal);

        group_sliders->addWidget(slider_speed, 1, 1, 1, 1);

        speed_value = new QLabel(Robotiq3FingerForm);
        speed_value->setObjectName(QStringLiteral("speed_value"));
        speed_value->setMinimumSize(QSize(40, 0));
        speed_value->setMaximumSize(QSize(40, 16777215));
        speed_value->setFrameShape(QFrame::Box);
        speed_value->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        group_sliders->addWidget(speed_value, 1, 2, 1, 1);

        speed_unit = new QLabel(Robotiq3FingerForm);
        speed_unit->setObjectName(QStringLiteral("speed_unit"));

        group_sliders->addWidget(speed_unit, 1, 3, 1, 1);


        verticalLayout_4->addLayout(group_sliders);

        group_status = new QFrame(Robotiq3FingerForm);
        group_status->setObjectName(QStringLiteral("group_status"));
        group_status->setFrameShape(QFrame::Panel);
        group_status->setFrameShadow(QFrame::Plain);
        layout_status = new QGridLayout(group_status);
        layout_status->setObjectName(QStringLiteral("layout_status"));
        pos_a = new QLabel(group_status);
        pos_a->setObjectName(QStringLiteral("pos_a"));
        pos_a->setFrameShape(QFrame::StyledPanel);
        pos_a->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        layout_status->addWidget(pos_a, 2, 1, 1, 1);

        line_b = new QFrame(group_status);
        line_b->setObjectName(QStringLiteral("line_b"));
        line_b->setFrameShape(QFrame::HLine);
        line_b->setFrameShadow(QFrame::Sunken);

        layout_status->addWidget(line_b, 1, 2, 1, 1);

        cur_a = new QLabel(group_status);
        cur_a->setObjectName(QStringLiteral("cur_a"));
        cur_a->setFrameShape(QFrame::StyledPanel);
        cur_a->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        layout_status->addWidget(cur_a, 3, 1, 1, 1);

        pos_c = new QLabel(group_status);
        pos_c->setObjectName(QStringLiteral("pos_c"));
        pos_c->setFrameShape(QFrame::StyledPanel);
        pos_c->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        layout_status->addWidget(pos_c, 2, 3, 1, 1);

        label_status_pos = new QLabel(group_status);
        label_status_pos->setObjectName(QStringLiteral("label_status_pos"));

        layout_status->addWidget(label_status_pos, 2, 0, 1, 1);

        line_c = new QFrame(group_status);
        line_c->setObjectName(QStringLiteral("line_c"));
        line_c->setFrameShape(QFrame::HLine);
        line_c->setFrameShadow(QFrame::Sunken);

        layout_status->addWidget(line_c, 1, 3, 1, 1);

        line_a = new QFrame(group_status);
        line_a->setObjectName(QStringLiteral("line_a"));
        line_a->setFrameShape(QFrame::HLine);
        line_a->setFrameShadow(QFrame::Sunken);

        layout_status->addWidget(line_a, 1, 1, 1, 1);

        label_status_cur = new QLabel(group_status);
        label_status_cur->setObjectName(QStringLiteral("label_status_cur"));

        layout_status->addWidget(label_status_cur, 3, 0, 1, 1);

        label = new QLabel(group_status);
        label->setObjectName(QStringLiteral("label"));

        layout_status->addWidget(label, 0, 0, 1, 1);

        pos_b = new QLabel(group_status);
        pos_b->setObjectName(QStringLiteral("pos_b"));
        pos_b->setFrameShape(QFrame::StyledPanel);
        pos_b->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        layout_status->addWidget(pos_b, 2, 2, 1, 1);

        label_fb = new QLabel(group_status);
        label_fb->setObjectName(QStringLiteral("label_fb"));
        label_fb->setAlignment(Qt::AlignCenter);

        layout_status->addWidget(label_fb, 0, 2, 1, 1);

        cur_b = new QLabel(group_status);
        cur_b->setObjectName(QStringLiteral("cur_b"));
        cur_b->setFrameShape(QFrame::StyledPanel);
        cur_b->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        layout_status->addWidget(cur_b, 3, 2, 1, 1);

        label_fc = new QLabel(group_status);
        label_fc->setObjectName(QStringLiteral("label_fc"));
        label_fc->setAlignment(Qt::AlignCenter);

        layout_status->addWidget(label_fc, 0, 3, 1, 1);

        label_fa = new QLabel(group_status);
        label_fa->setObjectName(QStringLiteral("label_fa"));
        label_fa->setAlignment(Qt::AlignCenter);

        layout_status->addWidget(label_fa, 0, 1, 1, 1);

        cur_c = new QLabel(group_status);
        cur_c->setObjectName(QStringLiteral("cur_c"));
        cur_c->setFrameShape(QFrame::StyledPanel);
        cur_c->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        layout_status->addWidget(cur_c, 3, 3, 1, 1);

        label_s = new QLabel(group_status);
        label_s->setObjectName(QStringLiteral("label_s"));
        label_s->setAlignment(Qt::AlignCenter);

        layout_status->addWidget(label_s, 0, 4, 1, 1);

        pos_s = new QLabel(group_status);
        pos_s->setObjectName(QStringLiteral("pos_s"));
        pos_s->setFrameShape(QFrame::StyledPanel);
        pos_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        layout_status->addWidget(pos_s, 2, 4, 1, 1);

        cur_s = new QLabel(group_status);
        cur_s->setObjectName(QStringLiteral("cur_s"));
        cur_s->setFrameShape(QFrame::StyledPanel);
        cur_s->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        layout_status->addWidget(cur_s, 3, 4, 1, 1);

        line_s = new QFrame(group_status);
        line_s->setObjectName(QStringLiteral("line_s"));
        line_s->setFrameShape(QFrame::HLine);
        line_s->setFrameShadow(QFrame::Sunken);

        layout_status->addWidget(line_s, 1, 4, 1, 1);


        verticalLayout_4->addWidget(group_status);


        retranslateUi(Robotiq3FingerForm);

        QMetaObject::connectSlotsByName(Robotiq3FingerForm);
    } // setupUi

    void retranslateUi(QWidget *Robotiq3FingerForm)
    {
        Robotiq3FingerForm->setWindowTitle(QApplication::translate("Robotiq3FingerForm", "Form", Q_NULLPTR));
        button_on->setText(QApplication::translate("Robotiq3FingerForm", "ON", Q_NULLPTR));
        button_off->setText(QApplication::translate("Robotiq3FingerForm", "OFF", Q_NULLPTR));
        group_mode->setTitle(QApplication::translate("Robotiq3FingerForm", "Mode", Q_NULLPTR));
        button_basic->setText(QApplication::translate("Robotiq3FingerForm", "Basic", Q_NULLPTR));
        button_wide->setText(QApplication::translate("Robotiq3FingerForm", "Wide", Q_NULLPTR));
        button_pinch->setText(QApplication::translate("Robotiq3FingerForm", "Pinch", Q_NULLPTR));
        button_scissor->setText(QApplication::translate("Robotiq3FingerForm", "Scissor", Q_NULLPTR));
        group_position->setTitle(QApplication::translate("Robotiq3FingerForm", "Position", Q_NULLPTR));
        button_open->setText(QApplication::translate("Robotiq3FingerForm", "Open", Q_NULLPTR));
        button_close->setText(QApplication::translate("Robotiq3FingerForm", "Close", Q_NULLPTR));
        button_send->setText(QApplication::translate("Robotiq3FingerForm", "SEND", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        check_send->setToolTip(QApplication::translate("Robotiq3FingerForm", "send all position values immediately", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        check_send->setText(QApplication::translate("Robotiq3FingerForm", "immediately", Q_NULLPTR));
        label_force->setText(QApplication::translate("Robotiq3FingerForm", "Force", Q_NULLPTR));
        force_unit->setText(QApplication::translate("Robotiq3FingerForm", "N", Q_NULLPTR));
        label_speed->setText(QApplication::translate("Robotiq3FingerForm", "Speed", Q_NULLPTR));
        force_value->setText(QApplication::translate("Robotiq3FingerForm", "--", Q_NULLPTR));
        speed_value->setText(QApplication::translate("Robotiq3FingerForm", "--", Q_NULLPTR));
        speed_unit->setText(QApplication::translate("Robotiq3FingerForm", "mm/s", Q_NULLPTR));
        pos_a->setText(QApplication::translate("Robotiq3FingerForm", "--", Q_NULLPTR));
        cur_a->setText(QApplication::translate("Robotiq3FingerForm", "--", Q_NULLPTR));
        pos_c->setText(QApplication::translate("Robotiq3FingerForm", "--", Q_NULLPTR));
        label_status_pos->setText(QApplication::translate("Robotiq3FingerForm", "Position", Q_NULLPTR));
        label_status_cur->setText(QApplication::translate("Robotiq3FingerForm", "Current (mA)", Q_NULLPTR));
        label->setText(QApplication::translate("Robotiq3FingerForm", "Finger", Q_NULLPTR));
        pos_b->setText(QApplication::translate("Robotiq3FingerForm", "--", Q_NULLPTR));
        label_fb->setText(QApplication::translate("Robotiq3FingerForm", "B", Q_NULLPTR));
        cur_b->setText(QApplication::translate("Robotiq3FingerForm", "--", Q_NULLPTR));
        label_fc->setText(QApplication::translate("Robotiq3FingerForm", "C", Q_NULLPTR));
        label_fa->setText(QApplication::translate("Robotiq3FingerForm", "A", Q_NULLPTR));
        cur_c->setText(QApplication::translate("Robotiq3FingerForm", "--", Q_NULLPTR));
        label_s->setText(QApplication::translate("Robotiq3FingerForm", "S", Q_NULLPTR));
        pos_s->setText(QApplication::translate("Robotiq3FingerForm", "--", Q_NULLPTR));
        cur_s->setText(QApplication::translate("Robotiq3FingerForm", "--", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Robotiq3FingerForm: public Ui_Robotiq3FingerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANEL_H
