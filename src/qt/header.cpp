#include "header.h"
#include "ui_Header.h"

Header::Header(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Header)
{
    ui->setupUi(this);
}

Header::~Header()
{
    delete ui;
}

void Header::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
        case QEvent::LanguageChange:
            ui->retranslateUi(this);
            break;
        default:
            break;
    }
}
