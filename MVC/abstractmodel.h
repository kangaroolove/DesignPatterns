#ifndef ABSTRACTMODEL_H
#define ABSTRACTMODEL_H

class ValueObserver;
class AbstractModel
{
public:
    AbstractModel();
    virtual void initialize() = 0;
    virtual void on() = 0;
    virtual void off() = 0;
    virtual void setValue(int value) = 0;
    virtual int getValue() = 0;
    virtual void registerObserver(ValueObserver *pObserver) = 0;
    virtual void removeObserver(ValueObserver *pObserver) = 0;
};

#endif // ABSTRACTMODEL_H
