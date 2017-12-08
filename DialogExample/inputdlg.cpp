#include "inputdlg.h"

InputDlg::InputDlg(QWidget *parent):QDialog(parent)
{
    setWindowTitle(tr("标准输入对话框实例"));
    nameLabel1 = new QLabel;
    nameLabel2 = new QLabel;
    nameLabel1 -> setText(tr("姓名"));
    nameLabel2 -> setText(tr("张三"));
    nameLabel2 -> setFrameStyle(QFrame::Panel | QFrame::Sunken);
    nameBtn = new QPushButton;
    nameBtn ->setText(tr("修改姓名"));
    sexLabel1 = new QLabel;
    sexLabel1 -> setText(tr("性别"));
    sexLabel2 = new QLabel;
    sexLabel2 -> setText(tr("男"));                   // 性别的初始值
    sexLabel2 -> setFrameStyle(QFrame::Panel | QFrame::Sunken);
    sexBtn = new QPushButton;
    sexBtn -> setText(tr("修改性别"));
    ageLabel1 = new QLabel;
    ageLabel1 -> setText(tr("年龄"));
    ageLabel2 = new QLabel;
    ageLabel2 -> setText(tr("21"));                 // 年龄的初始值
    ageLabel2 -> setFrameStyle(QFrame::Panel | QFrame::Sunken);
    ageBtn = new QPushButton;
    ageBtn -> setText(tr("修改年龄"));
    scoreLabel1 = new QLabel;
    scoreLabel1 -> setText(tr("成绩："));
    scoreLabel2 = new QLabel;
    scoreLabel2 -> setText(tr("80"));
    scoreLabel2 -> setFrameStyle(QFrame::Panel | QFrame::Sunken);
    scoreBtn = new QPushButton;
    scoreBtn -> setText(tr("修改成绩："));

    mainLayout = new QGridLayout(this);
    mainLayout -> addWidget(nameLabel1, 0 ,0);
    mainLayout -> addWidget(nameLabel2, 0, 1);
    mainLayout -> addWidget(nameBtn, 0, 2);
    mainLayout -> addWidget(sexLabel1, 1, 0);
    mainLayout -> addWidget(sexLabel2, 1, 1);
    mainLayout -> addWidget(sexBtn, 1, 2);
    mainLayout -> addWidget(ageLabel1, 2, 0);
    mainLayout -> addWidget(ageLabel2, 2, 1);
    mainLayout -> addWidget(scoreLabel1, 3, 0);
    mainLayout -> addWidget(scoreLabel2, 3, 1);
    mainLayout -> addWidget(scoreBtn, 3, 2);

    connect(nameBtn, SIGNAL(clicked()), this, SLOT(ChangeName()));
    connect(sexBtn, SIGNAL(clicked()), this, SLOT(ChangeSex()));
    connect(ageBtn, SIGNAL(clicked()), this, SLOT(ChangeAge()));
    connect(scoreBtn, SIGNAL(clicked()), this, SLOT(ChangeScore()));
}

void InputDlg::ChangeName()
{

}

void InputDlg::ChangeSex()
{

}

void InputDlg::ChangeAge()
{

}

void InputDlg::ChangeScore()
{

}
