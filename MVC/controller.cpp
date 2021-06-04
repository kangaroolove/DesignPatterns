#include "controller.h"
#include "ui_controller.h"
#include "abstractmodel.h"

Controller::Controller(AbstractModel *pModel, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Controller)
    , m_pModel(pModel)
{
    ui->setupUi(this);

    connect(ui->btnIncrease, &QPushButton::clicked, this, [this]{
        increaseValue();
    });

    connect(ui->btnDecrease, &QPushButton::clicked, this, [this]{
        decreaseValue();
    });

    connect(ui->btnSet, &QPushButton::clicked, this, [this]{
       int nValue = ui->lineEdit->text().toInt();
       m_pModel->setValue(nValue);
    });
}

Controller::~Controller()
{
    delete ui;
}

void Controller::increaseValue()
{
    int nValue = m_pModel->getValue();
    m_pModel->setValue(++nValue);
}

void Controller::decreaseValue()
{
    int nValue = m_pModel->getValue();
    m_pModel->setValue(--nValue);
}

void Controller::setValue(int nValue)
{
    m_pModel->setValue(nValue);
}
