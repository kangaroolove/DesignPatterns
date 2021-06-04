#include "progressbarmodel.h"
#include "valueobserver.h"

ProgressBarModel::ProgressBarModel()
    : m_nValue(0)
{

}

void ProgressBarModel::initialize()
{
    on();
}

void ProgressBarModel::on()
{
    m_nValue = 50;
}

void ProgressBarModel::off()
{
    m_nValue = 0;
}

void ProgressBarModel::setValue(int value)
{
    m_nValue = value;
    notifyValueObservers();
}

int ProgressBarModel::getValue()
{
    return m_nValue;
}

void ProgressBarModel::registerObserver(ValueObserver *pObserver)
{
    if (m_observers.indexOf(pObserver) == -1)
    {
        m_observers.push_back(pObserver);
    }
}

void ProgressBarModel::removeObserver(ValueObserver *pObserver)
{
    int nIndex = m_observers.indexOf(pObserver);
    if (nIndex >= 0)
    {
        m_observers.remove(nIndex);
    }
}

void ProgressBarModel::notifyValueObservers()
{
    for (int i = 0; i < m_observers.size(); i++)
    {
        m_observers[i]->updateValue(getValue());
    }
}
