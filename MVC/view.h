#ifndef VIEW_H
#define VIEW_H

#include "valueobserver.h"
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class View; }
QT_END_NAMESPACE

class AbstractModel;
class View : public QWidget, public ValueObserver
{
    Q_OBJECT

public:
    View(AbstractModel *pModel, QWidget *parent = nullptr);
    ~View();
    void updateValue(int value);
private:
    void initView();
    Ui::View *ui;
    AbstractModel *m_pModel;
};
#endif // VIEW_H
