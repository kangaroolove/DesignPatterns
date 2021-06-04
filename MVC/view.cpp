#include "view.h"
#include "./ui_view.h"
#include "abstractmodel.h"

View::View(AbstractModel *pModel, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::View)
    , m_pModel(pModel)
{
    ui->setupUi(this);
    initView();
}

View::~View()
{
    delete ui;
}

void View::updateValue(int value)
{
    ui->labelValue->setText(QString::number(value));
    ui->progressBar->setValue(value);
}

void View::initView()
{
    updateValue(m_pModel->getValue());
    m_pModel->registerObserver(this);
}

