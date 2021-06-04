#ifndef PROGRESSBARMODEL_H
#define PROGRESSBARMODEL_H

#include "abstractmodel.h"
#include <QVector>

class ProgressBarModel : public AbstractModel
{
public:
    ProgressBarModel();
    void initialize() override;
    void on() override;
    void off() override;
    void setValue(int value) override;
    int getValue() override;
    void registerObserver(ValueObserver *pObserver) override;
    void removeObserver(ValueObserver *pObserver) override;
private:
    void notifyValueObservers();
    QVector<ValueObserver *> m_observers;
    int m_nValue;
};

#endif // PROGRESSBARMODEL_H
