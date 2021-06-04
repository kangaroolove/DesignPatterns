#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "abstractcontroller.h"
#include <QWidget>

namespace Ui {
class Controller;
}

class AbstractModel;
class Controller : public QWidget, public AbstractController
{
    Q_OBJECT

public:
    explicit Controller(AbstractModel *pModel, QWidget *parent = nullptr);
    ~Controller();
    void increaseValue() override;
    void decreaseValue() override;
    void setValue(int nValue) override;
private:
    Ui::Controller *ui;
    AbstractModel *m_pModel;
};

#endif // CONTROLLER_H
